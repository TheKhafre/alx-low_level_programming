#include <stdio.h>

int add(int a, int b);
int main(void){
    int c = 0;
    c = add(5,6);
    printf("%d\n", c);
}

int add(int a, int b){
    int i = a + b;
    return i;
}