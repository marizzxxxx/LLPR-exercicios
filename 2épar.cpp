#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int idade;
	printf("Programa para saber se sua idade � par ou impar\n\n");
	
	printf("Digite sua idade:");
	scanf("%d", &idade);
	
	idade = idade%2;
	
	if (idade%2==0)
	{
		printf("Sua idade � um n�mero par \n");
	}
	
	if (idade==1)
	{
		printf("Sua idade � um n�mero impar \n");
	}

	return 0;
}
