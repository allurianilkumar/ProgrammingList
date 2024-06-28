/*

*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

// pthread_create()
void *pauseThread(void *vargp){
	sleep(1);
	printf(".....Delay of one second\n");
	return NULL;
}

int main(){
    int i,n;
	pthread_t thread_id;
	printf("Before Thread\n");
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    // initialize first and second terms
    int t1 = 0, t2 = 1;
    // initialize the next term (3rd term)
    int t3 = t1 + t2;
	pthread_create(&thread_id, NULL, pauseThread, NULL);
	pthread_join(thread_id, NULL);
	printf("After Thread\n");
    // print the first two terms t1 and t2
    printf("Fibonacci Series is %d\n", t1);
    printf("Fibonacci Series is %d\n", t2);
    // print 3rd to nth terms
    for (i = 3; i <= n; ++i) {
        pthread_create(&thread_id, NULL, pauseThread, NULL);
        printf("Fibonacci is %d\n", t3);
        pthread_join(thread_id, NULL);
        t1 = t2;
        t2 = t3;
        t3 = t1 + t2;
    }
	exit(0);
}
