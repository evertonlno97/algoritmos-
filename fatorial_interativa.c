#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fatorial(int num){
    
    int fat=1;
    double tempo;
    clock_t t0,t1;
    
    t0=clock();
    for( ; num>1; num--){
        
        fat*=num;
        
    }
    t1=clock();
    
    tempo=(double) (t1-t0) / (CLOCKS_PER_SEC);
    printf("O tempo de execucão da função interativa de fatorial: %f\n", tempo);
    
    return fat;
    
}

int main(void) {
	// your code goes here
	
	int fatr, num;
	
	printf("Digite o valor a ser fatorado:\n");
	scanf("%d",&num);
	
	fatr = fatorial(num);
	
	printf("O fatorial de %d é %d", num, fatr);
	
	return 0;
}

