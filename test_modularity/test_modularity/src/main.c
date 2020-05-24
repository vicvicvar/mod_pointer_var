/*
 * test_modularity.c
 *
 * Created: 5/23/2020 3:34:28 PM
 * Author : vicvi
 */ 

#include <avr/io.h>

#include "gsm_atmega328pb.h"

GSM_VARS my_vars;

int main(void)
{
    /* Replace with your application code */
    while (1) 
    {
		test_func(my_vars.f_connect);
    }
}

