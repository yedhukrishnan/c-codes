#include<stdio.h>
#include<pthread.h>
#define THREAD_LIMIT 10

struct data_val
{
	long int val;
}data[THREAD_LIMIT];

void *print_hello(void *dat)
{
	long int i;
	for(i = 0 ; i < 100000000 ; i++);
	printf("Done!\n");
}

int main()
{
	int t, rc;
	void* status;
	pthread_t threads[THREAD_LIMIT];
	
	data[0].val = 0;
	data[1].val = 0;
	
	for(t = 0 ; t < THREAD_LIMIT ; t++)
	{
		rc = pthread_create(&threads[t], NULL, print_hello, (void*)&data[t]);
  		if(rc)
  		{
			printf("ERROR; return code from pthread_create() is %d\n", rc);
    		}
    	}
    	
    	for(t = 0 ; t < THREAD_LIMIT ; t++)
	{
		rc = pthread_join(threads[t], &status);
		if(rc)
		{
			printf("ERROR; return code from pthread_join() is %d\n", rc);
		}
    	}
    	
	return 0;
}
