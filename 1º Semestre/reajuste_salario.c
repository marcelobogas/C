/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula10_exercicio5(){
    
    float salario;
    int tempo, idade;
    
    printf("Informe o salário: ");
    scanf("%f", &salario);
    printf("Informe o tempo de serviço: ");
    scanf("%d", &tempo);
    printf("informe a idade: ");
    scanf("%d", &idade);
    
    if (salario < 4000 && tempo > 3 && idade > 30){
        printf("Receberá reajuste \n\n");
    }
    else {
        printf("Não receberá reajuste \n\n");
    }
    
}