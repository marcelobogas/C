/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void op_relacionais(){
    
    int num1, num2;
    
    printf("*** Aula 8 - exemplo com operadores relacionais *** \n\n");
    num1 = 5;
    num2 = 3;
    printf("%d < %d = %d \n", num1, num2, num1 < num2);
    printf("%d > %d = %d \n", num1, num2, num1 > num2);
    printf("%d <= %d = %d \n", num1, num2, num1 <= num2);
    printf("%d >= %d = %d \n", num1, num2, num1 >= num2);
    printf("%d == %d = %d \n", num1, num2, num1 == num2);
    printf("%d != %d = %d \n\n", num1, num2, num1 != num2);
    
}