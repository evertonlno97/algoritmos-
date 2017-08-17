#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long int fatorial(long int n){
    
    long int fat=1;
    double tempo;
    clock_t t0,t1;
    
    t0=clock();
    for( ; n>1; n--){
        
        fat*=n;
        
    }
    t1=clock();
    
    tempo=(double) (t1-t0) / (CLOCKS_PER_SEC);
    printf("O tempo de execucão da função interativa de fatorial: %f\n", tempo);
    
    return fat;
    
}

int main(void) {
	// your code goes here
	
	long int num, fatr;
	
	printf("Digite o valor a ser fatoriado:\n");
	scanf("%li",&num);
	
	fatr = fatorial(num);
	
	printf("O fatorial de %li é %li", num, fatr);
	
	return 0;
}

