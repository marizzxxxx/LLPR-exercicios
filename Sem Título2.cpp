void insercao (int vet, int tam){
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


void selecao (int vet, int tam){
    int i, j, min, x;
    for (i=1; i<=n-1; i++){
        min = i;
	for (j=i+1; j<=n; j++){
            if (vet[j] < vet[min])
	        min = j;
	}
	x = vet[min];
	vet[min] = vet[i];
	vet[i] = x;
    }
}
