/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula7_exercicio5() {

    char nome[50];
    float s_minimo, t_vendas, s_final;

    printf("*** Aula 7 - exercicio 5 *** \n\n");
    printf("Informe o nome do vendedor: ");
    scanf("%s", &nome);
    printf("Informe o salário mínimo: ");
    scanf("%f", &s_minimo);
    printf("Informe o valor total das vendas efetuadas no mês: ");
    scanf("%f", &t_vendas);
    s_final = s_minimo + (t_vendas / 100 * 15);
    printf("O vendedor(a) %s recebeu no final do mês o salário = %.2f \n\n", nome, s_final);

}