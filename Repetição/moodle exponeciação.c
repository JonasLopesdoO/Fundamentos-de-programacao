 #include <stdio.h>
    
    int main(){
        
     long int x , y , acc = 0,ac =0, i, ii;
     
    	scanf("%ld", &x);
    	scanf("%ld", &y);
    	
    	ac = x;
    	acc = x;
    	for(ii = 1; ii<y; ii++){
    		
    		for(i = 1;i < x ;i++){
    		acc = acc + ac;	
    			
    		}
    		ac = acc ;
    
    	}	
    	
    		if(y == 0){
    			printf("1");
    			
    		}else{
    	 
    		printf("%ld",acc);
    		
    	}
    		
    		
     return 0;
        
   }
