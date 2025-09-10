cmake_minimum_required(VERSION 3.10)
project(C_Project C)

set(CMAKE_C_STANDARD 11)

add_executable(C_Project
        Nota/nota.c
        Soma/soma.c
        Subtração/subtracao.c
        Altura/altura.c
        Recursividade/recursividade.c
)
