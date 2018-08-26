/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void exercicio2_prova2() {
    
    int i, cont;
    float v[5];

    printf("\n");
    
    cont = 1;
    for (i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", cont);
        scanf("%f", &v[i]);
        cont++;
    }

    for (i = 0; i < 5; i++) {
        printf("\nA raiz do número %.0f = %.0f", v[i], sqrt(v[i]));
    }
    
    printf("\n");
    
}