
""" 

9) Independente de consideracoes de precedencia, porque as declaracoes 
a = a++ e 
 i++ + ++i  sao de comportamento indefinido

""" 

def main():
	a = 2 
	i = 1

	#a = a++
	print a++ + ++a
	print i++ + ++i

main()
