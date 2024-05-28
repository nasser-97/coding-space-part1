#include <stdio.h>
#include <stdlib.h>
// this progem calcualtes how much money you  will pay in case you get to a restaurant with a friend

int main()
{
    float bill= 0.0, saleTaxPercent= 0.0, myOwe= 0.0, tipPercent = 0.0,salesTaxAndBill= 0.0;

    // get the bill, saleTaxPercent and the tip percent from the user after printing some msg to the user
    printf("print The bill amount: ");
    scanf("%f",&bill);
    printf("print The sale Tax Percent amount: ");
    scanf("%f",&saleTaxPercent);
    printf("print The tip Percent amount: ");
    scanf("%f",&tipPercent);

    // calcuate how much money should one pay by appying
        // the equation of
        // - saleTax  = (saleTaxPercent/100) * bill )
        // - tip = (tipPercent/100) * saleTax)
        // - eachOneAmount = (tip + bill + saleTax) /2)
    saleTaxPercent= (saleTaxPercent/100) * bill;
    salesTaxAndBill= saleTaxPercent + bill  ;
    tipPercent = (tipPercent/100) * salesTaxAndBill;
    myOwe = ( (tipPercent + salesTaxAndBill) /2);

    // print the eachOneAmount result to the user
    printf("Each one will pay:  %f",myOwe);

}
