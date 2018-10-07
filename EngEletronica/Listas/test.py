#!/usr/bin/env python
# -*- coding: utf-8 -*-

#Faça um procedimento (função sem retorno) para leitura de 3 variáveis inteiras a, b e c,
#depois disso uma outra função que some essas 3 variáveis e por fim um procedimento
#(função sem retorno) que imprima esse valor na tela.

def get_values():
    a = int(input("A: "))
    b = int(input("B: "))
    c = int(input("C: "))
    

def set_value():

    get_values()
    soma = a+b+c
    return soma
    
print set_value()
    

