/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula4_dowhile(){
    
    int contador;
    
    printf("*** Aula 04: exercicio com do_while *** \n\n");
    
    contador = 1;    
    do {
       printf("%d \n", contador);
       contador++;
    }
    while(contador <= 10);
    
}