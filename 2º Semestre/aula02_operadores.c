/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdbool.h>

void aula2_operadores(){
    
    int n1, n2;
    
    printf("*** Aula 02: exemplo operadores *** \n\n");
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    scanf("%d", &n2);
    printf("%d - %d = %d \n", n1, n2, n1 - n2);
    printf("%d * %d = %d \n", n1, n2, n1 * n2);
    printf("%d >= %d = %d \n", n1, n2, n1 >= n2);
    printf("%d == %d = %d \n", n1, n2, n1 == n2);
    printf("%d != %d = %d \n", n1, n2, n1 != n2);
    printf("F e V = %d \n", false && true);
    printf("F ou V = %d \n", false || true);
    printf("não V = %d \n", !true);
    printf("não F = %d \n\n", !false);
    
}