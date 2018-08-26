/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void f_ternario(){
    
    float salario;
    
    printf("Digite o salário: ");
    scanf("%f", &salario);
    salario = salario >= 1000 ? salario + (salario * 0.10):(salario * 0.05);
    printf("O novo salário = %.2f \n\n", salario);
    
}