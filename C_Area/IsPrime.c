/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int IsPrime(int number);

int main() {
    // Write C code here
    int n= 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  if(IsPrime(n)){
      printf("Prime");
  }
  else{
      printf("Not Prime");
  }
} 

int IsPrime(int number){
    int count = 2;
    if(number == 1){
      return 0;  
    }
    else if(number == 2){
            return 1;
    }
    while(count <= number/2){
        if(number%count == 0){
            return 0;
        }
        count ++;
    }
    return 1;
}
