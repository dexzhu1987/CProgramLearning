#include <stdio.h>
#define PI 3.1416 //preproccess replace all PI in the code to 3.1416, sth similar to declear as const

int main()
{
    printf("%f\n", PI);
    //get input: age , grade
    int age;
    char grade;
    scanf("%d %c\n", &age, &grade); //ctrl c for Windows to end input, ctrl d for Mac

    printf("Your age is %d\n", age);
    printf("Your garde is %c\n", grade);

    int dec = 20, oct = 020, /*base 8, begins with 0*/ hex = 0x20, /*base 16, begins with 0x or 0X*/ bin = 0b10101; /*binary base 2, begins with 0b*/
    printf("dec=%d, oct=%d, hex=%d bin=%d\n", dec, oct, hex, bin);
    printf("dec=%d, oct=%o, hex=%x\n", dec, oct, hex);

    float pi = 3.1416000000000;
    printf("Pi is %5.2f\n", pi); //%5.2f  5=the total length of the this output
                                 //        .2=how many digit you want after the .
                                 //        f= the format
    printf("Pi is %le\n", pi);
    printf("Pi is %lg\n", pi); // get rid of the unessary 0

    const int sunday = 0; // 'sunday' no longer availalable for left value of =

    return 0;
}