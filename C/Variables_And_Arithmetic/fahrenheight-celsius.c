#include <stdio.h>

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
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    /* Change terminal output to Red */
    red();

    printf("\tFahrenheit\tCelsius\n");
    printf("\t----------\t-------\n");

    /* Change terminal output to default */
    reset();

    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        green();
        
       
        printf("\t%d\t\t%d\n", fahr, celsius);
        reset();
        fahr = fahr + step;
    }

}