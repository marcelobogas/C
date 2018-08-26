/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdbool.h>

void op_logicos(){
    
    printf("*** Aula 9 - operadores lógicos *** \n\n");
    printf("Operador E \n");
    printf("v e v = %d \n", true && true);
    printf("v e f = %d \n", true && false);
    printf("f e v = %d \n", false && true);
    printf("f e f = %d \n\n", false && false);
    printf("Operador OU \n");
    printf("v e v = %d \n", true || true);
    printf("v e f = %d \n", true || false);
    printf("f e v = %d \n", false || true);
    printf("f e f = %d \n\n", false || false);
    printf("Operador NÃO \n");
    printf("nao v = %d \n", !true);
    printf("nao f = %d \n\n", !false);
    
}