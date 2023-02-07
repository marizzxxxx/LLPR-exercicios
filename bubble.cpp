#include <stdio.h>

void bubble_sort (int v[], int t){
	int aux;
	for (int i = 0; i < t; i++){
		for(int j = 0; j < t - 1; j++){
			if(v[j] > v[j + 1]){
				aux = v	[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
				printf("%d: Trocou %d por %d\n", i, aux, v[j + 1]);
			}
		}
	}
}

int main(){
	
	int v[5] = {5,8,1,-5,13};
	bubble_sort(v, 5);
	for(int i = 0; i < 5; i++){
		printf("%d", v[i]);
	}
	
	return 0;
}
