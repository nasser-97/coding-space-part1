#include <stdio.h>
#include <stdlib.h>

int main()
{
 int quantity=0;
 float tax= 0.2, PPU=0.0, totalPrice=0.0, price=0.0; //PPU stands for Price Per Unit;
 printf("Quntity : ");
 scanf("%d", &quantity);
 printf("Price Per Unit:");
 scanf("%f",&PPU);
 price = quantity*PPU;
 tax *= price;
 totalPrice = price + tax;
 printf("Invoice \n ======= \n");
 printf("Quntity :          %d \n", quantity);
 printf("Price Per Unit :         %f \n", PPU);
 printf("Total Price :          %f \n", totalPrice);
 printf("Tax :          %f \n", tax);

    return 0;
}
