#Escreva um programa que leia duas matrizes 3x3 e apresente na tela o resultado da multiplicacao destas matrizes.

import numpy as np 


a = np.matrix('1 2 3 ; 4 5 6; 7 8 9')
b = np.matrix('1 2 3 ; 4 5 6; 7 8 9')
 
print np.dot(a,b)    



