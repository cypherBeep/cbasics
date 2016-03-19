/*
 *  Print Fahrenheit-Celsius Table in Reverse
 */

#include <stdio.h>
#include <stdlib.h>

#define LOWER   0  // lower limit of table
#define UPPER 300  // upper limit
#define STEP   20  // step size

int main(void) {
    int fahr;
    printf("Fahrenheit\tCelsius\n");
    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
        printf("%3d\t\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
    exit(EXIT_SUCCESS);
}