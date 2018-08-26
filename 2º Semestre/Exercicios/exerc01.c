/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void exercicio01_prova() {

    int cont, aluno, l, c;
    float media, soma, m[1][3];

    printf("*** Exercicio 01 - Prova 1 *** \n\n");

    for (aluno = 0; aluno < 3; aluno++) {
        cont = 1;
        soma = 0;
        for (l = 0; l < 1; l++) {
            for (c = 0; c < 3; c++) {
                printf("Informe a %dª nota: ", cont);
                scanf("%f", &m[l][c]);
                soma = soma + m[l][c];
                cont++;
            }
        }
        //
        media = soma / 3;
        //
        if (media >= 6) {
            printf("A média é %.2f, aluno Aprovado \n\n", media);
        } else if (media >= 3) {
            printf("A média é %.2f, aluno em Recuperação \n\n", media);
        } else {
            printf("A média é %.2f, aluno Reprovado \n\n", media);
        }
    }
}