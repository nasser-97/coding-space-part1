/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int IsPalindrome(int original);

int main() {
    // Write C code here
    int number;
    printf("Please enter a number to check :");
    scanf("%d",&number);
    if(IsPalindrome(number)){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}

int IsPalindrome(int original){
    int reminder= 0;
    int reversed= 0;
    int count=0;
    int temp = original;
    int trace = original;
    
    while(trace != 0){
        count ++;
        trace /= 10;
    }
    trace = 0;
    
    while(count > 0){
        reminder= temp % 10; 
        temp /= 10; 
        reversed += (reminder*pow(10,count-1)); 
        //printf("\n %d",reversed);
        count--;
    }
    if(original == reversed){
        return 1;
    }
    return 0;
} 

