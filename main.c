#include <stdio.h>
#include <stdlib.h>
#include "Operacoes.h"
#include "Soma.h"
#include "ElevarAoQuadrado.h"
#include "ElevarAExpoente.h"
#include "Multiplicar.h"

int main(){
    int *regA, *regB, *regC, opcao, res;

    printf("Qual Operação deseja fazer?\n1\tsomar\n2\tmultiplicar\n3\televar ao quadrado\n4\televar ao expoente\n");

    res = 1;
    while (res == 1){
        printf("Escolha: ");
        scanf("%d", &opcao);
        if (opcao == 1 || opcao == 2 || opcao == 3 || opcao == 4){
            res = 0;
        }else{
            printf("Opção inválida, tente novamente!!!\n");
        }
    }

    switch (opcao){
        case 1:
            somar(&regA, &regB, &regC);
            break;
        case 2:
            multiplicar(&regA, &regB, &regC);
            break;
        case 3:
            elevarAoQuadrado(&regA, &regC);
            break;
        case 4:
            elevarAExpoente(&regA, &regB, &regC);
            break;
        default:
            printf("Erro Fatal!!! Consultar os desenvolvedores!!!");
    }

    return 0;
}
