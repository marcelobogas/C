/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void tabuada_1(){
    int i, num, tab;
    
    printf("*** Exercicio 1 *** \n");    
    printf("Informe um número para iniciar a tabuada: ");
    scanf("%d", &num);
    
    for (i = 0; i < 11; i++){
        tab = num * i;
        printf("%d x %d = %d \n", num, i, tab);
    }
    printf("\nO último valor do contador é: %d \n\n", i);
}

void exercicio_01(){
    tabuada_1();
}