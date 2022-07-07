// pointers and structures
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// define struct
struct student
{
    char name[50];
    int age;
    int year;
    float gpa;
};

// linked list
struct node
{
    int data;
    struct node *next;
};

int main(void)
{
    struct student s; // variable of type struct student
    struct student *sPtr;
    // read data into struct
    strcpy(s.name, "Freya");
    s.age = 20;
    s.year = 2022;
    s.gpa = 4.0;

    // allocate memory for *sPtr
    sPtr = malloc(sizeof(struct student));
    if (!sPtr)
    {
        puts("The memory not found");
    }
    sPtr->age = 19;
    sPtr->year = 2021;
    sPtr->gpa = 3.2;
    strcpy(sPtr->name, "Lars");

    // linked list
    struct node *head, *temp;
    head = NULL; // an empty linked list

    head = malloc(sizeof(struct node)); // create node
    if (head != NULL)
    {
        /* code */
    }
    head->data = 10;
    head->next = NULL;
    
    // add five nodes to the head of the list
    for (int i = 0; i < 5; i++)
    {
        temp = malloc(sizeof(struct node));
        if (temp == NULL)
        {
            /* code */
        }
        temp->data = i;
        temp->next = head;
        head = temp;
    }

    return 0;
}