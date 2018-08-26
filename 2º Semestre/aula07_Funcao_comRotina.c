/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include "funcoes.h"


int r, x, y;
float sal;

void aula07_rotinas() {
    
    printf("*** Rotina 1 *** \n");
    rotina1();
    
    printf("*** Rotina 2 *** \n");
    rotina2(sal);
    
    printf("*** Rotina 3 *** \n");
    printf("Digite o primeiro número: ");
    scanf("%d", &x);
    printf("Digite o segundo número: ");
    scanf("%d", &y);
    r = rotina3(x, y);
    printf("O resultado da divisão = %d \n", r);
    
}