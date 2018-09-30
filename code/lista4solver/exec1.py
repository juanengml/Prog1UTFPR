

comissao = 50.00
salario_min = 950.00
valor_carro = 33900.00



def salarioNormal():
   return 2 * salario_min

def comissaoFixa(numero_carros):
    if numero_carros > 10:
        total_vendas = ((numero_carros * valor_carro) * 5 ) / 100
        return total_vendas + salarioNormal()
    if numero_carros < 10:
        return salarioNormal() + (comissao * numero_carros)



num_car = float(raw_input("Numero de Carros Vendidos: "))
print "Salario Normal: ",salarioNormal()
print "Salario + Comissao: ",comissaoFixa(num_car)
