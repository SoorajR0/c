#include<stdio.h>
int main(){
    int a[100],n,b=0;
    printf("enter the num of element(1-100):");
    scanf("%d",&n);
    printf("enter %d integers:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b+=a[i];
    }
    printf("sum of all element:%d\n"b);
    return 0;
}