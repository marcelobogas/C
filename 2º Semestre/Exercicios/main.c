/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Administrador
 *
 * Created on 9 de Abril de 2018, 11:08
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int opcao;

    printf("Informe o número do Programa: ");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1: exercicio01_prova();
            break;
        case 2: exercicio02_prova();
            break;
        case 3: exercicio03_prova();
            break;
        case 4: exercicio1_prova2();
            break;
        case 5: exercicio2_prova2();
            break;
        case 6: exercicio3_prova2();
            break;

        default: printf("\nEste programa não existe \n\n");
    }

    return (EXIT_SUCCESS);
}

