#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter=1, sum=0, result=1, avg=0;
    for(;result>=1 && result<=100;counter++){
        sum += result;
        result = counter * 5;
    }
    avg = sum / counter;
    printf("Summation = %d\n Average = %d", sum, avg);
    return 0;
}
