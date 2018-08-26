/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Administrador
 *
 * Created on 19 de Fevereiro de 2018, 08:09
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int opcao;

    printf("*** Menu de Programas *** \n\n");
    printf("[1] Aula 02 - revisão variáveis \n");
    printf("[2] Aula 02 - revisão constante (#define) \n");
    printf("[3] Aula 02 - revisão constante (Double) \n");
    printf("[4] Aula 02 - revisão operadores \n");
    printf("[5] Aula 03 - revisão if \n");
    printf("[6] Aula 03 - revisão switch \n");
    printf("[7] Aula 04 - revisão while \n");
    printf("[8] Aula 04 - revisão do_while \n");
    printf("[9] Aula 04 - revisão for \n");
    printf("[10] Aula 05 - vetor \n");
    printf("[11] Aula 05 - percorrer vetores \n");
    printf("[12] Aula 05 - preencher vetor \n");
    printf("[13] Aula 05 - exercicio-1 \n");
    printf("[14] Aula 05 - exercicio-2 \n");
    printf("[15] Aula 05 - exercicio-3 \n");
    printf("[16] Aula 05 - exercicio-4 \n");
    printf("[17] Aula 05 - exercicio-5 \n");
    printf("[18] Aula 05 - exercicio-6 \n");
    printf("[19] Aula 06 - exercicio matriz bidimensional \n");
    printf("[20] Aula 06 - exercicio matriz tridimensional \n");
    printf("[21] Aula 06 - exercicio percorrer matriz bidimensional \n");
    printf("[22] Aula 06 - exercicio percorrer matriz tridimensional \n");
    printf("[23] Aula 06 - exercicio preencher matriz bidimensional \n");
    printf("[24] Aula 06 - exercicio preencher matriz tridimensional \n");
    printf("[25] Aula 06 - exercicio 1 \n");
    printf("[26] Aula 06 - exercicio 2 \n");
    printf("[27] Aula 06 - exercicio 3 \n");
    printf("[28] Aula 06 - exercicio 4 \n");
    printf("[29] Aula 06 - exercicio 4-1 \n");
    printf("[30] Aula 07 - função sem Parâmetro e sem Retorno \n");
    printf("[31] Aula 07 - função com Parâmetro e sem Retorno \n");
    printf("[32] Aula 07 - função sem Parâmetro e com Retorno \n");
    printf("[33] Aula 07 - função com Parâmetro e com Retorno \n");
    printf("[34] Aula 07 - função com Parâmetros por Valor \n");
    printf("[35] Aula 07 - função com Parâmetro por referência \n");
    printf("[36] Aula 07 - funções com rotina \n");
    printf("[37] Aula 07 - exercicio sem parâmetro sem retorno \n");
    printf("[38] Aula 07 - exercicio com parâmetro sem retorno \n");
    printf("[39] Aula 07 - exercicio sem parâmetro com retorno \n");
    printf("[40] Aula 07 - exercicio com parâmetro com retorno \n");
    printf("[41] Aula 07 - exercicio com rotina \n");

    printf("\nInforme o número do programa: ");
    scanf("%d", &opcao);
    printf("\33[2j"); //Limpa a tela do menu
    printf("\n");

    switch (opcao) {

        case 1: aula2_variavel();
            break;
        case 2: aula2_define();
            break;
        case 3: aula2_const();
            break;
        case 4: aula2_operadores();
            break;
        case 5: aula3_if();
            break;
        case 6: aula3_switch();
            break;
        case 7: aula4_while();
            break;
        case 8: aula4_dowhile();
            break;
        case 9: aula4_for();
            break;
        case 10: aula5_vetores();
            break;
        case 11: aula5_percorrer_vetores();
            break;
        case 12: aula5_preencher_vetor();
            break;
        case 13: aula5_exercicio1();
            break;
        case 14: aula5_exercicio2();
            break;
        case 15: aula5_exercicio3();
            break;
        case 16: aula5_exercicio4();
            break;
        case 17: aula5_exercicio5();
            break;
        case 18: aula5_exercicio6();
            break;
        case 19: aula6_matriz_bidimen();
            break;
        case 20: aula6_matriz_tridimen();
            break;
        case 21: aula6_matriz_bipercorrer();
            break;
        case 22: aula6_matriz_tripercorrer();
            break;
        case 23: aula6_matriz_bipreencher();
            break;
        case 24: aula6_matriz_tripreencher();
            break;
        case 25: aula6_exercicio1();
            break;
        case 26: aula6_exercicio2();
            break;
        case 27: aula6_exercicio3();
            break;
        case 28: aula6_exercicio4();
            break;
        case 29: exercicio_4_1();
            break;
        case 30: aula07_semParametro_semRetorno();
            break;
        case 31: aula07_comParametro_semRetorno();
            break;
        case 32: aula07_semParametro_comRetorno();
            break;
        case 33: aula07_comParametro_comRetorno();
            break;
        case 34: aula07_parametro_porValor();
            break;
        case 35: aula07_parametro_porReferencia();
            break;
        case 36: aula07_rotinas();
            break;
        case 37: exercicio1_semParametro_semRetorno();
            break;
        case 38: exercicio1_comParametro_semRetorno();
            break;
        case 39: exercicio1_semParametro_comRetorno();
            break;
        case 40: exercicio1_comParametro_comRetorno();
            break;
        case 41: exercicio01_funcao_comRotina();
            break;
        case 42: exercicio_semParametro_semRetorno();
            break;
        case 43: exercicio_semParametro_comRetorno();
            break;
        case 44: exercicio1_com_rotina();
            break;
        case 45: vetor_ponteiro();
            break;

        default: printf("Opção inválida...");
    }

    return (EXIT_SUCCESS);
}

