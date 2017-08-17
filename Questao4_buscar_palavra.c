#include <stdio.h>
#include <string.h>

int main(void) {
	// your code goes here
	int posicoes[30], icont, jcont, kcont, tamBusca, tamTexto, volta, achou, bcont = 0, qtdOcorrencias = 0;
	char strTexto[250], strBusca[50];
	
	strcpy(strTexto,"Laboratorio de programacao: para ratos de programação");
	strcpy(strBusca, "rato");
	
	tamTexto = strlen(strTexto);
	tamBusca = strlen(strBusca);
	
	for(icont = 0; icont < tamTexto; icont++){
	    
	    if(strTexto[icont] == strBusca[0]){
	        
	        achou = icont + 1;
	        
	        for(jcont = 1, kcont = icont + 1, volta = 1; (jcont < tamBusca && volta); kcont++, jcont++){
	            
	            if(strTexto[kcont] == strBusca[jcont]) {
	                
	               if(jcont == tamBusca - 1){
	                 
	                 posicoes[bcont] = achou;
	                 bcont++;
	                 posicoes[bcont] = kcont + 1;
	                 bcont++;
	                 
	                 qtdOcorrencias++;
	                 
	             }
	                
	            } else{
	                
	                volta = 0;
	            }
	            
	        }
	        
	    }
	    
	}
	
	printf("Numero de Ocorrencias de: %d\n", qtdOcorrencias);
	printf("Tamanho do texto: %d\n", tamTexto);
	printf("Tamanho da busca: %d\n", tamBusca);
	for(icont = 0; icont < bcont; icont++){
	    
	    printf("Posicoes[%d] = %d\n ", icont, posicoes[icont]);
	    
	}
	
	
	return 0;
}

