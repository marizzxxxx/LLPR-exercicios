#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int idade;
	printf("Programa para saber se sua idade é par ou impar\n\n");
	
	printf("Digite sua idade:");
	scanf("%d", &idade);
	
	idade = idade%2;
	
	if (idade%2==0)
	{
		printf("Sua idade é um número par \n");
	}
	
	if (idade==1)
	{
		printf("Sua idade é um número impar \n");
	}

	return 0;
}
