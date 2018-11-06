 # -*- coding: utf-8 -*- 
# 7) Modifique o programa anterior para imprimir os números em ordem crescente.

def getvalue():
    dado = list(raw_input("valor: "))
    return dado

def bubble_sort(lista):
   elementos = len(lista)-1
   ordenado = False
   while not ordenado:
        ordenado = True
        for i in range(elementos):
             if lista[i] > lista[i+1]:
                 lista[i], lista[i+1] = lista[i+1],lista[i]
                 ordenado = False        
                 
   return lista

def main(): 
    dado = getvalue()
    print bubble_sort(dado)      

main()