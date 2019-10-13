#include<stdio.h>

#include<pthread.h>
//

int main(){

	pthread_t thread;
	int s;
	s = pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start)(void *), void arg);
	if(s!=0)
	{
		printf("creation error\n");
	}
return 0;
}
