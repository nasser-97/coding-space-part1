#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i=0; i< height; i++){
        for(int c=0; c< width; c++){
           if(image[i][c].rgbtBlue != 0x00 && image[i][c].rgbtGreen != 0x00 && image[i][c].rgbtRed != 0x00){

            image[i][c].rgbtBlue= 0xff;
           }
        }
    }

    // Change all black pixels to a color of your choosing
}
//this code will work only in VS code via CS50 instructions
// "https://cs50.harvard.edu/x/2023/labs/4/smiley/"
