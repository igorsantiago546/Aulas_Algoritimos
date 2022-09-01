#include<stdio.h>
#include<locale.h>

int main ()
{
	int n1, n2, n3;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe o primeiro numero:\n");
	scanf("%d", &n1);
	
	printf("Informe o segundo numero:\n");
	scanf("%d", &n2);
	
	printf("Informe o terceiro numero:\n");
	scanf("%d", &n3);
	
	if(n1 > n2)
	{
		printf("\nA diferença do maior pelo menor numero e: %d.\n\n\n", n1);
	}
	else if(n2 > n1)
	{
		printf("\nA diferença do maior pelo menor numero e: %d.\n\n\n", n2);
	}
	else if(n3 > n2)
	{
		printf("\nA diferença do maior pelo menor numero e: %d.\n\n\n", n3);
	}
	else
	{
	}
		
}
