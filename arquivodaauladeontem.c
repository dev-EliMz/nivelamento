#include <stdio.h>
int main (){
	int QUANT = 0;
	
	printf("insira a quantidade de notas: ");
	scanf("%d", &QUANT);
	if (QUANT <= 0 || QUANT > 20){
		printf("quantidade invalida");
	} else {
		int i = 0;
		float media = 0;
		int total = 0;
		int notas[QUANT];
	
		for(i=0; i<QUANT; i++){
			printf("insira a nota %d: ", i+1);
	   		scanf("%d", &notas[i]);
	   		total += notas[i];
		}
	
		media = (float)total/QUANT;
		printf("a media e %.2f: ", media);
	
	}
	
	return 0;
}