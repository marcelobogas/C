/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void estrutura2(){
    
    struct data {
        int dia, ano;
        char mes[20];
    } dn;
    
    printf("Digite o dia: ");
    scanf("%d", &dn.dia);
    printf("Digite o mês: ");
    scanf("%d", &dn.mes);
    printf("Digite o ano: ");
    scanf("%d", &dn.ano);
    printf("Você nasceu no dia %d, mês %s e ano %d \n", dn.dia, dn.mes, dn.ano);
    
}