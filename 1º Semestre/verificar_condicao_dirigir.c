/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula10_exercicio4() {

    int idade, num1;

    printf("Informe a sua idade: ");
    scanf("%d", &idade);
    printf("Possui habilitação? \n");
    printf("0 - Não passui \n");
    printf("1 - Possui \n");
    printf("Informe sua situação (0 ou 1): ");
    scanf("%d", &num1);

    if (idade >= 18 && num1 == 1){
        printf("Você pode dirigir o veículo \n\n");
    }
    else{
        printf("Você não pode dirigir o veículo \n\n");
    }

}