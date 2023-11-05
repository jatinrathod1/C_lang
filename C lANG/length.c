#include<stdio.h>

void main(){
    char str[100];
    char temp;
    printf("\nEnter String : ");
    // Sahil "\n"
    int i=0;
    while (1)
    {
        scanf("%c",&temp); //s
        if(temp=='\n'){
            break;
        }
        str[i]=temp; //sahil
        i++;
    }
    int len=i;     
    str[len]='\0';              
    printf("before %s",str);   
    while (len!=0)
    {
        str[len]='\b';     
        len--;
    }
    str[len]='\0';   
    printf("\nafter %s",str);
    /*
    gets(str); // J a t i n \0
            //    0 1 2 3 4 5
    
    int len=0;
    while(str[len]!='\0'){
        len++;
    } 
    printf("len : %d",len);
    */
}