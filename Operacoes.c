#include <stdio.h>
#include <stdlib.h>

typedef struct Operacoes{

}operacoes;

void adiciona(int *reg){
    *reg = *reg + 1;
}

void subtrai(int *reg){
    *reg = *reg - 1;
}

int estaVazio(int reg){
    if (reg == 0){
        return 1;
    } else{
        return 0;
    }
}
