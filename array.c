
#include<stdio.h>
int main(){

// array collection of similar datatypes

int a[]={1,2,3,4,5,6};
a[0]=7;

int size=sizeof(a)/sizeof(a[0]);
printf("%d",a[0]);
printf("\n%d",size);

for(int i=0;i<size;i++){
    printf("\n%d",a[i]);
}
}