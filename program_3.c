//write a program to implement linear searcg:
//[Take a input 76,84,,92,65,36 and element to be searched as 65]
#include<stdio.h>
int main()
{
    int i,n,value,arr[50];
    printf("Enter the no. element of the array : ");
    scanf("%d",&n);
    for( i=0;i<n;i++)
    {
        printf("Element[%d] : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to found : ");
    scanf("%d",& value);
    for(i=0;i<n;i++)
    {
        if(arr[i] == value)
        {
            printf("Element found at index : %d ",i+1);
        break;
        }
    }
    if( i == n)
    {
        printf("Element is not found");
    }
    return 0;
}