#include <stdio.h>

int main ()
{
  // ...   // Código serial, executado por apenas 1 thread, como usual
  // ...

  // Uso da diretiva parallel para criar uma região paralela:
  #pragma omp parallel num_threads(4)
  {
    // Seção paralela, executada por todas as threads do time
    printf("Hello, world!\n");
  }
  // Ao fim do bloco de código da região paralela, a thread master espera pela conclusão das demais
  // Apenas thread master (aquela que encontrou a região paralela e criou o time) prossegue execução

  printf("Goodbye\n");
  // ...
  return 0;
}

