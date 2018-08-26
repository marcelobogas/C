/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula5_exercicio1(){
    
    int vet1[5], vet2[5], vet3[10], i, j;
    
    printf("***Aula 5 - exercicio 1 *** \n\n");
    
    j = 0;
    
    for (i = 0; i <= 4; i++){
        printf("\nVetor 1 - número na posição [%d]: ", i);
        scanf("%d", &vet1[i]);
        vet3[j] = vet1[i];
        j++;
        printf("Vetor 2 - número na posição [%d]: ", i);
        scanf("%d", &vet2[i]);
        vet3[j] = vet2[i];
        j++;
    }
    
    printf("\nVetor intercalado: \n");    
    for (j = 0; j <= 9; j++){
        printf("%d \t", vet3[j]);
    }
    
}