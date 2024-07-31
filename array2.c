#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    a[0]=8;
    int size=sizeof(a)/sizeof(a[0]);
    printf("%d",a[0]);
    printf("\n%d",size);
    for(int i=0;i<size;i++){
        printf("\n%d",a[i]);
    }
}