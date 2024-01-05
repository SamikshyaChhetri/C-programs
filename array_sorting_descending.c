#include<stdio.h>
int main()
{
    int n,i,j,nums[10],temp;
    printf("Enter how many num you want to sort");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&nums[10]);
    for(i=0;i<n-1;i++)
    {
    for(j=i+1;j<n;j++)
    {
        if(nums[i]<nums[j])
        {
            temp=nums[j];
            nums[j]=nums[i];
            nums[i]=temp;
        }
      }
    }
    
        printf("Numbers in descending order are:");
        for(i=0;i<n;i++)
    
    
}