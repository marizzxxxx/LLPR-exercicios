#include <stdio.h>
#include <locale.h>

int main(){
	
  setlocale(LC_ALL, "Portuguese");
	
  int fatorial, num;	

	printf("Calculadora de fatorial\n\n");
	
	printf("Digite o número que você deseja saber o fatorial: ");
    scanf("%d", &num);

  for(fatorial = 1; num > 1; num = num - 1){

      fatorial = fatorial * num;

  }

  printf("\nO fatorial é: %d", fatorial);
  return 0;
}
