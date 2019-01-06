 #include <stdio.h>
     
     int main(){
         
      int n,i,j,acc,menos;
    
     int vetor1[8],vetor2[8],vetor3[9]={0};
     
        for(i=0;i<8;i++){
            scanf("%d",&vetor1[i]); //O correto é i e não n
        }
        for(i=0;i<8;i++){
            scanf("%d",&vetor2[i]); //O correto é i e não n
        }
        
       for(i=0;i<8;i++){ //Tem que precorrer da direita para a esquerda para fazer as somas e quando parar, imprimir o acc se ele for 1
           	if(vetor1[i]+vetor2[i]==2){
                	vetor3[i+1] =1;
        	
            }else{
            	    vetor3[i] = vetor1[i] + vetor2[i];
            }
            if(vetor3[i]==2){
            	vetor3[i]=0;
            	vetor3[i+1]=1;
            }
           
        }
       
        for(i=0;i<8;i++){
            printf("%d",vetor3[i]);
        }
        
        
       
        
        return 0;
    }
