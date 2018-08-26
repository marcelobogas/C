/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <math.h>

void op_aritmetico(){
    
    float num1, num2;
    num1 = 25;
    num2 = 5;
    
    printf("%.1f + %.1f = %.1f \n", num1, num2, num1 + num2);
    printf("%.1f - %.1f = %.1f \n", num1, num2, num1 - num2);
    printf("%.1f * %.1f = %.1f \n", num1, num2, num1 * num2);
    printf("%.1f / %.1f = %.1f \n", num1, num2, num1 / num2);
    printf("%.1f elevado a %.1f = %.1f \n", num1, num2, pow(num1, num2));
    printf("A raiz quadrade de %.1f é = %.1f \n\n", num1, sqrt(num1));
    
}