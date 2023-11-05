#include<stdio.h>

int fun2(int *ptr){
    for (int i = 0; i < 3; i++)
    {
        printf("\n%d",*(ptr+i));
    }
    
}

void main(){
    int arr[]={3,4,5};
    fun2(arr);

}