/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>  

void vet3(int *a) {
    int s = 0, i;
    for (i = 0; i <= 4; i++) {
        s = s + a[i];
    }
    printf("A soma dos números do vetor = %d \n", s);
}

void vetor_ponteiro() {
    int n[5], x;
    for (x = 0; x <= 4; x++) {
        printf("Digite um númeto[%d] = ", x);
        scanf("%d", &n[x]);
    }
    vet3(n);
}