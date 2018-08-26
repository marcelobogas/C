/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int vet1[5], result = 0, i, cont = 1;

void soma_exercicio1(){
    printf("*** Exercicio 1 *** \n\n");
    for (i = 0; i < 5; i++){
        printf("Informe o %dº número: ", cont);
        scanf("%d", &vet1[i]);
        result = result + vet1[i];
        cont++;
    }   
    printf("\nO resultado da soma = %d \n", result);
}
void exercicio_semParametro_semRetorno(){
    soma_exercicio1();
}