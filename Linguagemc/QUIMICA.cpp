#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>


 int main (){
 	
 	int Aco, Car, Rock, Tra, Aco1, Aco2, Aco3;
 	
 	setlocale(LC_ALL, "Portuguese");
 	
 	Car=7;
 	Rock=50;
 	Tra=80.000;
 	Aco=39012.00;
 	
 	Aco1=Aco/Car;
 	Aco2=Aco/Rock;
 	Aco3=Aco/Tra;
 	
 	if(Aco1 > Car)
 	{
 		printf("O valor do aço e maior do que o carbono\n\n");
 	}
	 else{
 		printf("O valor de Carbono e maior que aço\n\n");
     }
     
    if(Aco2 > Rock)
    {
    	printf("O valor do aço e maior que Rockwell\n\n");
    }
    else{
    	printf("O valor de Rockwell e maior que Aço\n\n");
    }
    
    if(Aco3 > Tra)
    {
    	printf("O valor de Aço e maior que á tração");
    }
    else{
    	printf("O valor da Tração e maior que o Aço");
    }
 }
