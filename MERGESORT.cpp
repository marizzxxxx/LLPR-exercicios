#include <stdio.h>
#include <cstdlib>








void mergeint(int v[], int i, int meio, int j, int fim, int k, int aux[]) {
	if (i <= meio && (j > fim || v[i] < v[j])){
		aux[k] = v[i];
		mergeint(v, i + 1, meio, j, fim, k + 1, aux);
	} else if (j <= fim){
		aux[k] = v[j];
		mergeint(v, i, meio, j + 1, fim, k + 1, aux);
	}
}

void mergesortint(int v[], int inicio, int fim, int aux[]){
	int meio = (inicio + fim)/2;
	
	if(inicio < fim){
		mergesortint(v, inicio, meio, aux);
		mergesortint(v, meio + 1, fim, aux);
		mergeint(v, inicio, meio, meio + 1, fim, 0, aux);
		
		for (int l = 0; l < fim - inicio + 1; l++){
			v[inicio + l] = aux[l];
		}
	}
}

void mergesort(int v[], int tamanho){
	int *aux = (int *) malloc (sizeof(int) * tamanho);
	margesortint(v, 0, tamanho, aux;);
	free(aux);
}

int main(){
	
	int a[] = {10, 2, 7, 1, 4, 9, 3, 8, 0, 5, 6};
	
	int tamanho_vetor = sizeof(a)/sizeof(a[0]);
	
	mergesort(a, tamanho_vetor);
	for (int i = 0, i < tamanho_vetor; i++){
		printf("%d", a[i]);
	} 
	
	return 0;
}
