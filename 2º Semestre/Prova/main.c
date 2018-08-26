
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int opcao;

    printf("*** Menu de Programas *** \n\n");

    printf("Informe o número do programa: ");
    scanf("%d", &opcao);
    printf("\33[2j");
    printf("\n");

    if (opcao) {

        switch (opcao) {

            case 1: exercicio_01();
                break;
            case 2: exercicio_2();
                break;
            case 3: exercicio_03();
                break;
            case 4: exercicio_04();
                break;

            default: printf("Opção inválida...");
        }
    }

    return (EXIT_SUCCESS);
}