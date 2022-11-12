#include <stdio.h>
#include <stdlib.h>

int provas, trabalhos;
float mediaProvas, mediaTrabalhos, MF;

int main(){
	printf("Quantas provas você terá/tem/teve neste semestre?\n");
	scanf("%i", &provas);
	printf("Quantos trabalhos você terá/tem/teve neste semestre?\n");
	scanf("%i", &trabalhos);
	system("clear");
	float nota =0;
	for (int i=0; i<provas; i++){
		printf("Digite sua nota da prova %i\n",i+1);
		scanf("%f",&nota);
		system("clear");
		mediaProvas=mediaProvas+nota;
	}
	for (int i=0; i<trabalhos; i++){
		printf("Digite sua nota do trabalho %i\n",i+1);
		scanf("%f",&nota);
		system("clear");
			mediaTrabalhos=mediaTrabalhos+nota;
	}
	mediaProvas=mediaProvas/provas;
	mediaTrabalhos=mediaTrabalhos/trabalhos;
	if (mediaProvas>=5 && mediaTrabalhos>=5){
		MF = 0.6*mediaProvas + 0.4*mediaTrabalhos;
	}
	else{
		if (mediaProvas<=mediaTrabalhos){
			MF = mediaProvas;
		}
		else{
			MF = mediaTrabalhos;
		}
	}
	printf("Sua Média Final é %.2f\n", MF);
}
