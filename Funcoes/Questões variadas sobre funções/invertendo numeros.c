#include <stdio.h>
#include <string.h>

int revert(int n)
{
   int ret=0;
   int i=1;
   
   while(i<=n)
   {
       ret*=10;
       ret+=(n%(i*10)-n%i)/i;
       i*=10;
   }	
   return ret;
}

main()
{
   char num[81];
   int aux,i=0,j, rev[81];
   int decimal[81], inteiro;


	while(1){
		fgets(num,81,stdin);
		i=0;
		if(num[i]>=48 && num[i]<=57){
			for(i=0;i<strlen(num);i++){
				decimal[i]=((num[i]-48)*10)+(num[i+1]-48);
				decimal[i]=revert(decimal[i]);
			}
			for(i=strlen(num)-3;i>=0;i--){
				printf("%c",decimal[i]);
				i--;	
			}
		}else if(num[i]>=65&&num[i]<=90||num[i]>=97&&num[i]<=122||num[i]==32||num[i]==33||num[i]==44||num[i]==46||num[i]==58||num[i]==59||num[i]==63){
	
			for(i=0;i<strlen(num);i++){
			   rev[i] = revert(num[i]);
			}
			for (i=0; i<strlen(num); i++) {
		        aux = rev[i];
		        rev[i] = rev[strlen(num)-i-1];
		        rev[strlen(num)-i-1] = aux;
		    }
		   	for(i=strlen(num)-2;i>=0;i--){
				printf("%d",rev[i]);			
			}
		}else{
			return 0;
		}	
	}

	
}
