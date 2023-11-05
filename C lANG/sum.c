#include<stdio.h>
#include<math.h>

void main(){

    int num,rem,t,dig=0;
    printf("sa =");
    scanf("%d",&num);

    t=num;

    rem = num % 10;
    printf("%d",rem);

    while (t > 0)
    {     
        t =t / 10;   
        dig++;
    }
    

    t = t / (10);       // 123 
    printf("\n%d",t);

}