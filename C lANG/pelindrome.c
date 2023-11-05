#include<stdio.h>

void main(){

    int num,rem=0,dig=0,j,temp;
    printf("Enter the num: ");
    scanf("%d",&num);
  
    temp=num;
  while (num>0)
  {
    num = num / 10;
        dig++;
  }
    num=temp;
    printf("%d \n%d",dig,temp);
    int n=0;
    while ( temp > 0 )
    {
        rem = temp % 10;   // 121   1  2  1
        n=n*10+rem;        // reverse logic
        temp = temp / 10;  // 121  12  1  0
    }
    
   if(n==num)
        printf("\n%d is plindrome ",n);
    else{
        printf("\n%d not is plindrome ",num);
    }
}

