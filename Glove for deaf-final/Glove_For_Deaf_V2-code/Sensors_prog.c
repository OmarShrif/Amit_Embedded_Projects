#include "STD_types.h"
#include "Utilities.h"
#include "Dio_Reg.h"
#include "Dio_int.h"
#include "Sensors_int.h"

void Sensor_int(void)
{
	Dio_SetPinDirection(GroupD,PIN0,INPUT);
	Dio_SetPinDirection(GroupD,PIN7,INPUT);
	Dio_SetPinDirection(GroupB,PIN4,INPUT);
	Dio_SetPinDirection(GroupB,PIN5,INPUT);
	Dio_SetPinDirection(GroupA,PIN0,INPUT);
}

u8 Sensor_Reading(u8 GroupNo, u8 PinNo)
{
	return Dio_GetPinValue(GroupNo,PinNo);
}
