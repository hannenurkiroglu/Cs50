#include <stdio.h>
#include <cs50.h>
#include <math.h>

float getValue(void);
int   coins(int cent);

int main(void){
    float f = getValue();
    int cents = round(f * 100);
    printf("%i\n", coins(cents));
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
    int count = 0;
    while(cents>=25){
        cents = cents - 25;
        count++;
    }
    while(cents>=10){
        cents = cents - 10;
        count++;
    }
    while(cents>=5){
        cents = cents - 5;
        count++;
    }
    while(cents>=1){
        cents = cents - 1;
        count++;
    }
    return count;
}
