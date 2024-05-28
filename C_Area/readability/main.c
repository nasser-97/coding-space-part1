// this code will only work in the termainl due compiling and linking matter
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
float sentences_average(string text);
float letters_average(string text);
float Coleman_Liau_Index(string text);

int main(void){
    //get some string fro the user
    //count sentences, words, letters
    // calcualte L which is the average number of letters per 100 words in the text,
    // and S is the average number of sentences per 100 words in the text.
    // calcualte Coleman-Liau index by applying the formula of :
    // index = 0.0588 * L - 0.296 * S - 15.8
    // return the result and round it to the nearest int
    // display some msg to the user

    string text = get_string("please enter some text to review: \n");

    if(Coleman_Liau_Index(text) < 1){
        printf("Before Grade 1\n");
    }
    else if(Coleman_Liau_Index(text) > 16){
        printf("Grade 16+\n");
    }
    else{
        printf("Grade %d\n",(int)Coleman_Liau_Index(text));
    }

    return 0;
}

int count_letters(string text){
     int count= 0;
    for(int i=0 ;i<strlen(text) ;i++){
        if(!isalpha(text[i])){
            continue;
        }
        count++;
    }
      return count;
}

int count_words(string text){
      int count= 0, flag= 0;
    for(int i=0 ;i<strlen(text) ;i++){
        if(text[i] != ' '){
            continue;
        }
        if(i+1 == strlen(text)){
            flag = 1;
        }
        count++;
    }

    if(flag == 1){
        return count;
    }

      return count+1;
}

int count_sentences(string text){
    char symbols[]= {'.','!','?'};
    int count= 0;

    for(int i=0 ;i<strlen(text) ;i++){
        for(int c=0 ;c<strlen(symbols) ;c++){
            if(text[i] != symbols[c]){
                continue;
            }

            count++;
            break;
        }
    }

    return count;
}

float letters_average(string text){

 float L= (float)count_letters(text)/count_words(text)*100;

 return L;
}

float sentences_average(string text){

 float S= (float)count_sentences(text)/count_words(text)*100;

 return S;
}

float Coleman_Liau_Index(string text){
// index = 0.0588 * L - 0.296 * S - 15.8
    float L= letters_average(text);
    float S= sentences_average(text);
    float index =0.0,fractional_part= 0.0;

    index = 0.0588 * L - 0.296 * S - 15.8;
    fractional_part =index - ((int)index) ;

    if(fractional_part < 5){
        return (int)index;
    }

    return (int)index+1;
}

/** some important notes
 * to be able to use get_string function from the cs50.h library
 * -link the library's binary code to your program using -l[library name]. E.g., to link the cs50 library, you should run:
    'clang prog.c -lcs50 -o prog'
   - make on the CS50 Appliance automatically links the cs50 library for you.
    So you could just run:
    ' make prog '
 **/
