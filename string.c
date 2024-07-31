#include<stdio.h>

int main(){
    char s='w';
    char s1[20]="hello world";
    s1[0]='j';
    int size=sizeof(s1);
    printf("%d",size);
    printf("%c",s);
    printf("\n%s",s1);
    printf("\n%c",s1[0]);

    for(int i=0;i<20;i++){
        printf("\n%c",s1[i]);
    }
}