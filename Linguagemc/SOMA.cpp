#include<stdio.h>

int main() /*fun��o principal*/
{
float soma,nota1,nota2,nota3,media;
soma=0;
media=0;

	printf("\t Digite a [1]� nota : ");
	scanf("%f",&nota1);
	
	printf("\t Digite a [2]� nota : ");
	scanf("%f",&nota2);
	
	printf("\t Digite a [3]� nota : ");
	scanf("%f",&nota3);
	
	soma=nota1+nota2+nota3;
	media=soma/3;
	
printf("Media = %.1f ",media );

return 0;
}
