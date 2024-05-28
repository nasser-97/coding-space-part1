#include <stdio.h>

char* replace(char *word);

int main(int argc, char* argv[]){

   //get argumts from the user
    char* message;

    // check if arguments number is 1 or more than 2
    // print error msg
    if(argc == 1 || argc > 2){
        printf("err: you have made an err , we just need one word after the program name\n");
        return 1;
    }

    // else convert the word
    // print the converted word with '\n'
    else{
    message = replace(argv[1]);
    printf("%s\n",message);
    return 0;
    }
}

char* replace(char *word){
    int i = 0;

    while(word[i] != '\0'){
        switch(word[i]){
            case 'a':
            word[i] = '6';
            break;
            case 'e':
            word[i] = '3';
            break;
            case 'i':
            word[i] = '1';
            break;
            case 'o':
            word[i] = '0';
            break;
        }
        i++;
    }
    return word;
}
