/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula7_exercicio4(){
    
    float km, lt, cm;
    
    printf("*** Aula 7 - exercicio 4 *** \n\n");
    printf("Informe a distância percorrida: ");
    scanf("%f", &km);
    printf("Informe a quantidade de litros gastos: ");
    scanf("%f", &lt);
    cm = km / lt;
    printf("O consumo médio do veículo é: %.2f litros/Km \n\n", cm);
    
}