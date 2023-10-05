#include <stdio.h>

#define TAM_VOTOS 6

int main(){
  
  char tipo_voto[][14] = {"Candidato1", "Candidato2", "Candidato3", "Candidato4", "Votos nulos", "Votos brancos"};
  int votos[TAM_VOTOS] = {0, 0, 0, 0, 0, 0};
  int i, voto;

  printf("Entre com uma sequência de votos terminada pelo número 0\n");
  voto = 1;

  while(voto != 0){
    scanf("%d", &voto);
    if(voto >= 1 && voto <= TAM_VOTOS) 
      votos[voto - 1]++;
  }
 
   
  puts("-----Contagem dos votos-------");
  for(i=0; i < TAM_VOTOS; i++)
    printf("%s = %d\n", tipo_voto[i], votos[i]);

  return 0;
}
