#include <stdio.h>
#include <stdlib.h>

int totalOfHours(int weekHours[], int noOfWeeks);
float averageWeekHours(int weekHours[], int noOfWeeks);

int main()
{
    int noOfWeeks = 0, option = 0;
    // get theree things from the user no.weeks, array of no.hours.PHW
    printf("please enter no.of.weeks: ");
    scanf("%d",&noOfWeeks);


    int weekHours[noOfWeeks];
    for(int i=0; i< noOfWeeks; i++){
        printf("number of hours in week %d is :",i+1);
        scanf("%d",&weekHours[i]);
    }
    // get from the user again which optin he would use
    printf("-If you want the average press 1\n -If you want the total press 2:\n");
    scanf("%d",&option);
    // print the return result
    if(option == 2){
        printf("%d",totalOfHours(weekHours,noOfWeeks));
    }
    else if(option == 1){
        printf("%f",averageWeekHours(weekHours,noOfWeeks));
    }

    return 0;
}

int totalOfHours(int weekHours[], int noOfWeeks){
    int sum = 0;

    for(int i=0 ;i< noOfWeeks; i++){
        sum += weekHours[i];
    }
    return sum;
}

float averageWeekHours(int weekHours[], int noOfWeeks){

    return totalOfHours(weekHours,noOfWeeks)/ (float) noOfWeeks;
}


