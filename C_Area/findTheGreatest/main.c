#include <stdio.h>
#include <stdlib.h>



int main()
{   int elements[10]= {10,20,30,40,50,60,70,80,90,100};
    int input = 0,flag=0;
    printf("Please enter a number: ");
    scanf("%d",&input);
    for(int i=0; i<10; i++){
       if(input < elements[i]){
        printf("address: %d\n", i);
        printf("Value: %d\n", elements[i]);
        flag = 1;
       }
    }
    if(flag == 0){
        printf("Not Found");
    }
    return 0;
}


