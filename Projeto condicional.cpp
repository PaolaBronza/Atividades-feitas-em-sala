#include <stdio.h>
#include <stdlib.h>
#include <locale>
#include <math.h>
#include <time.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num,num2;
	srand(time(NULL));
	num=rand()%11-1;
	printf("digite um n�mero de 1 a 10: ");
	scanf("%d",&num2);
	printf("o n�mero que voc� digitou � %d",num2);
	
	//n�mero digitado
	if(num2 % 2==0){
			printf("\no n�mero � par");
		}
		else{
			printf("\no n�mero � �mpar");
		}
		if(num2>5){
			printf("\no n�mero � maior que 5");
		}
		else if(num2<5){
			printf("\no n�mero � menor que 5");
		}
		else if(num2==5){
			printf("\no n�mero � igual a 5");
		}
				
	printf("\n\nn�mero da sorte: %d",num);
	
	//n�mero aleat�rio
	if(num % 2==0){
		printf("\no n�mero � par");
	}
	else{
		printf("\no n�mero � �mpar");
	}
	if(num>5){
		printf("\no n�mero � maior que 5");
	}
	else if(num<5){
		printf("\no n�mero � menor que 5");
	}
	else if(num==5){
		printf("\no n�mero � igual a 5");
	}
	
	//geral
	if(num==num2){
		printf("\n\nseu n�mero � da sorte!");
	}
	else if(num!=num2){
		printf("\n\nseu n�mero n�o � igual ao n�mero gerado.");
	}
	return 0;
}
