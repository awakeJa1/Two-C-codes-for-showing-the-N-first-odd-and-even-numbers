#include <stdio.h>

main(){
	
	int numero, a; //declaração das variaveis 
	
	printf("digite um numero: "); //imput do usuario salvo na variavel numero
	scanf("%d", &numero);
	
	
	for(a=2;a<=numero*2;a+=2) //laço de repetição que faz contagem e impressão dos numeros pares 
	printf("%d ", a);	
}
