#include <stdio.h>
#include <sys/shm.h>
#include <sys/stat.h>
int main(){
  int segment_id; // identificador do segmento de memoria compartilhada
  char *shared_memory; // ponteiro para o segmento de memoria compartilhada
  const int size = 4096; // tamanho (em bytes) da memoria compartilhada
   
    segment_id = shmget(IPC_PRIVATE, size, S_IRUSR | S_IWUSR);
    printf("O id da memória compartilhada é: %d\n", segment_id);
    
    // anexa o segmento de memoria ao processo
    shared_memory = (char*) shmat(segment_id, NULL, 0);
    
    // grava a mensagem no segmento de memoria
    sprintf(shared_memory, "Ola meu povo!");
    
    // acessa e imprime o conteudo da memoria compartilahda
    printf("Escrevi la: %s\n", shared_memory);
       
    getchar(); // so para pausar a execucao
    
    shmdt(shared_memory); // desanexa o segmento de memoria
    shmctl(segment_id, IPC_RMID, NULL); // libera o espaco alocado
    return 0;
}



