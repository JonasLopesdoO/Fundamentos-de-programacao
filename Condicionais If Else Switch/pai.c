
     #include <stdio.h>
     int main(){
     
	     char snest, rhnest, smae, rhmae, spai, rhpai;
	     char X[2] = "AB";
     	 int papai = 0;
	     scanf(" %c %c", &snest, &rhnestor);
	     scanf(" %c %c", &smae, &rhmae);
	     scanf(" %c %c", &spai, &rhpai);
	     
		 				if(rhmae == '-'){
    						if(rhpai == '-'){
    							if(rhnest == '+'){
    								papai = 0;
    								}else{
									papai = 1;
									}
    							}else{
									papai = 1;
								}
    						}else{
								papai = 1;
							}
    					}else{
							papai = 1;
						}
	         
    	//FILHO O E PAIS AB
    	switch(smae){
    		case 'O':
    			switch(spai){
    		case 'O':
    			if(snestor == 'O'){
					printf("SIM");
				}else{
					printf("NAO");
				}
    			break;
 			case 'A':
 					if(snestor == 'A'){
					printf("SIM");
				}else if (snestor == 'O'){
					printf("SIM");
				}else{
					printf("NAO");
				}
    			break;
 			case 'B':
 					if(snestor == 'B'){
					printf("SIM");
				}else if (snestor == 'O'){
					printf("SIM");
				}else{
					printf("NAO");
				}
    			break;
 			case 'X':
    				if(snestor == 'A'){
					printf("SIM");
						}else if (snestor == 'B'){
							printf("SIM");
							}else{
								printf("NAO");
							}
				break;
				}
				
    			break;
 			case 'A':
 				
    			break;
 			case 'B':
    			break;
 			case 'X':
    			break;
 
 		}
	 }	


