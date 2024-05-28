#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>



typedef struct tempData{
    string city_name;
    int temp;
} tempData;

tempData* bubble_sort(tempData data[], int length);
tempData* selection_sort(tempData data[], int length);
tempData* insertion_sort(tempData data[], int length);


int main()
{   tempData samples[5];
    samples[0].city_name = "cairo";
    samples[1].city_name = "alex";
    samples[2].city_name = "aswan";
    samples[3].city_name = "desouk";
    samples[4].city_name = "gharbia";
    samples[0].temp = 30;
    samples[1].temp = 85;
    samples[2].temp = 40;
    samples[3].temp = 21;
    samples[4].temp = 24;

    tempData* dataP = insertion_sort(samples, 5);

    for(int i=0; i<5; i++){
        printf("%s\n",dataP[i].city_name);
        printf("%d\n",dataP[i].temp);
    }

    return 0;
}


tempData* bubble_sort(tempData data[], int length){
    int swap= 1;
    tempData tmp;

    while(swap != 0){
        swap= 0;

        for(int i=0; i< length-1; i++){

            if(data[i].temp > data[i+1].temp){
                tmp= data[i+1];
                data[i+1] = data[i];
                data[i]= tmp;
                swap++;
            }
        }
    }

    return data;
}

tempData* selection_sort(tempData data[], int length){

    int theSmallestindex= 0;
    tempData tmp;

    for(int i=0; i<length-1; i++){
        theSmallestindex= i;

        for(int c=i+1; c<length; c++){
            if(data[theSmallestindex].temp > data[c].temp){
                theSmallestindex= c;
            }
        }

          tmp= data[i];
          data[i] = data[theSmallestindex];
          data[theSmallestindex]= tmp;
    }

        return data;
}

tempData* insertion_sort(tempData data[], int length){
    //-check if every two adjacent elements are sorted if not using a loop
        //- if they are not sorted swap again the loop again back and check if they are sorted or not and if they swap
    tempData tmp;

    for(int i=0; i< length-1; i++){
        if(data[i].temp > data[i+1].temp){
          tmp= data[i+1];
          data[i+1] = data[i];
          data[i]= tmp;

          for(int c=i; c>0; c--){
            if(data[c].temp < data[c-1].temp){
                tmp= data[c];
                data[c] = data[c-1];
                data[c-1]= tmp;
            }
          }
        }
    }
    return data;
}
