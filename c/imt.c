#include <stdio.h>

/*here we'll have a BMI calculator*/
float BMI ( float hght, float wght)
    {
        return (wght / (hght*hght));
    }

int main () 
{
    float height, weight; /*those we'll catch from outer space*/

    printf("to enter data correctly, please use a '.' and not comma (with comma it wil be read as two separate numbers)\n" ); //just a warning
    printf("please enter person's height in meters:\t" );
    scanf("%f", &height);
    printf("please enter person's weight in kilograms:\t" );
    scanf("%f", &weight);

    if (18.5<BMI(height, weight) && BMI(height, weight)<=25) { //18.5 to 25 is considered normal 
    printf("this person's BMI is in the normal range, have a nice day :)" );
    } else if (15<BMI(height, weight) && BMI(height, weight)<=18.5) { //15 to 18.5 underweight
    printf("this person's BMI is in the underweight range, please consider to talk to a doctor about it" );
    } else if (5<BMI(height, weight) && BMI(height, weight)<=15) { //5 to 15 severe underweight
    printf("this person's BMI is in the severe underweight range, please talk to a doctor about it ASAP" );
    } else if (25<BMI(height, weight) && BMI(height, weight)<=30) { //25 to 30 overweight
    printf("this person's BMI is in the overweight range, please consider to talk to a doctor about it" );
    } else if (30<BMI(height, weight) && BMI(height, weight)<=40) { //30 to 40 obese
    printf("this person's BMI is in the obese range, please consider to talk to a doctor about it" );
    } else if (40<BMI(height, weight) && BMI(height, weight)<=60) { //40 to 60 dangerously obese, 
    printf("this person's BMI is in the dangerously obese range, please talk to a doctor about it ASAP" );
    } else { //smth wrong with numbers 
        printf("please check if you entered the numbers correctly, this BMI is nearly impossible for a living humanoid person" );
    }
}