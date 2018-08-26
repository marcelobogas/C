/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula3_if(){
    
    int opcao;
    float valor, total;
    
    printf("*** Aula 3: exercicio com if \n\n");
    printf("Informe o valor da compra: ");
    scanf("%f", &valor);
    printf("Forma de pagamento \n [1] a vista \n [2] a prazo 30 dias \n [3] a prazo 60 dias \n Escolha uma opção (1, 2 ou 3: ");
    scanf("%d", &opcao);
    
    if (opcao == 1){
        total = valor - (valor * 0.10);
        printf("\nO valor a vista com desconto de 10%% = %.2f \n\n", total);
    }
    else if(opcao == 2){
        total = valor + (valor * 0.10);
        printf("\nO valor a prazo (30 dias) com acréscimo de 10%% = %.2f \n\n", total);
    }
    else if (opcao == 3){
        total = valor + (valor * 0.20);
        printf("\nO valor a prazo (60 dias) com acréscimo de 20%% = %.2f \n\n", total);
    }
    else {
        printf("\nOpção inválida \n\n");
    }
    
}