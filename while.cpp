#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, soma, parar, cont=1;
	
	printf("Somatório de números positivos");
	
	while(cont == 1){
		
		printf("\n\nPrimeiro número: ");
		scanf("%d", &a);
		
		printf("\n\nSegundo número: ");	
		scanf("%d", &b);
		
		soma= (a *b);
		
		printf("o resultado é: %d", soma);
		
		printf("\n\ndeseja continuar? (digite 1 para sim e 0 para não)\n", cont);
		scanf("%d", &cont);
	}
	
	
	
	
	return 0;
}
