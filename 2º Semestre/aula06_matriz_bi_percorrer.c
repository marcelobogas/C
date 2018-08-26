/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula6_matriz_bipercorrer(){
    
    int l, c, n[3][4] = {3, 8, 1, 5, 0, 2, 4, 7, 2, 5, 9, 3};
    
    printf("*** Aula 6 - percorrer matriz bidimensional *** \n\n");
    
    for (l = 0; l < 3; l++){
        for (c = 0; c < 4; c++){
            printf("numero[%d][%d] = %d \n", l, c, n[l][c]);
        }
    }
    
}