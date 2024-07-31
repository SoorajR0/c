
// sring methods
// strlen-to length of a string
// strcmp-to compare two string;
// strcpy=to copy a string
// stcat-contatentate a string


// #include<stdio.h>
// #include<string.h>

// int main(){
//     char s[20]="hello world";
//     char s1[20]="";
//     // strlen
//     int length=strlen(s);

//     // strcpy
// strcpy(s1,s);




//     printf("%s",s);
//     printf("\n%d",length);
//     printf("\n%s",s1);
// }

// concte,compare

# include<stdio.h>
#include<string.h>
int main(){
    char s1[30]="hello ";
    char s2[30]="nice to meet you";
    char s3[20]="hello ";
//     strcat(s1,s2);
//     printf("%s",s1);
// 
// compare
printf("%d",strcmp(s1,s2));
printf("\n%d",strcmp(s1,s3));


}