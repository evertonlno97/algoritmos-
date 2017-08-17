#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BARRA 47

int main(void) {
	// your code goes here
	
	char data[11], data_dia[3], data_mes[3], data_ano[5];
	int dia, mes, ano, valida, icont, jcont, econt, j, e;
	
	strcpy(data, "50/12/1997");
	puts(data);
	
	for(icont=0; data[icont]!=BARRA; icont++){
    
	    //strcpy(data_dia[icont], data[icont]);
	    data_dia[icont] = data[icont];
	 
	}

	data_dia[icont] = '\0';
	
	for(jcont=icont+1, j=0; data[jcont]!=BARRA; jcont++, j++){
	    
	    data_mes[j] = data[jcont]; 
	    
	}

	data_mes[j] = '\0';
	
	for(econt=jcont+1, e=0; data[econt]!='\0'; econt++, e++){
	    
	    data_ano[e] = data[econt];
	    
	}

	data_ano[e] = '\0';
	
	dia = atoi(data_dia);
	mes = atoi(data_mes);
	ano = atoi(data_ano);
	
	if(mes >= 1 && mes <= 12){
	
        switch(mes){
        
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
        
                if(dia>=1 && dia<=31){
            
                    valida = 1;
            
                } else{
            
                    valida = 0;
            
                }
        
            case 2:
        
                 if(ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)){
                    if(dia>=1 && dia<=29){
                    
                         valida = 1;
                    
                    }
                
                } else if(dia >= 1 && dia <= 28){
                
                        valida = 1;
                
                } else{
                
                    valida = 0;   
                
                }
                
            default:
                if(dia >= 1 && dia <= 30){
                    
                    valida = 1;
                    
                    
                }else{
                    
                    valida = 0;
                    
                }
        
        }
        
	} else {
	    
	    valida = 0;
	    
	}
printf("\nDia = %d\nMes = %d\nAno = %d\n Valido = %d\n", dia, mes, ano, valida);	


	return 0;
    
    
}

