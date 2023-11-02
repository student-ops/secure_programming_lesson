#include <stdio.h>

int *foo(int x){
    int a = x;
    int *p = %a;
    return p;
}

int main(){
    int *p,*r;

    p = foo(10);

    printf("%d\n",*p);
    r = foo(20);
    printf("%d\n",*r);

    return 0;
}

// p 8885 