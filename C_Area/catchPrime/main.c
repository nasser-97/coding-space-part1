#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0, flag = 0 ;

    // get a number from the user to test it after displaying a staring msg
    printf("please enter a number to test: ");
    scanf("%d",&number);

    /**
        - if this no is 1 or zero not prime
        - else if this number is 2 is prime
        - else loop till (no/2)
            - if in any state there is a reminder of zero ,so not a prime, break the loop and raise a flag
        - check the flag again if it is not raised , so it is prime
    **/
    if(number == 1 || number == 0 ){
        printf("This number is not prime");
        return 0 ;
    }
    else if(number == 2){
        printf("This number is prime");
        return 0 ;
    }
    else{
        for(int i= 1;i < number/2; i++){
            if(number% (i+1) == 0){
                printf("This number is not prime");
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0){
        printf("This number is prime");
    }
    return 0;
}
