/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int soma_dobro2(int *x, int *y) {
    
    int s;
    *x = *x * 2;
    *y = *y * 2;
    s = *x + *y;
    return;
    
}
void aula07_parametro_porReferencia() {
    
    int a, b, r;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    r = soma_dobro2(&a, &b);
    printf("O resultado da soma = %d \n", r);
    printf("O valor de a = %d e b = %d \n", a, b);
    
}