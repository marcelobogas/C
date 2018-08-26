/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula10_exercicio1(){
    
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if(idade >= 18){
        printf("Você possui %d anos é maior de idade \n\n", idade);
    }
    else{
        printf("Você possui %d anos é menor de idade \n\n", idade);
    }
    
}