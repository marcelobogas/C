/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdbool.h>

void aula9_exercicio_1(){
    
    int num1, num2, result1, result2, result3;
    
    printf("*** Aula 9 - exercicio 1 *** \n\n");
    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: ");
    scanf("%d", &num2);
    printf("%d > %d e %d = %d o resultado é: %d \n", num1, num2, num1, num2, result1);
    printf("%d <= %d ou %d != %d o resultado é: %d \n\n", num1, num2, num1, num2, result2);
    printf("nao (%d < %d) o resultado é: %d \n\n", num1, num2, result3);
    
}