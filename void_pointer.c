#include<stdio.h>
#include<stdlib.h>

struct point
{
    int x;
    int y;
};

void print(struct point x){
    printf("%d %d",x.x,x.y);
}

int main()
{
    /*

    //void pointer
    void *p;
    printf("%d %d",(int) p,*(int *)p);

    */

    /*
    //null pointer
    int *a;
    *a = NULL;
    printf("%d",*a);
    */

    /*
    //dangling pointer
    int x = 10;
    int *a = (int *)malloc(sizeof(int));

    a = &x;
    printf("%d %d\n",a,*a);

    free(a);
    *a = NULL;


    printf("%d %d\n",a,*a);
    */

    //int *p = (int *)malloc(sizeof(int));
    /* malloc , calloc realloc and free in use........
    int *p = (int *)calloc(3,sizeof(int));
    int *d = (int *)realloc(p,12*sizeof(int));

    *d = 20;
    *(d+1) = 30;
    *(d+2) = 40;
    *(d+3) = 90;
    *(d+4) = 60;



    printf("%d %d %d %d %d\n",*d,*(d+1),*(d+2),*(d+3),*(d+4));
    printf("%d",sizeof(d));

    free(p);
    printf("%d %d %d %d %d\n",*d,*(d+1),*(d+2),*(d+3),*(d+4));
    printf("%d",sizeof(d));
    */

    //passing structure members as arguments

    struct point p = {94,5};
    print(p);









    return 0;
}
