#include <stdio.h>
#include <stdlib.h>

// This program has a miss which it does not work for the first character of the array
int repeatedTimes(char *word, char character){
    int counter=0 ;
    for(int i=0; i <10 ; i++){
        if(word[i] == character){
            counter++;
        }
    }
    return counter;
}

int main()
{
    char word[10],character;
    printf("Please enter a word:");
    scanf("%s",word);
    printf("\n Please enter a character:");
    scanf("%s",&character);
    printf("\nRepeated times : %d", repeatedTimes(word,character));
    return 0;
}

