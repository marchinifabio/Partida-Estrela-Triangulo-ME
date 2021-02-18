/*
 * File:   botoes.c
 * Author: 20185087
 *
 * Created on 4 de Fevereiro de 2021, 14:10
 */

#include <xc.h>

void botoes_init( void )
{
    TRISDbits.TRISD0 = 1;
    TRISDbits.TRISD1 = 1;       
}

void botao_ligar()
{
    PORTDbits.RD1 = 1;
}

void botao_desligar()
{
    PORTDbits.RD0 = 0;    
}

int s1_status(void)
{
    return(PORTDbits.RD1);
}


int s0_status(void)
{
    return(PORTDbits.RD0);
}

