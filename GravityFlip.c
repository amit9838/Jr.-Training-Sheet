#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int temp;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j] < arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}

    return 0;
	
}

