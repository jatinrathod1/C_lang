#include<stdio.h>

void swap(int *x, int *y){
    int t=*x;
    *x=*y;
    *y=t;
}

int* bs(int *arr, int n){

    int i,j;
    for ( i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++){
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
            
        }
    }
    return arr;   
} 

void main(){
    int k,arr;
    //int n = sizeof(arr) / sizeof(arr[n]);
    int a[10]={3,45,22,67,43,78,21,46,32,13};
    printf("Sorted array: \n");
    bs(a,10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d",a[i]);
    }
    //swap( arr, n);
}