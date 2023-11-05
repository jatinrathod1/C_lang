#include<stdio.h>

void main(){
    
   int i,a[10],max,min;

    for (int i = 0; i < 10; i++)
    {
        printf("\n%d num is : ", i);
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];

    for(int i=0; i<10; i++){
        if (max < a[i])
        {
            max = a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("\nmax=%d\tmin=%d",max,min);
}