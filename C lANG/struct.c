#include<stdio.h>
#include<string.h>

struct per{
    char name[10];
    int date;
    int salary; 
}; 
 
void main(){
     struct per s1;
     s1.name;
     s1.date =21;
     s1.salary= 150;
    strcpy(s1.name , "jas");
     
    printf("date is : %d\n",s1.date);
    printf("salary is : %d\n",s1.salary);
    printf("name is : %s",s1.name);

    struct per s2;
     s2.name;
     s2.date =21;
     s2.salary= 150;
    strcpy(s2.name , "jas");
     
    printf("date is : %d\n",s2.date);
    printf("salary is : %d\n",s2.salary);
    printf("name is : %s",s2.name);
}
 