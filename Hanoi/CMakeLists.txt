cmake_minimum_required(VERSION 4.2)
project(Hanoi)

set(CMAKE_CXX_STANDARD 20)

add_executable(Hanoi main.cpp
        Bibliotecas/FuncionesAuxiliares.cpp
        Bibliotecas/FuncionesAuxiliares.h
        Bibliotecas/StructElementos.h
        Bibliotecas/StructNodo.h
        Bibliotecas/StructPila.h)
