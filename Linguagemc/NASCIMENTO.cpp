#include<stdio.h>

int main() /*função principal*/
{
	float diaNascimento, mesNascimento, anoNascimento,calculaAno, calculaMes, calculaDias
	
	printf("************** SUPER IDADE CALCULATOR *************** ");
	

	printf("Digite o dia em que nasceu: ");
	scanf("%f",&diaNascimento);

	printf("Digite o mes em que nasceu (digite o mês em números, de 1 à 12): ");
	scanf("%f",&mesNascimento);

	printf("Digite o ano em que nasce: ");
	scanf("%f",&anoNascimento);

	printf("************************************* ");
	
	calculaAno=(2022 - anoNascimento) * 365;
	calculaMes=(mesNascimento * 30) - (30 - diaNascimento);
	calculaDias=CalculaAno + CalculaMes;

	printf("Você possui", calculaDias, " dias de vida");

