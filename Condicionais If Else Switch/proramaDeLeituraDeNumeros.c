#include <stdio.h>

main(){
       //Cria a matriz das unidades
     char unidade[10][10]=
     {
      "",          
      "UM",
      "DOIS",
      "TRES",
      "QUATRO",
      "CINCO",
      "SEIS",
      "SETE",
      "OITO",
      "NOVE"          
     };
     //Cria matriz das dezenas
     char dezena[10][20]=
     {
      "",
      "DEZ",
      "VINTE",
      "TRINTA",
      "QUARENTA",
      "CINQUENTA",
      "SESSENTA",
      "SETENTA",
      "OITENTA",
      "NOVENTA"   
     };
     
     //Cria a matriz das excecoes
     char excecao[10][20]=
     {
     
      "ONZE",
      "DOZE",
      "TREZE",
      "CATORZE",
      "QUINZE",
      "DEZESSEIS",
      "DEZESSETE",
      "DEZOITO",
      "DEZENOVE"
     }; 
	 
     //Variavel para amarmazenar o numero
     int num;
     printf ("**************************************\n");
     printf ("*   PROGRAMA DE LEITURA DE NUMEROS   *\n");
     printf ("**************************************\n\n");
     printf ("Digite o numero a ser escrito : ");
     scanf ("%d",&num);
     //Aqui o numero é valido
	if ((num>0) && (num<1000)){
        //Checa pra ver se ele está na exeção
        if ((num>10) && (num<20)){
           puts (excecao[num%10]);
        }else {
              //Coloca os numeros na tela
            
              puts (dezena[num%100/10]);
              puts (unidade[num%100%10]);    
        }                         
                 
    }else {
           printf ("Numero não permitido!");
    }
     return 0;
}


