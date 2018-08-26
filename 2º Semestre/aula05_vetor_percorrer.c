/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula5_percorrer_vetores() {

    char vogal [5] = {'a', 'e', 'i', 'o', 'u'};
    int cont, num [5] = {4, 7, 2, 5, 3};

    printf("*** Aula 5: percorrer um vetor *** \n");
    printf("\nMostrando todas as vogais \n");

    for (cont = 0; cont <= 4; cont++) {
        printf("Vogal [%d] = %c \n", cont, vogal[cont]);
    }
    printf("\nMostrando todos os números \n");
    
    for (cont = 0; cont <= 4; cont++){
        printf("Números [%d] = %d \n", cont, num[cont]);
    }
    printf("\n");

}