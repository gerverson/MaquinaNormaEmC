#include "ElevarAExpoente.h"
#include "Operacoes.h"
#include <stdio.h>
#include <stdlib.h>

void elevarAExpoente(int *regA, int *regB, int *regC) {

    printf("Insira o registrador base A: ");
    scanf("%d", regA);
    printf("Insira o registrador expoente B: ");
    scanf("%d", regB);

    *regC = 0;

    int auxA, auxB, auxiA;

    auxA = *regA;
    auxB = *regB;
    auxiA = *regA;

    if (*regB == 0){
        *regC = 1;
    }else if (*regB == 1){
        *regC = *regA;
    }else if (*regB > 1){
        auxB--;

        while (estaVazio(auxB) == 0) {

            auxB--;

            *regC = 0;

            while (estaVazio(auxA) == 0){

                while (estaVazio(auxiA) == 0){
                    printf("Reg C: (%d)\tauxReg A: (%d)\tauxReg B: (%d)\tauxReg A2: (%d)\n", *regC, auxA, auxB, auxiA);

                    adiciona(regC);

                    auxiA--;
                }
                printf("Reg C: (%d)\tauxReg A: (%d)\tauxReg B: (%d)\n", *regC, auxA, auxB);

                auxiA = *regA;

                auxA--;
            }
            printf("Reg C: (%d)\tauxReg A: (%d)\tauxReg B: (%d)\n", *regC, auxA, auxB);

            auxA = *regC;
        }
    }
    printf("\nValor Final: Reg C: (%d)\tReg A: (%d)\tReg B: (%d)", *regC, *regA, *regB);
}
