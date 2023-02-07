#include <stdio.h>
#include <locale.h>

#define max 5


  void selc_sort(int num[], int tam) {
  	
    int i, j, min, aux;
    
    for (i = 0; i < tam; i++) {
        min = i;
        for (j = (i + 1); j < tam; j++) {
            if (num[j] < num[min]) {
                min = j;
            }
        }
	   if (i != min){
	   	aux = num[i];
	   	num[i] = num [min];
	   	num[min] = aux;
	   }
   }
}

  void insercao (int vet[], int tam){
	
	int i, j, x;
	
	for (i=2; i<=tam; i++){
	x = vet[i];
	j=i-1;
	vet[0] = x; 
	while (x < vet[j]){
        vet[j+1] = vet[j];
        j--;
    }
    vet[j+1] = x;

	}
}

int main(){
 	
 	setlocale(LC_ALL, "Portuguese");
 	
    int idade[max], i;
    for (i = 0; i < max; i++) {
        printf("Informe a %dº idade: ", i + 1);
        scanf("%d", &idade[i]);
    }
    
	insercao(idade, max);
    printf("Idades em ordem crescente: ");
    for (i=2; i < max; i++) {
        printf("%d ", idade[i]);
    }
    
    return 0;
}
