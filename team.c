// Team
// https://codeforces.com/contest/231/problem/A

#include<stdio.h>
int main() 
{
    int NQue=0;
    scanf("%d",&NQue);
    int arr[3];
    int selQue =0 ;
    int count;

    while(NQue!=0) {
        for (int i = 0; i < 3; i++)
        {
            scanf("%d",&arr[i]);
        }
        count =0;
            for (int i = 0; i < 3; i++)
                {   
                    if (arr[i]==1)
                        {
                            count++;
                            
                        }
                }

        if (count>=2)
        {
            selQue++;
        }
        
        NQue--;
    }

printf("%d",selQue);
return 0;


}