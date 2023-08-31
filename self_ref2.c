#include<stdio.h>
struct node{
    int data;
    struct node *ptr;
};
struct node{
    int data;
    struct node *ptr;
};

int main()
{
    struct node add,brack;
    add.data = 63;
    add.ptr = 20;

    brack.data = 55;
    brack.ptr = NULL;


    // printf("A : data : %d\n", a.data);
    // printf("b : data : %d\n", b.data);

    brack.ptr = &add;
    add.ptr = &brack;

    printf("A : data : %d\n",brack.ptr->data);
    printf("b : data : %d\n",add.ptr->data);
    


}