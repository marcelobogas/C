/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int v1[5], i, r = 0, cont = 1;

int rotina_1_exercicios() {
    for (i = 0; i < 5; i++) {
        printf("Informe o %dº número: ", cont);
        scanf("%d", &v1[i]);
        r = r + v1[i];
        cont++;
    }
    return r;
}
//
//
int vet4(int *a) {
    int s = 0, i;
    for (i = 0; i < 5; i++){
        s = s + a[i];
    }
    return s;
}
void exercicio04_aula07(){
    int n[5], x, r;
    for (x = 0; x < 5; x++){
        printf("Digite um número [%d] = ", x);
        scanf("%d", &n[x]);
    }
    r = vet4(n);
    printf("A soma dos números do vetor = %d \n", r);
}