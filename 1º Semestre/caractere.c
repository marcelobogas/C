/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void tipoCaractere(){
    
    char nome[50];
    char sexo;
    
    printf("*** Aula 6: Exemplo com tipo char *** \n");
    printf("Digite o seu Nome: ");
    gets(nome);
    printf("Digite F ou M para o seu Sexo: ");
    scanf("%c", &sexo);
    printf("O nome cadastrado é %s e possui o sexo %c \n\n", nome, sexo);
    
}