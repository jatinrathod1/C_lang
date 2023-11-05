#include<stdio.h>



int main(){
    int choice;
    
    while (1)
    {
        printf("\n0 for exit \n1 for insert \n2 for update \n3 for delete ");
        scanf("%d",&choice);
    
    switch (choice)
    {
    case 0:
        return 0;

    case 1:
        insert();
        break;
    
    case 2:
        update();
        break;

    case 3:
        display();
        break;

    default:
        printf("\nInvalid ");
        break;
    }

   
}
}