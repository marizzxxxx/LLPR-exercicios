#include <stdio.h>

	int main(){
		
		int idadep1, idadep2;
		
		printf("Digite a primeira idade:");
		scanf("%d", &idadep1);
		
		printf("Digite a segunda idade:");
		scanf("%d", &idadep2);
		
		if ((idadep1%2==1) || (idadep2%2==1)){
			
			printf("desconto");	
		}
	return 0;
	}
	
