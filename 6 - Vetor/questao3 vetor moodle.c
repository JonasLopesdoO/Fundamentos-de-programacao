    #include <stdio.h>
     
     int main(){
         
     int n,i,j,acc,menos;
     scanf("%d",&n);
    int vetor[n],vetor2[n],vetor3[n];
     
       for(i=0;i<n;i++){
            scanf("%d",&vetor[i]); //O correto é i e não n
        }
        for(i=0;i<n;i++){
            scanf("%d",&vetor2[i]); //O correto é i e não n
        }
        
       for(i=0;i<n;i++){ //Tem que precorrer da direita para a esquerda para fazer as somas e quando parar, imprimir o acc se ele for 1
           if(vetor[i]+vetor2[i] >9){
                acc = vetor[i] + vetor2[i];
                menos = acc - 10;
                acc= acc%10;
                
                vetor3[i] = menos;
           }else{
               
                
                vetor3[i] = vetor[i] + vetor2[i];
            }
            
            if(vetor[i+1]<9){
                vetor[i+1] = vetor[i+1] + acc;
           }else if(vetor2[i+1]<9){
                vetor2[i+1] = vetor2[i+1] + acc;
        	}
            acc=0;
        }
       
        for(i=0;i<n;i++){
           printf("%d",vetor3[i]);
        }
        
        
       
        
        return 0;
    }
