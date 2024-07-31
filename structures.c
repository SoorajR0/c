#include<stdio.h>

struct hello
{
    /* data */

    int a;
    float b;
    char s;

};

int main(){
struct hello obj;
obj.a=7;
obj.b=2.4;
obj.s='h';
printf("%d",obj.a);
printf("\n%f",obj.b);
printf("\n%c",obj.s);

}