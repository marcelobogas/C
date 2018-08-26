/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula10_exercicio6() {

    char opcao;

    printf("Estado Civil \n\n");
    printf("s - solteiro \n");
    printf("c - casado \n");
    printf("d - divorciado \n");
    printf("v - viúvo \n");
    printf("Escolha uma opcão (s, c, d ou v): ");
    scanf(" %c", &opcao);
    printf("\n");

    if (opcao == 's' || opcao == 'S') {
        printf("Você é solteiro \n\n");
    }
    else if (opcao == 'c' || opcao == 'C') {
        printf("Você é casado \n\n");
    } 
    else if (opcao == 'd' || opcao == 'D') {
        printf("Você é divorciado \n\n");
    } 
    else if (opcao == 'v' || opcao == 'V') {
        printf("Você é viúvo \n\n");
    } 
    else {
        printf("Opção inválida \n\n");
    }

}