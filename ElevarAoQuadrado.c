#include <stdio.h>
#include <stdlib.h>
#include "ElevarAoQuadrado.h"
#include "Operacoes.h"

void elevarAoQuadrado(int *regA, int *regC){

    int auxiliar, aux;

    printf("Insira o registrador A: ");

    scanf("%d", regA);

    auxiliar = *regA;
    aux = *regA;
    *regC = 0;

    while (estaVazio(auxiliar) == 0) {

        while (estaVazio(aux) == 0) {

            printf("Reg C: (%d)\taux1 A: (%d)\taux2 A: (%d)\n", *regC, auxiliar, aux);

            adiciona(regC);

            aux--;
        }
        printf("Reg C: (%d)\taux1 A: (%d)\taux2 A: (%d)\n", *regC, auxiliar, aux);

        aux = *regA;

        auxiliar--;
    }
    printf("Reg C: (%d)\taux1 A: (%d)\taux2 A: (%d)\n", *regC, auxiliar, aux);

    printf("Valor Final: Reg C: (%d)\tReg A: (%d)", *regC, *regA);
}
