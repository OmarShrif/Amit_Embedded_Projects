#include "STD_types.h"
#include "Utilities.h"
#include "DIO_Reg.h"
#include "Dio_Int.h"

void Dio_SetPinDirection(u8 GroupNo, u8 PinNo, u8 Direction)
{
	if((GroupNo<=GroupD)&&(PinNo<=PIN7))
	{
	if(Direction==INPUT)
	{
		switch(GroupNo)
		{
		case GroupA: clr_bit(DDRA, PinNo); break;
		case GroupB: clr_bit(DDRB, PinNo); break;
		case GroupC: clr_bit(DDRC, PinNo); break;
		case GroupD: clr_bit(DDRD, PinNo); break;
		}
	}
	if(Direction==OUTPUT)
	{
		switch(GroupNo)
		{
		case GroupA: set_bit(DDRA, PinNo); break;
		case GroupB: set_bit(DDRB, PinNo); break;
		case GroupC: set_bit(DDRC, PinNo); break;
		case GroupD: set_bit(DDRD, PinNo); break;
		}
	}
	}
	else
	{
		//not reachable
	}

}
void Dio_SetPinValue(u8 GroupNo, u8 PinNo, u8 Value)
{
	if(Value==LOW)
		{
			switch(GroupNo)
			{
			case GroupA: clr_bit(PORTA, PinNo); break;
			case GroupB: clr_bit(PORTB, PinNo); break;
			case GroupC: clr_bit(PORTC, PinNo); break;
			case GroupD: clr_bit(PORTD, PinNo); break;
			}
		}
		if(Value==HIGH)
		{
			switch(GroupNo)
			{
			case GroupA: set_bit(PORTA, PinNo); break;
			case GroupB: set_bit(PORTB, PinNo); break;
			case GroupC: set_bit(PORTC, PinNo); break;
			case GroupD: set_bit(PORTD, PinNo); break;
			}
		}
		if(Value==REVERS)
				{
					switch(GroupNo)
					{
					case GroupA: tog_bit(PORTA, PinNo); break;
					case GroupB: tog_bit(PORTB, PinNo); break;
					case GroupC: tog_bit(PORTC, PinNo); break;
					case GroupD: tog_bit(PORTD, PinNo); break;
					}
				}
}
u8 Dio_GetPinValue(u8 GroupNo, u8 PinNo)
{
	u8 ret_value;
	switch(GroupNo)
	{
	case GroupA: ret_value=get_bit(PINA, PinNo); break;
	case GroupB: ret_value=get_bit(PINB, PinNo); break;
	case GroupC: ret_value=get_bit(PINC, PinNo); break;
	case GroupD: ret_value=get_bit(PIND, PinNo); break;
	}

return ret_value;
}
void Dio_SetPortDirection(u8 GroupNo, u8 Direction)
{
	if((GroupNo<=GroupD))
		{
		if(Direction==INPUT)
		{
			switch(GroupNo)
			{
			case GroupA: DDRA=0x00; break;
			case GroupB: DDRB=0x00; break;
			case GroupC: DDRC=0x00; break;
			case GroupD: DDRD=0x00; break;
			}
		}
		if(Direction==OUTPUT)
		{
			switch(GroupNo)
			{
			case GroupA: DDRA=0xff; break;
			case GroupB: DDRB=0xff; break;
			case GroupC: DDRC=0xff; break;
			case GroupD: DDRD=0xff; break;
			}
		}
		}
		else
		{
			//not reachable
		}
}
void Dio_SetPortValue(u8 GroupNo, u8 Value)
{
	if(Value==LOW)
			{
				switch(GroupNo)
				{
				case GroupA: PORTA=0x00; break;
				case GroupB: PORTB=0x00; break;
				case GroupC: PORTC=0x00; break;
				case GroupD: PORTD=0x00; break;
				}
			}

			else
				{
				switch(GroupNo)
				{
				case GroupA: PORTA=Value; break;
				case GroupB: PORTB=Value; break;
				case GroupC: PORTC=Value; break;
				case GroupD: PORTD=Value; break;
				}
				}
}
