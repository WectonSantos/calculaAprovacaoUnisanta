#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
#include <locale.h>

float maiorNota;
int reprovado=0;

int media1(float p1, float p2){
	float media;
	media= (p1+p2*2)/3;
	return media;
}

int media2(float maiorNota, float p3){
	float media;
	media = (maiorNota+p3*2)/3;
	return media;
} 

int main(){
	setlocale(LC_ALL, "Portuguese");
	float p1;
	float p2;
	float p3;
	float resultado;
	
	printf("Qual foi a nota da sua p1?\n");
	scanf("%f", &p1);
	printf("Qual foi a nota da sua p2?\n");
	scanf("%f", &p2);
	
	if(p1>p2){
		maiorNota=p1;
	}else{
		maiorNota=p2;
	}
	
	resultado = media1(p1, p2);
	
	
	if (resultado<5){
		reprovado=1;
		//situacao="REPROVADO";
	}
	
	printf("A SUA MÉDIA FOI: %f", resultado);
	
	if (reprovado==1){
		printf("\n\nVOCÊ FICOU DE DP!\nQual foi a nota da sua p3?\n");
		scanf("%f", &p3);
		
		resultado = media2(maiorNota, p3);
		
		printf("\nA SUA MÉDIA FOI %f", resultado);
		
		if(resultado>=5){
			printf("\nVOCÊ FOI APROVADO!");
		}else{
			printf("\nREPROVADO!");
		}
			
	}if(reprovado==0){
		printf("/nVOCÊ FOI APROVADO!");
	}
}

