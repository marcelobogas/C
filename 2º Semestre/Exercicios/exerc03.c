/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void exercicio03_prova(){
    
    int i, quadrado, n[5];
    
    for (i = 0; i < 5; i++){
        printf("Digite um número: ");
        scanf("%d", &n[i]);
    }
    
    printf("\n");
    
    for (i = 0; i < 5; i++){
        quadrado = n[i] * n[i];
        printf("O quadrado do número %d = %d \n", n[i], quadrado);
    }
    
}