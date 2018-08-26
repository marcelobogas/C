/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void soma2(int x, int y) {
    
    int s;
    s = x + y;
    printf("O resultado da soma = %d \n", s);
    
}
void aula07_comParametro_semRetorno() {
    
    int a, b;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    soma2(a, b);
    
}