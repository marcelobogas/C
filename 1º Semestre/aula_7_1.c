/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula7_exercicio1(){
    
    float valor, total;
    int parc;
    
    printf("*** Aula 7 - exercicio 1 *** \n\n");
    printf("Qual é o valor do produto: ");
    scanf("%f", &valor);
    printf("Quantas parcelas deseja pagar: ");
    scanf("%d", &parc);
    total = valor / parc;
    printf("O valor de cada parcela será de: %.2f \n\n", total);
    
}