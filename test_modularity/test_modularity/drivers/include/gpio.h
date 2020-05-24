/*
 * gpio.h
 *
 * Created: 5/23/2020 3:35:55 PM
 *  Author: vicvi
 */ 


#ifndef GPIO_H_
#define GPIO_H_


#include "gsm_atmega328pb.h"

typedef struct  
{
	volatile unsigned char f_ok;
	volatile unsigned char f_error;
	volatile unsigned char f_connect;
}GSM_VARS;



unsigned char test_func2(GSM_VARS *pGSM_VARS);
// unsigned char test_func3(GSM_VARS *pGSM_VARS);
// unsigned char enable_func(GSM_VARS *pGSM_VARS);

#endif /* GPIO_H_ */