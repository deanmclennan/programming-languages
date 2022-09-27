#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void red() {
    printf("\033[1;31m");
}

void green() {
    printf("\033[1;32m");
}

void reset() {
    printf("\033[0m");
}

int main(void)
{
    float fahr, celsius;
    float lower, upper, step;

   

    fahr = LOWER;
    /* Change terminal output to Red */
    red();

    printf("\tFahrenheit\tCelsius\n");
    printf("\t----------\t-------\n");

    /* Change terminal output to default */
    reset();

    while (fahr <= UPPER) {
        celsius = 5 * (fahr-32) / 9;

        if(celsius >= 35) {
            /* Change terminal output to Red */
            red();
        }else {
            /* Change terminal output to Green */
            green();
        };
       
        
       
        printf("\t%3.0f\t\t%6.1f\n", fahr, celsius);
        reset();
        fahr = fahr + STEP;
    }

}