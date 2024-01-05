#include<stdio.h>
int main()
{
    int nums[10],i,j,n,temp;
    printf("How many numbers you want to sort\n");
    scanf("%d",&n);
    printf("Numbers are:");
    for(i=0;i<n;i++)
    scanf("%d",&nums[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(nums[i]>nums[j]) //for descending nums[i]<nums[j]
            {
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }
    
    printf("The numbers in ascending order are:");
    for(i=0;i<n;i++)
    printf("\t%d",nums[i]);
    
}