#include<stdio.h>

void fun(){
    int n,s=0,i;
    printf("enter the natural num: ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        s=s+i;
    }
      printf("sum is : %d",s);
}

int main(){
    
    fun(15);
    return 0;
    
}
