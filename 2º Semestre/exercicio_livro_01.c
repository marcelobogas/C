/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void exercicio_01_livro() {

    int l, c, m[][];

    printf("*** Criar uma matriz obrigatóriamente quadrada *** \n\n");
    printf("Informe o número de linhas: ");
    scanf("%d", &l);
    printf("Informe o número de colunas: ");
    scanf("%d", &c);
    m[][] = m[l][c];
    printf("\nInforme os números para armazenar na matriz: ");
    scanf("%d", &m[l][c]);

    for (l = 0; m[l][c] < l; l++) {
        for (c = 0; m[l][c] < c; c++) {
            printf("\n%d", m[l][c]);
        }
    }

}