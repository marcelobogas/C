/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula10_exercicio2(){
    
    float num1, total;
    
    printf("Informe o número de cadeiras que irá comprar: ");
    scanf("%f", &num1);
    total = num1 <= 50 ? (num1 * 45) : (num1 * 40);
    printf("O total a pagar = %.2f \n\n", total);
    
}