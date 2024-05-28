#include <stdio.h>
void Fibonacci(int number);

int main(void) {
	// your code goes here
	int num;
	printf("please enter a number to calculate Fibonacci series: ");
    scanf("%d",&num);
    Fibonacci(num);
	return 0;
}
void Fibonacci(int count){
    int ready = 0;
    int go = 0;
    int steady= 1;
    printf("%d, %d",ready,steady);
    for(int i=0; i< count; i++){
        go = ready+steady;
        printf(", %d ",go);
        if(ready< steady || ready == steady){
            ready = go;
        }
        else{
            steady = go;
        }
    }    
}
