/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula5_exercicio6() {

    int i, j, cont, vet1[5], aux;

    printf("*** Aula 05 - exercicio extra *** \n\n");

    for (i = 0; i < 5; i++) {
        printf("Digite o primeiro número: ");
        scanf("%d", &vet1[i]);
    }
    //
    for (i = 0; i < 5; i++) {        
        aux = vet1[i];
        cont = 0;        
        for (j = 1; j <= aux; j++) {
            if (aux % j == 0) {
                cont++;
            }
        }
        if (cont == 2) {
            printf("\n%d é um número primo", aux);
        } else {
            printf("\n%d não é um número primo", aux);
        }
    }
    printf("\n\n");

}