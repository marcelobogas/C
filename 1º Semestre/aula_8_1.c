/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void exercicio_1(){
    
    int num1, num2;
    
    printf("*** Aula 8 - exercicio 1 *** \n\n");
    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite outro número: ");
    scanf("%d", &num2);
    printf("%d < %d = %d \n", num1, num2, num1 < num2);
    printf("%d > %d = %d \n", num1, num2, num1 > num2);
    printf("%d <= %d = %d \n", num1, num2, num1 <= num2);
    printf("%d >= %d = %d \n", num1, num2, num1 >= num2);
    printf("%d == %d = %d \n", num1, num2, num1 == num2);
    printf("%d != %d = %d \n\n", num1, num2, num1 != num2);
    
}