#include <stdio.h>
#include <stdlib.h>
#include "Operacoes.h"
#include "Multiplicar.h"

void multiplicar(int *regA, int *regB, int *regC) {
    int auxA, auxB;

    printf("Insira o registrador A: ");
    scanf("%d", regA);
    printf("Insira o registrador B: ");
    scanf("%d", regB);

    auxA = *regA;
    auxB = *regB;
    *regC = 0;

    while (estaVazio(auxB) == 0){

        while (estaVazio(auxA == 0)){
            printf("Reg C: (%d)\tauxReg A: (%d)\tauxReg B: (%d)\n", *regC, auxA, auxB);

            adiciona(regC);

            auxA--;
        }
        printf("Reg C: (%d)\tauxReg A: (%d)\tauxReg B: (%d)\n", *regC, auxA, auxB);

        auxB--;

        auxA = *regA;
    }
    auxA = 0;

    printf("Reg C: (%d)\tauxReg A: (%d)\tauxReg B: (%d)\n", *regC, auxA, auxB);

    printf("\nValor Final: Reg C: (%d)\tReg A: (%d)\tReg B: (%d)\n", *regC, *regA, *regB);
}
