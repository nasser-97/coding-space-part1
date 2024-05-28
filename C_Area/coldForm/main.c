#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Temprature = 0;
    printf("please enter the Temprature : ");
    scanf("%d",&Temprature);
    if(Temprature < 0){
        printf("Ice");
    }
    else if(Temprature >= 100){
        printf("Gas");
    }
    else{
        printf("Liquid");
    }

//printf("Hello world!\n");
    return 0;
}
