/*
 * gpio.c
 *
 * Created: 5/23/2020 3:36:08 PM
 *  Author: vicvi
 */ 

#include "gpio.h"

unsigned char test_func2(GSM_VARS *pGSM_VARS)
{
	if (pGSM_VARS->f_connect == 0x03)
	{
		return 0x01;
	}
	
	return 0x00;
}



 unsigned char test_func3(GSM_VARS *pGSM_VARS)
{
	pGSM_VARS->f_ip_ok = 0x01;
	
	return 0x01;
	
}

unsigned char enable_func(GSM_VARS *pGSM_VARS)
{
	if (test_func2(pGSM_VARS->f_connect) == 0x01)
	{
	} 
	else
	{
	}
}
