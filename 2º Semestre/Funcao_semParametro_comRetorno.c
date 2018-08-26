/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int soma3() {
    
    int x, y, s;
    printf("Digite o primeiro número: ");
    scanf("%d", &x);
    printf("Digite o segundo número: ");
    scanf("%d", &y);
    s = x + y;
    return s;
    
}
void aula07_semParametro_comRetorno() {
    
    int r;
    r = soma3();
    printf("O resultado da soma = %d \n", r);
    
}