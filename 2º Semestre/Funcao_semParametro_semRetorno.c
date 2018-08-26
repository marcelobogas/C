/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void soma1() {
    
    int a, b, s;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    s = a + b;
    printf("\nO resultado da soma = %d \n", s);
    
}
void aula07_semParametro_semRetorno() {
        
        soma1();
        printf("Programa executado com sucesso !!! \n\n");
        
    }