#include <stdio.h>
#include <time.h>

long int fibonacci(long int termo){
    
    long int fibo, ant=0, atual=1, icont;
    clock_t t0,t1;
    double tempo;
    
    if(termo==0){
        
        return 0;
    }     
    
    if(termo==1){
        
        return 1;
    }
    
    t0=clock();
    
    for(icont = 1; termo != icont; icont++){
            
        fibo = atual + ant;
        ant = atual;
        atual = fibo;
        
    }
    
    t1=clock();
    
    tempo = (double) (t1-t0) / (CLOCKS_PER_SEC);
    printf("O tempo de excucão desse laço é: %lf\n", tempo);
    
    return fibo;
    
    
}

int main(void) {
	// your code goes here

    long int fib, termo;
    
    printf("Digite o termo da sequencia de fibonacci a ser retornado:\n");
    
    scanf("%li", &termo);
    
    fib= fibonacci(termo);
    
    printf("Termo[%li] = %li\n", termo, fib);
    
	return 0;
}

