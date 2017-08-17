#include <stdio.h>
#include <time.h>

long int fatorial(long int n){
    
    long int fat;
    double tempo;
    clock_t t0, t1;
    
    t0=clock();
    
    if(n<=1){
        
        return 1;
        
    } else{
        
        fat = n * fatorial(n-1);
        printf("fat: %li\n", fat);
        t1=clock();
        tempo = (double) (t1-t0) / (CLOCKS_PER_SEC);
        printf("O tempo de execução da função recursiva de fatorial: %f\n\n", tempo);
        
        return fat;
        
    }
    
    
    
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

