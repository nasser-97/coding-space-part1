/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/** first dimension represents the block size(total number of 2D arrays).
second dimension represents the rows of 2D arrays.
third dimension represents the columns of 2D arrays*/

#include <stdio.h>
#include <stdlib.h>

int LinearSearch(int*,int,int);// complexity O(n)

int main()
{
    int numbers[6]= {42,77,35,12,101,5};

    if(LinearSearch(numbers,6,300)){
        printf("Found : %d",LinearSearch(numbers,6,35));
    }
    else{
        printf("Not found");
    }

    return 0;
}

int LinearSearch(int myList[], int size, int key){
    for(int i=0; i<size; i++){
        if(myList[i]==key){
            return key;
        }
    }
    return 0;
}


