/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula5_exercicio4() {

    int vet1[5], vet2[5], vet3[10], i, j, aux;

    printf("*** Aula 5 - exercicio 4 *** \n\n");
    printf("Vetor 1 \n");

    for (i = 0; i < 5; i++) {
        printf("Digite o elemento da %dª posição: ", i);
        scanf("%d", &vet1[i]);
    }

    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (vet1[i] > vet1[j]) {
                aux = vet1[i];
                vet1[i] = vet1[j];
                vet1[j] = aux;
            }
        }
    }
    printf("\nVetor 1 - ordenado \n");
    for (i = 0; i < 5; i++) {
        printf("%d \t", vet1[i]);
    }
    //
    // Vetor 2
    //
    printf("\n\n");
    printf("Vetor 2 \n");

    for (i = 0; i < 5; i++) {
        printf("Digite o elemento da %dª posição: ", i);
        scanf("%d", &vet2[i]);
    }

    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (vet2[i] > vet2[j]) {
                aux = vet2[i];
                vet2[i] = vet2[j];
                vet2[j] = aux;
            }
        }
    }
    printf("\nVetor 2 - ordenado \n");
    for (i = 0; i < 5; i++) {
        printf("%d \t", vet2[i]);
    }
    //
    // Vetor 3
    //
    printf("\n\n");

    printf("\nVetor 3 - ordenado \n");
    
    j = 0;

    for (i = 0; i < 10; i++){
        vet3[j] = vet1[i];
        j++;
        vet3[j] = vet2[i];
        j++;
    }

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vet3[i] > vet3[j]) {
                aux = vet3[i];
                vet3[i] = vet3[j];
                vet3[j] = aux;
            }
        }
    }

    for (j = 0; j < 10; j++){
        printf("%d \t", vet3[j]);
    }

    printf("\n\n");

}
