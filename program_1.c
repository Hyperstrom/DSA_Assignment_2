//Write a program to insert the new element in array at location k 

#include<stdio.h>
int main()
{
   int arr[20],i,j,n,pos,value;
   printf("Enter the number of element of the array\t");
   scanf("%d",&n);
   for ( i = 0; i < n; i++)
   {
       printf("Element[%d] : ",i+1);
       scanf("%d",&arr[i]);
   }
   printf("Enter the position you want to insert : ");
   scanf("%d",& pos);
    printf("Enter the value of that position : ");
    scanf("%d",& value);
    for ( j = n; j >=pos-1; j--)
    {
        arr[j+1] = arr[j];
    }
    arr[pos -1] = value;
    printf("Resulting array....\n");
    for ( j = 0; j <= n; j++)
    {
        printf("%d\t",arr[j]);
    }
    return 0;
}