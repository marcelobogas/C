/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

void aula10_f_media(){
    
    float media, n1, n2, n3, n4;
    
    printf("Digite a 1ª nota: ");
    scanf("%f", &n1);
    printf("Digite a 2ª nota: ");
    scanf("%f", &n2);
    printf("Digite a 3ª nota: ");
    scanf("%f", &n3);
    printf("Digite a 4ª nota: ");
    scanf("%f", &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    printf("\n");
    
    if (media >= 6){
        printf("Média do aluno = %.2f \n", media);
        printf("O aluno está Aprovado \n\n");
    }
    else if(media < 6 && media >= 3){
        printf("Média do aluno = %.2f \n", media);
        printf("O aluno está em Recuperação \n\n");
    }
    else{
        printf("Média do aluno = %.2f \n", media);
        printf("O aluno está Reprovado \n\n");
    }
    
}