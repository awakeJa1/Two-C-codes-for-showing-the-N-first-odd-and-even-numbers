#include <stdio.h>

main(){
	
	int numero, a; //declara��o das variaveis 
	
	printf("digite um numero: "); //imput do usuario salvo na variavel numero
	scanf("%d", &numero);
	
	
	for(a=2;a<=numero*2;a+=2) //la�o de repeti��o que faz contagem e impress�o dos numeros pares 
	printf("%d ", a);	
}
