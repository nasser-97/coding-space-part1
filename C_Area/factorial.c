#include <stdio.h>
int factorial(int number);

int main(void) {
	// your code goes here
	unsigned long long num;
	printf("please enter a number: \n");
    scanf("%d",&num);
    printf("%d",factorial(num));
	return 0;
}
int factorial(int number){
    if(number == 1){
        return 1;
    }
    return number*factorial(number-1);
}

