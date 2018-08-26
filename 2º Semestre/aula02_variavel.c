/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdbool.h>

void aula2_variavel(){
    
    int a, b, c;
    float x, y, z;
    char sexo;
    char nome [20];
    bool situacao;
    
    printf("*** Aula 02: exemplo variáveis *** \n\n");
    printf("Informe um valor inteiro para a variável a: ");
    scanf("%d", &a);    
    printf("Informe um valor inteiro para a variável b: ");
    scanf("%d", &b);    
    c = a + b;
    printf("A soma de %d + %d = %d \n\n", a, b, c);
    
    printf("Informe um valor real para a variável x: ");    
    scanf("%f", &x);
    printf("Informe um valor real para a variável y: ");
    scanf("%f", &y);    
    z = x + y;
    printf("A soma de %f + %f = %g \n\n", x, y, z); // %g formata duas casas decimais
    
    printf("Informe o seu nome: ");
    setbuf(stdin, NULL);
    gets(nome);
    printf("Informe o seu sexo: ");
    scanf(" %c", &sexo);
    printf("O nome informado é %s e o sexo é %c \n\n", nome, sexo); // %s formato para formatação em cadeia
    situacao = true && true;
    printf("A situação = %d \n\n", situacao);
    
}