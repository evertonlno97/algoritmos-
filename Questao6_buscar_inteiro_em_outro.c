#include <stdio.h>
#include <stdlib.h>

int q6(int numerobase, int numerobusca);

int main(){
int numx, numk, quant;

printf("Digite um numero:\n");
scanf("%d", &numx);
printf("Digite um numero:\n");
scanf("%d", &numk);

  quant = q6(numx, numk);
  
  printf("Quant : %d", quant);
    
}



int q6(int numerobase, int numerobusca){

	int qtdOcorrencias=0, aux, div=1, kcont=0, busca=0, base=0, numbase[10], numbusca[10], icont, jcont, volta;


	aux = numerobase;

	while(aux>0){
    	     aux = aux/10;
             base++;
	}

	aux = numerobusca;

	while(aux>0){
    	     aux = aux/10;
    	     busca++;
	}

	aux = base;

	while(aux>1){
    	     div = div*10;
    	     aux--;

	}

	for(aux=0; aux < base; aux++){
     	   kcont = numerobase/div;
    	   numbase[aux] = kcont;
    	   numerobase = numerobase-(kcont*div);
    	   div = div/10;
	}

	aux = busca;
	div = 1;

	while(aux>1){
    	     div = div*10;
    	     aux--;

	}

	for(aux=0; aux < busca; aux++){
    	   kcont = numerobusca/div;
    	   numbusca[aux]=kcont;
    	   numerobusca = numerobusca - (kcont*div);
    	   div = div/10;
	}


	for(icont = 0; icont < base; icont++){
	    
	    if(numbase[icont] == numbusca[0] && busca > 1){
	        
	        for(jcont = 1, kcont = icont + 1, volta = 1; (jcont < busca && (volta)); kcont++, jcont++){
	            
	            if(numbase[kcont] == numbusca[jcont]) {
	                
	               if(jcont == busca - 1){
	                 
	                 qtdOcorrencias++;
	                 
	             }
	                
	            }else{
	                
	                 volta = 0;
	            }
	            
	        }
	        
	    } else if(numbase[icont] == numbusca[0] && (busca == 1)){
	    	
	    	qtdOcorrencias++;
	    	
		}
	    
	}


    return qtdOcorrencias;
}