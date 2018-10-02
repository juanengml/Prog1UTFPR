
def main():
   valor = raw_input("Valor: ")
   soma = 0
   if len(valor) == 4:
   	 soma = int(valor[0])+int(valor[1])+int(valor[2])+int(valor[3])
   	 print "Valor de soma algarismos: ",soma

   else: 
   	print "Valor Diferente de Quatro"
   

main()