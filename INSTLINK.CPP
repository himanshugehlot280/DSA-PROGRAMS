#include <stdio.h>
#include <malloc.h>
struct node
{
    int info;
    struct node *link;
};
struct node *first;
void main()
{

    void insert_beginning();
    insert_beginning();
    getch();
}
void insert_beginning()
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("overflow\n");
        return;
    }
    printf("\nInput New Node Information: ");
    scanf("%d", &ptr->info);
    ptr->link = first;
    first = ptr;
}
