#include <stdio.h>
#include <string.h>

int main(){
	
	char str[100];
	char *ponteiro;
	
	printf("Digite uma string:");
	scanf("%s", &str);
	
	ponteiro = &str[strlen(str)-1];
	
	printf("string de tras para frente: ");
	while (ponteiro >= str){
		printf("%c", *ponteiro);
		ponteiro --;
	}
	printf("\n");
		
	return 0;
}
