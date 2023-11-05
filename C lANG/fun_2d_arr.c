#include<stdio.h>

int fun3(int arr[2][2]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("value at %d %d is %d\n",i,j,arr[i][j]);   
        }
    }
    
}

void main(){
    int arr[][2]={{2,3},{4,5}};
    fun3(arr);
}