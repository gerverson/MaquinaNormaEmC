#include <stdio.h>
#include <stdlib.h>
#include "Operacoes.h"
#include "Soma.h"

void somar(int *regA, int *regB,int *regC){
    int auxA, auxB;

    printf("Insira o registrador A: ");
    scanf("%d", &auxB);
    printf("Insira o registrador B: ");
    scanf("%d", &auxA);

    *regA = auxA;
    *regB = auxB;

    *regC = 0;

    while(auxA != 0){
        printf("Reg C: (%d)\tauxReg A: (%d)\tauxReg B: (%d)\n", *regC, auxA, auxB);

        adiciona(regC);

        auxA--;
    }

    while(auxB != 0){
        printf("Reg C: (%d)\tauxReg A: (%d)\tauxReg B: (%d)\n", *regC, auxA, auxB);

        adiciona(regC);

        auxB--;
    }
    printf("Reg C: (%d)\tauxReg A: (%d)\tauxReg B: (%d)\n", *regC, auxA, auxB);

    printf("Valor Final: Reg C: (%d)\tReg A: (%d)\tReg B: (%d)", *regC, *regA, *regB);
}
