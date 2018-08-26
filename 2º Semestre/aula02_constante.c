/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula2_const(){
    
    const double pi = 3.14159;
    double c, r = 5.0;
    
    printf("*** Aula 02: exemplo constante (Double) *** \n\n");
    c = 2 * pi * r; // utilizamos o valor de PI
    printf("O comprimento da circunferência = %f \n\n", c);
    
}