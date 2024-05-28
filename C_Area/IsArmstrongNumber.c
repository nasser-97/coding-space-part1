/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

 int IsArmstrongNumber(int num);

int main()
{   int n;
    printf("Please enter a number: ");
    scanf("%d",&n);
    if(IsArmstrongNumber(n)){
        printf("Armstrong number");
    }
    else{
        printf("Not armstrong number");
    }
    return 0;
}

 int IsArmstrongNumber(int num){
     int trace = num;
     int count = 0;
     int i = 0;
     int sum =0;
     // get no-of-elements in the original num
     while(trace != 0){
        count ++;
        trace /= 10;
    }
    trace = num;
    
    int elements[count];
    // fill factors in the array
    while(num != 0){
        elements[i]= num%10;
        num /= 10;
        i++;
    }
    
    i=0;
    //get summation of the cupe of every element
    while(i < count){
        sum += pow(elements[i],3);
        //printf(" %d",elements[i]);
        //printf(", %d",sum);
        i++;
    }
    
    //check is number is Armstrong Number or not
    if(sum == trace){
        return 1;
    }
    
    return 0;
 }
 
