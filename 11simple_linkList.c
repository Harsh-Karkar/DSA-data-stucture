#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node * head = NULL;

void insertEnd(int val )
{
    struct node * ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return;
}
void deletEnd()
{
    struct node *ptr = head;
    struct node *p;

    if(ptr->next == NULL)
    {
        head = NULL;
        free(ptr);
        return;
    }
    while(ptr->next != NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }

    p->next =NULL;
    free(ptr);
    return;
}
void display()
{
    struct node *ptr = head;

    if(head == NULL)
    {
        printf("list is empty.....");
    }
    else{
        while(ptr != NULL)
        {
            printf("%d ",ptr->data);
            ptr =ptr->next;
        }
    }
    printf("\n ");
}

int main()
{
 int choice;
    int value;

    while (1)
    {
        printf("1. Insert at the end\n");
        printf("2. Delete from the end\n");
        printf("3. Display the list\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a value to insert: ");
            scanf("%d", &value);
            insertEnd(value);
            break;
        case 2:
            deletEnd();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
}