#include<stdio.h>
struct demo{
    int data;
    struct demo *ptr;
};

int main()
{
    struct demo a,b;
    a.data = 55;
    a.ptr = NULL;

    b.data = 99;
    b.ptr = NULL;


    // printf("A : data : %d\n", a.data);
    // printf("b : data : %d\n", b.data);

    b.ptr = &a;
    a.ptr = &b;

    printf("A : data : %d\n",b.ptr->data);
    printf("b : data : %d\n",a.ptr->data);
    


}