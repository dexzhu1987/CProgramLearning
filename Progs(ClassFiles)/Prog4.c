#include <stdio.h>
/* #define search_text replace_text */
#define PI 3.1416

int main()
{
    printf("%f\n", PI);
    // get input: age, grade
    int age;
    char grade;
    scanf("%d %c\n", &age, &grade);
    // mac - ctrl + d: EOF
    // windows - ctrl + c(w): EOF

    printf("Your age is %d\n", age);
    printf("Your grade is %c\n", grade);
    int dec = 20, oct = 020 /* base 8*/, hex = 0x20, bin = 0b10101; /*base 16*/
    printf("dec=%d, oct=%d, hex=%d, bin=%d\n ", dec, oct, hex, bin);
    printf("dec=%d, oct=%o, hex=%x\n", dec, oct, hex);

    float pi = 3.141600000;
    printf("PI is %10.2f\n", pi);
    printf("PI is %le\n", pi);
    printf("PI is %lg\n", pi);

    const int sunday = 0; /* no longer available for lvalue of = */
    // lvalue = rvalue;

    return 0;
}