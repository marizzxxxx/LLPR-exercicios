#include <stdio.h>

int main(){
	
	int num;
	int *ponteiro = &num;
	
	printf("Digite o valor da variavel:");
	scanf("%d", &num);
	
	printf("valor da variavel: %d\n", num);
	printf("endereço de memoria da variavel: %p\n", &num);
	printf("valor do ponteiro: %p\n", ponteiro);
	printf("valor apontado pelo ponteiro: %d\n", *ponteiro);
	
	return 0;
}
