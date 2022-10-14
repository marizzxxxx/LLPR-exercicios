#include <stdio.h>
#include <locale.h>

	int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");

		int idade, estudante;
		
		printf("Digite sua idade:");
		scanf("%d", &idade);
		
		printf("Você é estudante?\n\nDigite 1 para sim e 0 para não:");
		scanf("%d", &estudante);
		
		if((idade >= 65) ^ (!estudante)){
			printf("Você tem direito a meia entrada");
		}
	return 0;
	}
	
