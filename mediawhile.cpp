#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, soma, cont=1;
	
	printf("Calculadora de m�dia");
	
	while(cont == 1){
		
		printf("\n\nDigite a primeira nota: ");
		scanf("%d", &n1);
		
		printf("\n\nDigite a segunda nota: ");	
		scanf("%d", &n2);
		
		soma= (n1+n2)/2;
		
		printf("A sua m�dia �: %d", soma);
		
		printf("\n\nDeseja calcular outra m�dia? (digite 1 para sim e 0 para n�o)\n", cont);
		scanf("%d", &cont);
	}
	
	
	
	
	return 0;
}
