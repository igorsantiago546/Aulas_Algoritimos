#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main ()
{
	int Salario, Re;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Salario do funcionario");
	scanf("%d", &Salario);
	
	
	if(Salario > 300)
	{
		Re= (0.3 * Salario) + Salario;
		printf("Seu salario e maior do que R$300,00 então o seu reajuste vai ficar  %d\n\n", Re);
	}
	else
	{
	if(Salario <= 300)
		{
		Re= (0.5 * Salario) + Salario;
		printf("Seu salario e menor ou igual que R$300,00 então o seu reajuste vai ficar = %d", Re);
		}
	}
}
