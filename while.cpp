#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, soma, parar, cont=1;
	
	printf("Somat�rio de n�meros positivos");
	
	while(cont == 1){
		
		printf("\n\nPrimeiro n�mero: ");
		scanf("%d", &a);
		
		printf("\n\nSegundo n�mero: ");	
		scanf("%d", &b);
		
		soma= (a *b);
		
		printf("o resultado �: %d", soma);
		
		printf("\n\ndeseja continuar? (digite 1 para sim e 0 para n�o)\n", cont);
		scanf("%d", &cont);
	}
	
	
	
	
	return 0;
}
