/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void exercicio02_prova(){
    
    int cont, i;
    float soma, media, v[8];
    
    printf("Exercicio 02 - Prova \n\n");
    
    cont = 1;
    soma = 0;    
    for (i = 0; i < 8; i++){
        printf("Informe a %dª média: ", cont);
        scanf("%f", &v[i]);
        soma = soma + v[i];
        cont++;
    }
    
    media = soma / 8;
    
    printf("\nA média geral é: %.2f \n", media);
}