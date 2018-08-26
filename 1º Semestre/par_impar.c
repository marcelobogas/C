/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void f_par_impar(){
    
    int num;
    
    printf("*** Aula 10 - exemplo com if..else *** \n\n");
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if (num % 2 == 0){
        printf("%d é par! \n\n", num);
    }
    else{
        printf("%d é ímpar! \n\n", num);
    }
    
}