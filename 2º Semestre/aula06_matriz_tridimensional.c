/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula6_matriz_tridimen(){
    
    int numero[3][3][4] = {3, 8, 1, 5, 0, 2, 4, 7, 2, 5, 9, 3,
                           7, 3, 0, 2, 5, 1, 9, 4, 6, 9, 1, 5,
                           6, 3, 0, 1, 2, 3, 5, 2, 8, 4, 0, 3};
    
    printf("*** Aula 6 - exercicio matriz tridimensional *** \n\n");
    printf("numero[0][0][0] = %d \n", numero[0][0][0]);
    printf("numero[1][2][1] = %d \n", numero[1][2][1]);
    printf("numero[2][1][3] = %d \n", numero[2][1][3]);
    
}