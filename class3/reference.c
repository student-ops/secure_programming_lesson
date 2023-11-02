#include <stdio.h>

void foo(int *x){
    *x = *x + 1;
    printf("%d\n",*x);
    return;
}
int main(){
    int a;
    a = 0;
    printf("%d\n",a);
    foo(&a);
    printf("%d\n",a);
    return 0;
}