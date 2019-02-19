cmake_minimum_required(VERSION 3.13)
project(MaquinaNormaEmC C)

set(CMAKE_C_STANDARD 99)

add_executable(MaquinaNormaEmC main.c main.h MaquinaNormaEmC.cbp Multiplicar.c Multiplicar.h Operacoes.c Operacoes.h Soma.c Soma.h ElevarAExpoente.c ElevarAExpoente.h ElevarAoQuadrado.c ElevarAoQuadrado.h)