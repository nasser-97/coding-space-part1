// Online C compiler to run C program online
#include <stdio.h>
int GCD(int n1,int n2,int gcd);
int main() {
    // Write C code here
    int n1,n2,gcd;
    printf("Please enter the first number: ");
    scanf("%d",&n1);
    printf("\nPlease enter the second number: ");
    scanf("%d",&n2);
    if(GCD(n1,n2,gcd) != 0){
        printf("GCD is : %d", GCD(n1,n2,gcd));
    }
    else{
        printf("No Common Divisor");
    }
    return 0;
}

int GCD(int n1,int n2,int gcd){
    gcd = 0;
    for(int i=1; i<=n1&&i<=n2; i++){
        if(n1%i==0 && n2%i==0){
          gcd = i;  
        }
    }
    return gcd;
}
