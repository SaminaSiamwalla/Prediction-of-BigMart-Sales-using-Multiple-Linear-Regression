#include <stdio.h>
int main() {
    char choice[2]={'A','D'};
    char ch;
    int op;
    int arr[5]={57,544,79,1,66};
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("Enter the choice for ascending or decending (A/D):");
    scanf("%c",&ch);
    if(ch==choice[0])
    {
        op = 1; //ascending 
    }
    else
    {
        op = -1;//descending
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(arr[j]*op > arr[j+1]*op)
            {
                temp = arr[j];  
                arr[j] = arr[j + 1];  
                arr[j + 1] = temp;  
            }
        }
    }
    printf("\nAfter sorting:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}