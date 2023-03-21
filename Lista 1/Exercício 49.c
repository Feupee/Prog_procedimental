#include <stdio.h>
#include <stdlib.h>

int main() { 

    int Se, Mi ,Hr, Dr;

    printf("O valor do relogio inicial em segundos: ");
    scanf("%i",&Se);
	if(Se < 0 || Se > 59) {
		exit(0);
	}

	printf("O valor do relogio inicial em minutos: ");
    scanf("%i",&Mi);
	if(Mi < 0 || Mi > 59) {
		exit(0);
	}

	printf("O valor do relogio inicial em horas: ");
    scanf("%i",&Hr);
	if(Hr < 0 || Hr > 23) {
		exit(0);
	}
    printf("\n");

	printf("O valor do relogio inicial eh: %i:%i:%i", Hr, Mi, Se);

	printf("\n");
	printf("\n");

	printf("Digite o valor da duracao em segundos: ");
    scanf("%i",&Dr);

	int horas, minutos, segundos;

   	horas = Dr / 3600;
   	minutos = (Dr-(horas*3600))/60;
   	segundos = Dr - (horas*3600)-(minutos*60);

   	int Hf, Mf, Sf, Dia = 0;

   	Hf= Hr + horas;
   	Mf= Mi + minutos;
   	Sf= Se + segundos;

	while(Hf > 24) {
		Hf = Hf - 24;
		Dia++;
	}

   	printf("\nA experiencia terminara em: %i dia(s) as %i:%i:%i ", Dia, Hf, Mf, Sf );
   

}

