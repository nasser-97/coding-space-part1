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
#define SIZE 12
int* BinarySort(int*,int);

int main()
{
    int numbers[SIZE]= {42,77,35,12,101,5,7,444,32,656,5677,78};
    int* n=BinarySort(numbers,SIZE);

    for(int i=0;i<SIZE;i++){
        printf("%d ",n[i]);
    }

    return 0;
}

int* BinarySort(int myList[], int size){
    int tmp= 0;

    for(int i =0; i<size; i++){
        for(int c=0; c<size-1; c++){
            if(myList[c]>myList[c+1]){
                tmp= myList[c];
                myList[c]= myList[c+1];
                myList[c+1]=tmp;
            }
        }
    }
    return &myList[0];
}
