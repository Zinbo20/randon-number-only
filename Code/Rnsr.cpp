
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>

int main(){
             
    int cts=10;    
	int upperbound = 10; 
	int minbound =0;
	int int_random = 0 ;  
	int minimo;
	bool u;
	bool m=true;
	
	printf("Quantos numeros:");
    scanf("%d", &cts);
    cts=cts-1;
    int a[cts];
	
	while(m==true){

    printf("Maior valor:");
    scanf("%d",&upperbound);      
	upperbound=upperbound+1;
        
    printf("Menor valor:");
    scanf("%d",&minbound);
	
	minimo = upperbound - minbound;
	if(minimo==cts || minimo>cts)m=false;
	else printf("Erro.Impossivel de gerar valor estabelecido.\n");
}
	               
  srand(time(NULL));
  
      for (int i = 0; i <= cts; i++) {
      int_random = rand() % upperbound ;
      minimo = int_random - minbound;
	    while(minimo<=0){
    	int_random = rand() % upperbound ;
      	minimo = int_random - minbound;}
    	a[i] = int_random;    
        }    
        
        int x=0;
        for (int i = 0; i <= cts; i++) {
        for (int y = i; y <= cts; y++) {
        if(a[i]==a[y] && i!=y){
		x++;
		}
    	}}
	    
    
        while(x!=0){                             // while ate zerar as repetições
        for (int i = 0; i <= cts; i++) {
        for (int y = i+1; y <= cts; y++) {
        if(a[i]==a[y] && i!=y){
        	
      int_random = rand() % upperbound ;
      minimo = int_random - minbound;
      
	    while(minimo<=0){
    	int_random = rand() % upperbound ;
      	minimo = int_random - minbound;}
      	
    	a[i] = int_random;  

    	}
		}}
		x=0;
		for (int i = 0; i <= cts; i++) {
        for (int y = i; y <= cts; y++) {
        if(a[i]==a[y] && i!=y){
		x++;
		}
    	}}
		
		}                                         //end while

    	for (int i = 0; i <= cts; i++) {
        printf("%d  ",a[i]);
        }  
		printf("\nx=%d",x);        
                    
                                     	
}

