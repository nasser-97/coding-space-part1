// Online C compiler to run C program online
#include <stdio.h>
int IsAlphabet(char c);
int main() {
    // Write C code here
    char mychar;
    printf("Please enter a char: ");
    scanf("%c",&mychar);
    if(IsAlphabet(mychar) == 1){
        printf("Alphabet ^-^");    
    }
    else{
        printf("Not an Alphabet -_-");
    }

    return 0;
}
int IsAlphabet(char c){
    if(c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z'){
        return 1;
    }
    return 0;
}
