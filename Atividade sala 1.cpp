#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main (void){
	setlocale(LC_ALL,"portuguese");
	int num,num2;
	printf("Digite um n�mero de 1 a 10: ");
	scanf("%d",&num);
	printf("Digite um n�mero de 1 a 10: ");
	scanf("%d",&num2);
	printf("N�meros recebidos: %d e %d",num,num2);
	
	if(num==5||num2==10){
		printf("\n5 ou 10");
	}	
	if(num<num2){
		printf("\nPrimeiro � menor");
		}
	if(num>num2){
		printf("\nPrimeiro � maior");
	}
	return 0;
}
