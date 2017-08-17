#include <stdio.h>

long int fibonacci(long int termo){
    
    long int fibo, ant=0, atual=1, icont;
    
    if(termo==0){
        
        return 0;
    }     
    
    if(termo==1){
        
        return 1;
    }
            
      fibo = fibonacci(termo - 1) + fibonacci(termo - 2);
      
    
    
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

