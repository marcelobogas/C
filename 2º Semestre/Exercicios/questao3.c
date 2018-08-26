/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void exercicio3_prova2() {

    int l, c, cont;
    float m[2][2], soma, saldo, result;

    printf("\nInforme o saldo: ");
    scanf("%f", &saldo);

    soma = 0;
    for (l = 0; l < 2; l++) {
        for (c = 0; c < 2; c++) {
            printf("Digite o valor da %dª conta: ", cont);
            scanf("%f", &m[l][c]);
            soma = soma + m[l][c];
            cont++;
        }
    }

    result = saldo - soma;

    printf("\nSaldo anterior: %.2f", saldo);
    printf("\nSaldo atual: %.2f", result);

    if (result > 0) {
        printf("\nSaldo positivo \n\n");
    } else {
        printf("\nSaldo negativo \n\n");
    }

}
