#include <stdio.h>
#include <locale.h>

#define max 10


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

int main(){
 	
 	setlocale(LC_ALL, "Portuguese");
 	
    int idade[max], i;
    for (i = 0; i < max; i++) {
        printf("Informe a %dº idade: ", i + 1);
        scanf("%d", &idade[i]);
    }
    
	selc_sort(idade, max);
    printf("Idades em ordem crescente: ");
    for (i = 0; i < max; i++) {
        printf("%d ", idade[i]);
    }
    
    return 0;
}
