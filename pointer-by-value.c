#include <stdio.h>
void main() {
    int a;
    float b;
    char c;
    printf("size of interger pointer is %d\n", sizeof(a));
    printf("size of float pointer is %d\n", sizeof(b));
    printf("size of charecter pointer is %d\n", sizeof(c));
    int d =10;
    a=&d;
    printf("address of d is %d\n",a);
    printf("value of d is %d\n",a);
}
