#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	float num,num2,num3;
	printf("insira o pre�o do seu produto: ");
	scanf("%f",&num);
	
	if(num>=100){
		num2=num-(num*0.1);
		printf("\nSeu produto recebeu desconto de 10%");
		printf("\nPre�o inicial: %f\nPre�o com desconto: %f",num,num2);
	}
	else if(num<99){
		printf("\nSeu produto n�o recebeu desconto.");
	}
	return 0;
}
