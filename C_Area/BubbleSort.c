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

int* BubbleSort(int*,int);// complexity O(n2)

int main()
{
    int numbers[6]= {42,77,35,12,101,5};
    int* n= BubbleSort(numbers,6);

    for(int i =0; i<6; i++){
        printf("%d, ", n[i]);
    }

    return 0;
}

int* BubbleSort(int mylist[],int size){
    int temp= 0;

    for(int i=0; i< size; i++){
        for(int c=0; c<size-1; c++){
            if(mylist[c]>mylist[c+1]){
                temp= mylist[c+1];
                mylist[c+1]= mylist[c];
                mylist[c]= temp;
            }
        }
    }
    return &mylist[0];
}



