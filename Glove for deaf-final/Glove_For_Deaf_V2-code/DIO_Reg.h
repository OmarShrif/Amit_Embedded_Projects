#ifndef DIO_REG_H_INCLUDED
#define DIO_REG_H_INCLUDED

//PORTA
#define DDRA *((volatile u8*) 0x3A)
#define PORTA *((volatile u8*) 0x3B)
#define PINA *((volatile u8*) 0x39)

//PORTB
#define DDRB *((volatile u8*) 0x37)
#define PORTB *((volatile u8*) 0x38)
#define PINB *((volatile u8*) 0x36)

//PORTC
#define DDRC *((volatile u8*) 0x34)
#define PORTC *((volatile u8*) 0x35)
#define PINC *((volatile u8*) 0x33)

//PORTD
#define DDRD *((volatile u8*) 0x31)
#define PORTD *((volatile u8*) 0x32)
#define PIND *((volatile u8*) 0x30)

//External Intrupt 0
#define SREG *((volatile u8*) 0x5F)
#define MCUCR *((volatile u8*) 0x55)
#define MCUCSR *((volatile u8*) 0x54)
#define GICR *((volatile u8*) 0x5B)
#define GIFR *((volatile u8*) 0x5A)

//ADC
#define ADMUX *((volatile u8*) 0x27)
#define ADCSRA *((volatile u8*) 0x26)
#define ADCH *((volatile u8*) 0x25)
#define ADCL *((volatile u8*) 0x24)
#define SFIOR *((volatile u8*) 0x50)

//Timer 0
#define TCCR0 *((volatile u8*) 0x53)
#define TCNT0 *((volatile u8*) 0x52)
#define TIMSK *((volatile u8*) 0x59)
#define OCR0 *((volatile u8*) 0x5C)

//ICU in Timer 1
#define TCCR1A *((volatile u8*) 0x4F)
#define TCCR1B *((volatile u8*) 0x4E)
#define TIFR *((volatile u8*) 0x58)
#define TCNT1 *((volatile u16*) 0x4C)
#define ICR1 *((volatile u16*) 0x46)

//Watch Dog
#define WDTCR *((volatile u8*)0x41)

//UART
#define UCSRA *((volatile u8*) 0x2B)
#define UCSRB *((volatile u8*) 0x2A)
#define UCSRC *((volatile u8*) 0x40)
#define UBRRH *((volatile u8*) 0x40)
#define UBRRL *((volatile u8*) 0x29)
#define UDR *((volatile u8*) 0x2C)

//SPI
#define SPCR *((volatile u8*) 0x2D)
#define SPSR *((volatile u8*) 0x2E)
#define SPDR *((volatile u8*) 0x2F)

//I2C
#define TWBR *((volatile u8*) 0x20)
#define TWSR *((volatile u8*) 0x21)
#define TWAR *((volatile u8*) 0x22)
#define TWDR *((volatile u8*) 0x23)
#define TWCR *((volatile u8*) 0x56)

#endif // DIO_REG_H_INCLUDED
