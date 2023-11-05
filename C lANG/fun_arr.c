#include<stdio.h>

int fun1(int a[]){
    for (int i = 0; i < 3; i++)
    {
        printf("\n%d",a[i]);
    }    
}

void main(){
    int arr[]={1,2,3};
    fun1(arr);

}