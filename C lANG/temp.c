#include<stdio.h>
#include<string.h>

void main(){
    char str[10],s[20];
    printf("\nEnter string 1 : ");
    scanf("%s",&str);
    strcpy(s,str);
    printf("%s\n%s",str,s);
}