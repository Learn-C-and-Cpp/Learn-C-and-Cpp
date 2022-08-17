// creating a linked list
#include <stdio.h>
#include <stdlib.h>

// define struct
struct node
{
    int data;
    struct node *link;
};
typedef struct node Node_t;

// prototypes
void travers_counting_nodes(Node_t *head);
void print_data(Node_t* head);

int main()
{
    Node_t *head = NULL;
    Node_t *current = NULL;
    
    // 1st node
    head = (Node_t *)malloc(sizeof(Node_t)); // allocate memory
    head->data = 45;
    head->link = NULL;
    // 2nd node
    current = (Node_t *)malloc(sizeof(Node_t)); // allocate memory
    current->data = 98;
    current->link = NULL;
    head->link = current;

    // 2nd node
    current = (Node_t *)malloc(sizeof(Node_t)); // allocate memory
    current->data = 3;
    current->link = NULL;
    head->link->link = current;
    // printf("%d", head->link->link->data);
    //  counting of nodes
    travers_counting_nodes(head);
    print_data(head);

    return 0;
}
// counting list nodes
void travers_counting_nodes(Node_t *head)
{
    int count = 0;
    if (head == NULL)
    {
        printf("List is empty\n");
    }

    Node_t *ptr = NULL;// new pointer to travers the list
    ptr = head; // ptr takes the value of head

    while (ptr != NULL) // loop untill ptr is NULL
    {
        count++;
        ptr = ptr->link;
    }
    printf("count = %d\n", count);
}

// print data
void print_data(Node_t* head)
{
    Node_t *ptr = NULL;// new pointer to travers the list
    ptr = head; // ptr takes the value of head

    while (ptr != NULL) // loop untill ptr is NULL
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}
