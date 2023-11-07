#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

//criando uma struct de threads
pthread_t threads[100];

//criando rotinas para excutar nas threads
void *func(void *arg){
    int i;
    for(i=0;i<=5;i++){
        printf(" %d\n", i);
        usleep(1000000);
    }
}

int main(){
    //cria a thread
    pthread_create(&(threads[0]),NULL, func, NULL);
    pthread_create(&(threads[1]),NULL, func, NULL);
    pthread_create(&(threads[2]),NULL, func, NULL);

    //finaliza a thread
    pthread_join(threads[0],NULL);
    pthread_join(threads[1],NULL);
    pthread_join(threads[2],NULL);

    system("pause");
    return 0;
}