/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <math.h>

void exercicio1_prova2() {

    int i, cont;
    float soma, v[5];
    
    soma = 0;
    for (i = 0; i < 5; i++) {
        printf("Informe o valor do %dº produto: ", cont);
        scanf("%d", &v[i]);
        soma = soma + v[i];
        cont++;
    }

    printf("\nO total do pedido = %.2f", soma);
    
}
