#include<stdio.h>
#include<locale.h>

int main()
{
	int num,cont,resul;
	setlocale(LC_ALL,"Portuguese");
	printf("\n Informe o n�mero: \n");
	scanf("%d",&num);
	
	if(num>=1 && num<=50) /*se num
	>=1 e num<=10*/
	{
		for(cont=1;cont<=50;cont++)
		{
			resul=(num+cont);
			printf("\t %d + %d =%d\n",num,cont,resul);
		}
	}else
	
	printf("\n o n�mero n�o est� entre 1 e 10");
	
	return 0;
}
