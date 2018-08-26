/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula7_exercicio3(){

    float alt, peso, imc;

    printf("*** Aula 7 - exercicio 3 *** \n\n");
    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("Digite a sua altura: ");
    scanf("%f", &alt);
    imc = peso / (alt * alt);
    printf("O seu IMC é: %.2f \n\n", imc);

}