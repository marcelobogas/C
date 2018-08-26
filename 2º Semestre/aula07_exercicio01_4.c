/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

float calculo_exercicio4(float s) {    
    if (s >= 1000) {
        s = s + (s * 0.10);
    }
    else {
        s = s + (s * 0.05);
    }
    return s;    
}
void exercicio1_comParametro_comRetorno() {    
    float r, total;
    printf("*** Aula 07 - Exercicio 1 *** \n\n");    
    printf("Informe o salário: ");
    scanf("%f", &r);
    total = calculo_exercicio4(r);
    printf("O novo salário = %.2f", total);    
}