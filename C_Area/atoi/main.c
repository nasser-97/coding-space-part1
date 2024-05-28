#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int my_atoi(string text);
int integar_validator(string text, int sign_flag);
int corresponding_integar(char element);

char numbers[]= {'0','1','2','3','4','5','6','7','8','9'};

int main()
{
    /**
        - get a string from the user
        - if there is negaive or positive sign flag will be raised
        - loop throgh the string
        - else if this is not a number return 0 with invalid input MSG to the user
        - else calcualte the number by multplying each index from the last to the begging it 10 to the power of (0 to length of string-1 )
        - return the result and print it to the user
     **/
     string text = get_string("please enter some text to convert to integers: \n");
     int result = my_atoi(text);

     if(result == 0)
        printf("Your input is not valid\n");

     else
        printf("you output is:  %d\n",result);


    return 0;
}

int my_atoi(string text){

    int sign_flag= 1;
    int sum =0;
    int count =0;

    if(text[0] == '-'){
        sign_flag= -1;
        text[0]= '0';
    }
    else if(text[0] == '+'){
        sign_flag= 1;
        text[0]= '0';
    }

    for(int i =strlen(text)-1 ; i>=0; i--){
        if(corresponding_integar(text[i]) == -1)
            return 0;

        else{
            sum+= corresponding_integar(text[i]) * pow(10.0, (double)count);
            count++;
            }

    }

    return sum * sign_flag;

}

int corresponding_integar(char element ){
    for(int i=0 ;numbers[i] != '\0'; i++){
        if(element == numbers[i])
            return i;
    }
    return -1;
}

//int integar_validator(string text,int sign_flag ){
//    int flag,i;
//
//     if(sign_flag == -1 || sign_flag == 1)
//        i= 1;
//     else
//        i= 0;
//     for(i ;numbers[i] != '\0'; i++){
//        printf("%d\n", i);
//        flag= 0;
//
//        for(int c= 0; c< strlen(text); c++){
//            if(text[c] == numbers[i])
//                flag= 1;
//        }
//      if(flag == 0)
//            return 0;
//    }
//    return 1;
//}



// note there is unsoved issue in integar_validator and corresponding_integar of how they will handle the sign in
// the first index

