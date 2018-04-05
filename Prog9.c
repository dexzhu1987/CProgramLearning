#include <stdio.h>

//option 1
struct Car1
{
    int price;
    char *brand;
};

//option 2
typedef struct
{
    int price;
    char *brand;
} Car2;

struct node
{
    int value;
    struct node *next;
}

int
main(int argc, char *argv[])
{
    struct Car1 car1; //option 1
    car1.price = 10000;
    car1.brand = "Toyota";

    Car2 car2; //option 2
    car2.price = 20000;
    car2.brand = "Honda";

    printf("Price %d, Brand %d\n", car1.price, car1.brand);
    printf("Price %d, Brand %d\n", car2.price, car2.brand);

    struct node one;
    struct node two;
    struct node three;
    one.value = 10;
    one.next = &two;
    two.value = 1;
    two.next = &three;
    three.value = 2;
    three.next = NULL;

    printf("Element: %d\n", (*one.next).next->value) //option 1
        //option2: one.next->next->value

        return 0;
}