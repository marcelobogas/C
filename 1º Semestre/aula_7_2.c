/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula7_exercicio2(){
    
    float n1, n2, n3, n4, media;
    char nome[50];
    
    printf("*** Aula 7 - exercicio 2 *** \n\n");
    printf("Digite o nome do aluno: ");
    scanf("%s", &nome);
    printf("Digite a 1ª nota: ");
    scanf("%f", &n1);
    printf("Digite a 2ª nota: ");
    scanf("%f", &n2);
    printf("Digite a 3ª nota: ");
    scanf("%f", &n3);
    printf("Digite a 4ª nota: ");
    scanf("%f", &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    printf("O aluno %s obteve a média = %.2f \n\n", nome, media);
    
}