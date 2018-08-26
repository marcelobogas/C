/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int x, y, m, d, r;

//Mensagem
//
void rotina1(){
  printf("Mostrando essa mensagem \n\n");  
}
//
//Interação com o usuário
//
float rotina2() {
    printf("Digite o primeiro número: ");
    scanf("%d", &x);
    printf("Digite o segundo número: ");
    scanf("%d", &y);
    m = x * y;
    printf("O resultado da multiplicação = %d \n\n", m);
}
//
//Execução de cálculo
//
int rotina3(int x, int y) {
    d = x / y;
    return d;
}
//
//
//
float rotina4() {
    float sal;
    printf("Informe o salário atual: ");
    scanf("%f", &sal);
    return sal;
}
//
void rotina5() {
    float total, sal;
    sal = rotina4();
    if (sal >= 1000) {
        total = sal + (sal * 0.10);
        printf("O novo salário = %.2f", total);
    }
    else{
        total = sal + (sal * 0.05);
        printf("O novo salário = %.2f", total);
    }
}