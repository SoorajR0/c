#include<stdio.h>
int main(){
    int z[11]={1,2,3,4,5,6,7,8,9,10,11};
    int y=0;
    int i;

    for(i=0;i<11;i++){
        y+=z[i];
    }
    printf("sum of the array:%d\n",y);
    return 0;
}