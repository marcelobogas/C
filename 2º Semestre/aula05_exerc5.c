/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula5_exercicio5() {

    int vet[10], i, cont;

    printf("*** Aula 05 - exercicio 5 *** \n\n");

    for (i = 0; i < 10; i++) {
        printf("Didite o elemento da %dª posição: ", i);
        scanf("%d", &vet[i]);
    }

    cont = 0;
    
    for (i = 0; i < 10; i++) {
        if (vet[i] > 50) {
            printf("\nNúmero maior que 50: %d encontrado na posição [%d]", vet[i], i);
            cont = 1;
        }
    }

    if (cont == 0) {
        printf("\nNão existem números superiores a 50 no vetor \n");
    }

    printf("\n");
}