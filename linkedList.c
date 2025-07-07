#include <stdio.h>
#include <stdlib.h>

struct node
{
    int i;
    struct node *next;
};

struct node *head, *ptr, *ptr1;

void insert_beg()
{
    if (head == NULL)
    {
        ptr = (struct node *)malloc(sizeof(struct node));
        printf("\n Enter the element1 ");
        scanf("%d", &ptr->i);
        head = ptr;
        ptr->next = NULL;
    }
    else
    {
        ptr1 = (struct node *)malloc(sizeof(struct node));
        printf("\n Enter the element2 ");
        scanf("%d", &ptr1->i);
        ptr1->next = head;
        head = ptr1;
    }
}

void insert_end()
{
if(head==NULL){
    ptr = (struct node *)malloc(sizeof(struct node));
        printf("\n Enter the element1 ");
        scanf("%d", &ptr->i);
        head = ptr;
        ptr->next = NULL;
}
else{
    ptr1 = (struct node *)malloc(sizeof(struct node));
        printf("\n Enter the element2 ");
        scanf("%d", &ptr1->i);
        ptr = head;
        while(ptr->next == NULL){
            ptr = ptr->next;

        }
        ptr->next = ptr1;
        ptr1->next = NULL;
}
}

int main()
{
    int c = 0;
    head = NULL;
    while (c < 5)
    {
        if (head == NULL)
        {
            ptr = (struct node *)malloc(sizeof(struct node));
            printf("\n Enter the element3 ");
            scanf("%d", &ptr->i);
            head = ptr;
            ptr->next = NULL;
        }
        else
        {
            ptr1 = (struct node *)malloc(sizeof(struct node));
            printf("\n Enter the element4 ");
            scanf("%d", &ptr1->i);
            ptr1->next = NULL;
            ptr->next = ptr1;
            ptr = ptr1;
        }
        c = c+1;
    }
    insert_beg();
    insert_end();

    ptr = head;
    printf(" \n Linked List: \n ");
    while (ptr != NULL)
    {
        printf("%d  ", ptr->i);
        ptr = ptr->next;
    }
    
}
