#include <stdio.h>
#include <stdlib.h>

typedef struct person
{
    int ID;
    char *first;
    char *last;
    struct person *next;

} Person;

void look_up_name(struct person *ptr, int ID)
{
    Person *current = ptr;
    while (current != NULL)
    {
        if (ID == current->ID)
        {
            printf("The match for this ID %02d: %7s, %s\n", ID,
                   current->first, current->last);
            return;
        }
        current = current->next;
    }
    printf("No such ID in database\n");
}

int main()
{
    Person *head;
    head = (Person *)malloc(sizeof(Person));
    head->ID = 1;
    head->first = "Dex";
    head->last = "Zhu";
    head->next = (Person *)malloc(sizeof(Person));
    head->next->ID = 2;
    head->next->first = "Hunter";
    head->next->last = "Tseng";
    head->next->next = NULL;
    look_up_name(head, 0);
    look_up_name(head, 1);
    look_up_name(head, 2);
    look_up_name(head, 3);
    return 0;
}