/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int vet1[5], re = 0, i, cont1 = 1, r;

int soma_exercicio2(){
    printf("*** Exercicio 2 *** \n\n");
    for (i = 0; i < 5; i++){
        printf("Informe o %dº número: ", cont1);
        scanf("%d", &vet1[i]);
        re = re + vet1[i];
        cont1++;
    }
    return re;    
}
void exercicio_semParametro_comRetorno(){    
     r = soma_exercicio2();
    printf("\nO resultado da soma = %d \n", r);
}