#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/***
1) Implemente um programa para uma revendedora de carros
que calcule o salário de cada vendedor. 
Considere que todos os carros têm o mesmo
valor, e que a revendedora paga:
a) um salário fixo de dois salários mínimos a seus vendedores
b) uma comissão fixa de R$ 50,00 por carro que for vendido
c) caso o vendedor tenha vendido mais de 10 carros, 
uma comissão variável de 5% do 
valor total de suas vendas.
****/

float salarioNormal(){
	float salario_min = 950.00;
	return 2 * salario_min;
}

float comissaoFixa(float numero_carros){
	float valor_carro = 33900.00;
	float comissao = 50.00;

	if (numero_carros >= 10){
		return salarioNormal()+((numero_carros * valor_carro) * 5) / 100;
	}if (numero_carros < 10){
		return salarioNormal() + (comissao * numero_carros);
	}
}

int main(int argc, char const *argv[])
{
	float num_car;

	printf("Numero de Carros Vendidos:  ");
	scanf("%f",&num_car);
	printf("Salario Normal: %.2f\n",salarioNormal());
	printf("Salario + Comissao: %.2f\n",comissaoFixa(num_car));
	return 0;
}