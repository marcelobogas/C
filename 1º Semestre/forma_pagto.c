/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula10_exercicio3(){
    
    float total, v_produto;
    int pagto;
    
    printf("Informe o valor do produto: ");
    scanf("%f", &v_produto);
    printf("1 - À Vista \n");
    printf("2 - À Prazo \n");
    printf("Escolha o pagamento (1 ou 2): ");
    scanf("%d", &pagto);
    
    if (pagto == 1){
        total = v_produto - (v_produto / 100) * 10;
        printf("O total a pagar à vista = %.2f \n\n", total);
    }
    else if (pagto == 2){
        printf("O total a pagar à prazo = %.2f \n\n", v_produto);
    }
    else {
        printf("Forma de pagamento incorreta!!! \n\n");
    }
    
}