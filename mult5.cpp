#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");

    for(int i = 0 ; i < 250 ; i++) {

        if (i % 5 == 0)
            printf("%d ", i);
    }
    
	return 0;
}
