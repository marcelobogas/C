/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Administrador
 *
 * Created on 6 de Fevereiro de 2018, 00:04
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int opcao;

    printf("*** Menu de Programas *** \n");
    printf("[1] Aula 5 - programa hello \n");
    printf("[2] Aula 6 - exercicio tipo int \n");
    printf("[3] Aula 6 - exercicio tipo float \n");
    printf("[4] Aula 6 - exercicio tipo char \n");
    printf("[5] Aula 7 - exercicio com operadores aritméticos \n");
    printf("[6] Aula 7 - exercicio 1 \n");
    printf("[7] Aula 7 - exercicio 2 \n");
    printf("[8] Aula 7 - exercicio 3 \n");
    printf("[9] Aula 7 - exercicio 4 \n");
    printf("[10] Aula 7 - exercicio 5 \n");
    printf("[11] Aula 8 - operadores relacionais \n");
    printf("[12] Aula 8 - exercicio 1 \n");
    printf("[13] Aula 9 - operadores lógicos \n");
    printf("[14] Aula 9 - exercicio 1 \n");
    printf("[15] Aula 10 - exercicio com par/impar \n");
    printf("[16] Aula 10 - Cálcular a média \n");
    printf("[17] Aula 10 - exercicio com função ternária \n");
    printf("[18] Aula 10 - exercicio 1 \n");
    printf("[19] Aula 10 - exercicio 2 \n");
    printf("[20] Aula 10 - exercicio 3 \n");
    printf("[21] Aula 10 - exercicio 4 \n");
    printf("[22] Aula 10 - exercicio 5 \n");
    printf("[23] Aula 10 - exercicio 6 \n");
    printf("[24] Aula  -  \n");
    printf("[25] Aula  -  \n");
    printf("[26] Aula  -  \n");
    printf("[27] Aula  -  \n");
    printf("[28] Aula  -  \n");
    printf("[29] Aula  -  \n");
    printf("[30] Aula  -  \n");
    printf("[31] Aula  -  \n");
    printf("[32] Aula  -  \n");
    printf("[33] Aula  -  \n");
    printf("[34] Aula  -  \n");
    printf("[35] Aula  -  \n");
    printf("[36] Aula  -  \n");
    printf("[37] Aula  -  \n");
    printf("[38] Aula  -  \n");
    printf("[39] Aula  -  \n");
    printf("[40] Aula  -  \n");
    printf("[41] Aula  -  \n");
    printf("[42] Aula  -  \n");
    printf("[43] Aula  -  \n");
    printf("[44] Aula  -  \n");
    printf("[45] Aula  -  \n");


    printf("\nDigite uma opção de programa: ");
    scanf("%d", &opcao);
    printf("\33[2J");
    printf("\n\n");

    switch (opcao) {

        case 1: hello();
            break;
        case 2: inteiro();
            break;
        case 3: tipoReal();
            break;
        case 4: tipoCaractere();
            break;
        case 5: op_aritmetico();
            break;
        case 6: aula7_exercicio1();
            break;
        case 7: aula7_exercicio2();
            break;
        case 8: aula7_exercicio3();
            break;
        case 9: aula7_exercicio4();
            break;
        case 10: aula7_exercicio5();
            break;
        case 11: op_relacionais();
            break;
        case 12: exercicio_1();
            break;
        case 13: op_logicos();
            break;
        case 14: aula9_exercicio_1();
            break;
        case 15: f_par_impar();
            break;
        case 16: aula10_f_media();
            break;
        case 17: f_ternario();
            break;
        case 18: aula10_exercicio1();
            break;
        case 19: aula10_exercicio2();
            break;
        case 20: aula10_exercicio3();
            break;
        case 21: aula10_exercicio4();
            break;
        case 22: aula10_exercicio5();
            break;
        case 23: aula10_exercicio6();
            break;


        default: printf("*** Opção Inválida ***");
    }

    return (EXIT_SUCCESS);
}

