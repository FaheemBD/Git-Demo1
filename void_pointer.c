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

    struct point p = {94,5};
    print(p);

    return 0;
}
