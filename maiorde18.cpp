#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int idade;
	printf("Programa para saber quem � maior de 18\n\n");
	
	printf("Digite sua idade:");
	scanf("%d", &idade);
	if (idade >= 18)
	{
		printf("Voc� � maior de idade \n");
	}
	
	if (idade <= 18)
	{
		printf("Voc� � menor de idade \n");
	}

	return 0;
}
