#include <stdio.h>
#include <stdlib.h>

int Max(int arr[], int length);

int main()
{
    // get number of elements from the user
    // get elements values
    // suppose the first element is the max
    // loop till end of the array and compare max with all elements till
    // if there is another number larger than max , set max to this element value
    // return max

    int array[5];
    int length= 0;
//
//    printf("Number of elements:  ");
//    scanf("%d",length);
//
//    array= malloc( length * sizeof(int));

    for(int i= 0; i<5; i++){
        printf("Element %d: ",i);
        scanf("%d",&array[i]);
    }

    printf("\n The max value is: %d \n",Max(array, 5));

    return 0;
}

int Max(int arr[], int length){
    int max= arr[0];

    for(int i= 1; i<length; i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }

    return max;
}
