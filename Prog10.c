#include <stdio.h>    //C standard lib
#include "multiply.h" //  your haeader;
#define SQUARE(*) multiply(*, *);
#define LEVEL 1
#define RUNMARCRO

int main()
{
    printf("%d\n", SQUARE(10));
    return 0;

    printf("%s\n", __FILE__); //print file name;
    printf("%s\n", __TIME__); //print current time;
    printf("%d\n", __LINE__); //print line number;

#if !definde(RUNMACRO) //if RUNMARCRO is not defined;
    SQUARE(5);
#endif

#ifndef RUNMACRO //if RUNMARCRO is not defined, the same as above
    SQUARE(6);
#endif

#if LEVEL > 1 //if level is defined that greater than 1; then codes below
    multiply(7, 7);
#endif
}

//compile option 1:
// gcc -c Prog10.c    ---> creat Prog10.o
// gcc -c multiply.c  ---> creat multiply.o
// gcc Prog10.o multiply.o -o Prog10

//compile option 2;
// gcc Prog10.c multiply.c -o Prog10