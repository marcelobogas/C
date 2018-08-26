/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula5_preencher_vetor(){
    
    char vogal[5];
    int cont, num[5];
    
    printf("*** Aula 05: preencher um vetor *** \n\n");
    printf("Digitando vogais: \n");
    
    for (cont = 0; cont <= 4; cont++){
        printf("Digite uma opção na posição vogal [%d] = ", cont);
        scanf(" %c", &vogal[cont]);
    }
    printf("\nDigitando números: \n");
    for (cont = 0; cont <= 4; cont++){
        printf("Digite um número na posição número [%d] = ", cont);
        scanf("%d", &num[cont]);
    }
    
}