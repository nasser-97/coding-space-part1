/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/** first dimension represents the block size(total number of 2D arrays).
second dimension represents the rows of 2D arrays.
third dimension represents the columns of 2D arrays*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int* GetFactors(int*,int);
int NumOfFactors(int);
int BTD_Converter(int); // Binary to Decimal Converter

int main()
{
    int number;
    printf("Please enter a number : ");
    scanf("%d",&number);
    printf("Decimal number after converting: %d",BTD_Converter(number));
    return 0;
}

int NumOfFactors(int n){ //1234 --> count of its factors is 4
    int count = 0;
      while(n != 0){
        count ++;
        n/= 10;
    }

    return count;
}

int BTD_Converter(int number){
    int size= 0;
    int sum= 0;
    int* n;
    int factors[size];
    size = NumOfFactors(number);
    n= GetFactors(factors,number);

    for(int i=0; i<size; i++){
        sum+= pow(2,i)*n[i];
    }

    return sum;
}

 int* GetFactors(int factors[],int number){ //1234 --> number factors is 1,2,3,4
     int size = NumOfFactors(number);
     int i= 0;

     while(i<size){
         factors[i] = number %10;
         number/=10;
         i++;
     }
      return &factors[0];
     // eception case number = 0
 }


