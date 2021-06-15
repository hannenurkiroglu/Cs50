#include <stdio.h>
#include <cs50.h>
#include <math.h>

float getValue(void);
int   coins(int cent);

int main(void){
    float f = getValue();
    int cents = round(f * 100);
    printf("%i\n",coins(cents));
}

float getValue(void){
    float change;
    do
    {
        change = get_float("Change owed: ");
    }
    while(change < 0);

    return change;
}

int coins(int cents){

    int quarters = cents / 25;
    int dimes = (cents % 25) / 10;
    int nickels = ((cents % 25) % 10) / 5;
    int pennies = ((cents % 25) % 10) % 5;

    return quarters+dimes+nickels+pennies;
}
