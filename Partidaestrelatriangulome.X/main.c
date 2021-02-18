/*
 * File:   main.c
 * Author: 20185090
 *
 * Created on 18 de Fevereiro de 2021, 15:40
 */


#include "config.h"
#include <xc.h>
#include "botoes.h"
#include "contatores.h"

void main(void) 
{

    contatores_init();
    botoes_init();
        
    while( 1 )    
    {      
      
        
        if( s1_status() == 1 && k1_status() == 0)
        
        {        
            k1 (1);
            k2 (1);
            __delay_ms(2000);
            k2(0);
            __delay_ms(1000);
            k3 (1);
        }
            
        if(s0_status() == 1 && k1_status() == 1)
            
        {
            k1 (0);
            k2 (0);
            k3 (0);
        }
    }   
}
