#include <stdio.h>
#include <sys/shm.h>
#include <sys/stat.h>

int main(){
  int segment_id; // identificador do segmento de memoria compartilhada
  char *shared_memory; // ponteiro para o segmento de memoria compartilhada
  const int size = 4096; // tamanho (em bytes) da memoria compartilhada
    
    //IGNORE: segment_id = shmget(IPC_PRIVATE, size, S_IRUSR | S_IWUSR);
    // solicita o id do segmento de memoria
    printf("Digite o ID da memoria compartilhada:");
    scanf("%d",&segment_id);

    // anexa o segmento de memoria ao processo
    shared_memory = (char*) shmat(segment_id, NULL, 0);

    //IGNORE: sprintf(shared_memory, "Ola meu povo!");
    // apresenta na tela o conteudo
    printf("La esta escrito isso: %s\n", shared_memory);
  
    shmdt(shared_memory); // desanexa o segmento de memoria
    //IGNORE: shmctl(segment_id, IPC_RMID, NULL);
    char aux; scanf("%c%*c", &aux);
    return 0;
}



