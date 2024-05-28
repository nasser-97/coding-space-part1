#include <stdio.h>
#include <stdlib.h>

int checkPassword(char* word);
int hasSymbol(char* word);
int hasUppercase(char* word);
int hasLowercase(char* word);
int hasNumber(char* word);

int main(int argc, char* argv[])
{
    //get a string from the user from the CMD
    //check if passwod is valid or not by applying 4 steps of validation on the given word
        //- uppercase, lowercase , numbers and symbols
    //print the result
    if(checkPassword(argv[1])){
        printf("Your password is valid!\n");
        return 0;
    }
    else {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol!\n");
        return 0;
    }

}

int checkPassword(char* word){

    if(hasSymbol(word) && hasUppercase(word) && hasNumber(word) && hasLowercase(word)){
        return 1;
    }
    return 0 ;
}

int hasSymbol(char* word){
    char symbols[]={'*','%','!','@','#','&',')','('} ;
    for(int i=0; word[i]!= '\0'; i++){
        for(int c=0; symbols[c]!= '\0'; c++){
            if(word[i] == symbols[c]){
                return 1;
            }
        }
    }
    return 0;
}

int hasUppercase(char* word){
    // As per ASCII table
    for(int i=0; word[i]!= '\0'; i++){
        for(int c=65; c<=90; c++){
            if(word[i] == (char) c){
                return 1;
            }
        }
    }
    return 0;
}

int hasLowercase(char* word){
    // As per ASCII table
    for(int i=0; word[i]!= '\0'; i++){
        for(int c=97; c<=122; c++){
            if(word[i] == (char) c){
                return 1;
            }
        }
    }
    return 0;
}

int hasNumber(char* word){
    char symbols[]={'0','1','2','3','4','5','6','7','8','9'} ;
    for(int i=0; word[i]!= '\0'; i++){
        for(int c=0; symbols[c]!= '\0'; c++){
            if(word[i] == symbols[c]){
                return 1;
            }
        }
    }
    return 0;
}
