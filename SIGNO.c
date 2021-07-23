#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese-brazilian");
	
	int dia, mes;
	printf("=================================================\n");
	printf("|           DESCUBRA SEU HOROSCOPO              |\n");
	printf("=================================================\n");
	printf("\nInforme o Dia e o Mês do seu aniversário : \n\n\n");
	printf("Dia : ");
	scanf("%d", &dia);
	
	printf("Mês : ");
	scanf("%d", &mes);
	
	if (dia >= 21 && dia <= 31 && mes == 3 || dia >= 1 && dia <= 20 && mes == 4 ){
		printf("\n\nVoce é do signo de Aries ! ");
	}
	else if (dia >= 21 && dia <= 30 && mes == 4 || dia >= 1 && dia <= 20 && mes == 5){
		printf("\n\nVoce é do signo de Touro ! ");
	}
	else if (dia >= 21 && dia <= 31 && mes == 5 || dia >= 1 && dia <= 20 && mes == 6){
		printf("\n\nVoce é do signo de Gêmeos ! ");
	}
	else if (dia >= 21 && dia <= 30 && mes == 6 || dia >= 1 && dia <= 22 && mes == 7){
		printf("\n\nVoce é do signo de Câncer ! ");
	}
	else if (dia >= 23 && dia <= 31 && mes == 7 || dia >= 1 && dia <= 22 && mes == 8){
		printf("\n\nVoce é do signo de Leão ! ");
	}
	else if (dia >= 23 && dia <= 31 && mes == 8 || dia >= 1 && dia <= 22 && mes == 9){
		printf("\n\nVoce é do signo de Virgem ! ");
	}
	else if (dia >= 23 && dia <= 30 && mes == 9 || dia >= 1 && dia <= 22 && mes == 10 ){
		printf("\n\nVoce é do signo de Libra ! ");
	}
	else if (dia >= 23 && dia <= 31 && mes == 10 || dia >= 1 && dia <= 21 && mes == 11){
		printf("\n\nVoce é do signo de Escorpião ! ");
	}
	else if (dia >= 22 && dia <= 30 && mes == 11 || dia >= 1 && dia <= 21 && mes == 12){
		printf("\n\nVoce é do signo de Sagitário ! ");
	}
	else if (dia >= 22 && dia <= 31 && mes == 12 || dia >= 1 && dia <= 20 && mes == 1){
		printf("\n\nVoce é do signo de Capricórnio ! ");
	}
	else if (dia >= 21 && dia <= 31 && mes == 1 || dia >= 1 && dia <= 18 && mes == 2){
		printf("\n\nVoce é do signo de Aquário ! ");
	}
	else if (dia >= 19 && dia <= 28 && mes == 2 || dia >= 1 && dia <= 20 && mes == 3){
		printf("\n\nVoce é do signo de Peixes ! ");
	}
}
