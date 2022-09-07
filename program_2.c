//Write a program to delete an element from a given array 
//[Take input as 1,20,5,78,30]

#include<stdio.h>
int main()
{
 int i,j,n,pos,value,arr[50];
  printf("Enter the number of element of the array\t");
   scanf("%d",&n);
   for ( i = 0; i < n; i++)
   {
       printf("Element[%d] : ",i+1);
       scanf("%d",&arr[i]);
   }
   printf("Enter the position you want to delete : ");
   scanf("%d",& pos);
  if(pos>=n+1)
  {
      printf("Deletation is not posible.....");
  }
  else
  {
      for(i= pos-1; i<n-1;i++)
      {
          arr[i]=arr[i+1];
      }
      printf("The result array ....\n");
      for(i=0;i<n-1;i++)
      {
          printf("%d\t",
          arr[i]);
      }
  }
  return 0;
}
