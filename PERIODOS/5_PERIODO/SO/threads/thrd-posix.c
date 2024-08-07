/**
 * Um programa pthread que ilustra parte da API pthread e como criar um thread simples
 * Esse nprograma implementa a função de soma em que a operação de soma é executada como thread separado.
 *
 * maioria dos usuários de Unix/Linux/OS X
 * gcc thrd.c -lpthread
 *
 * Usuários Solaris devem inserir
 * gcc thrd.c -lpthreads
 *
 * Figura 4.9
 *
 * @author Gagne, Galvin, Silberschatz
 * Fundamentos de Sistemas Operacionais - Oitava Edição
 * Copyright John Wiley & Sons - 2011.
 */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>


#define COM_THREAD

int sum; /* esse dado é compartilhado pelo(s) thread(s) */

void *runner(void *param); /* o thread */

int main(int argc, char *argv[])
{
	pthread_t tid;		 /* identificador do thread */
	pthread_attr_t attr; /* definição de atributos do thread */

	if (argc != 2)
	{
		fprintf(stderr, "usage: a.out <integer value>\n");
		/*exit(1);*/
		return -1;
	}

	if (atoi(argv[1]) < 0)
	{
		fprintf(stderr, "Argument %d must be non-negative\n", atoi(argv[1]));
		/*exit(1);*/
		return -1;
	}

#ifdef COM_THREAD
	/* obtém os atributos padrão */
	pthread_attr_init(&attr);
	/* cria o thread */
	pthread_create(&tid, &attr, runner, argv[1]);
	/* agora espera o thread terminar */
	pthread_join(tid, NULL);
#endif

#ifndef COM_THREAD
	runner(argv[1]);
#endif

	printf("sum = %d\n", sum);
}

/**
 * A thread iniciará o controle nessa função
 */
void *runner(void *param)
{
	int i, upper = atoi(param);
	sum = 0;

	if (upper > 0)
	{
		for (i = 1; i <= upper; i++)
			sum += i;
	}
	#ifdef COM_THREAD
		pthread_exit(0);
	#endif
}
