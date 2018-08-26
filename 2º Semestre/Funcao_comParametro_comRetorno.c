/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int soma4(int x, int y) {
    
    int s;
    s = x + y;
   return s; 
    
}
void aula07_comParametro_comRetorno() {
    
    int a, b, r;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segunto número: ");
    scanf("%d", &b);
    r = soma4(a, b);
    printf("O resultado da soma = %d \n", r);
    
}