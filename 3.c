#include <stdio.h>

main(){
	
	int numero, a; //declarando as variaveis 
	
	printf("digite um numero: "); //imput do usuario salvo na variavel numero
	scanf("%d", &numero);
	
	
	for(a=1;a<=numero*2;a+=2) //laço de repetição responsavel por fazer a contagem dos numeros impares 
	printf("%d ", a);	
}
