/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void calculo_exercicio1() {    
   float s;    
    printf("*** Aula 07 - Exercicio 1 *** \n\n");    
    printf("Informe o salário: ");
    scanf("%f", &s);
    
    if (s >= 1000) {
        s = s + (s * 0.10);
    }
    else {
        s = s + (s * 0.05);
    }    
    printf("O novo salário = %.2f", s);    
}

void exercicio1_semParametro_semRetorno() {
    calculo_exercicio1();
}