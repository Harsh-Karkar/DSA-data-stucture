#include <stdio.h>
#define n 5

int a[n];
int r = -1, f = -1, i;

int ftolinsert(int val)
{
    if (r >= n - 1)
    {
        printf("Queue is full.\n");
    }
    else
    {
        if (r < 0)
        {
            f = 0;
        }
        r++;
        a[r] = val;
    }
}

int display()
{
    if (r < 0)
    {
        printf("Queue is empty.\n");
    }
    else




    
    {
        for (i = f; i <= r; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}

int firstdel()
{
    if (r < 0)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        if(r == f)
        {
            f = r = -1;
        }
        else
        {
            f++;
        }
    }
}

int main()
{
   // ftolinsert(100);
   // ftolinsert(200);
   // ftolinsert(300);
    // ftolinsert(400);
    // ftolinsert(500);
    // ftolinsert(600);
   // display();
   // firstdel();
   // firstdel();
   // firstdel();
   // display();

    int choice, val;

    do
    {
        printf("Queue Operations:\n");
        printf("1. Insert\n");
        printf("2. Display\n");
        printf("3. Delete\n");
        printf("4. exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to insert: ");
            scanf("%d", &val);
            ftolinsert(val);
            break;
        case 2:
            display();
            break;
        case 3:
            firstdel();
            break;
        case 4:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}




