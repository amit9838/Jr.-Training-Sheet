// Black Square
// https://codeforces.com/contest/431/problem/A

#include<stdio.h>
int main() {
    int cal[4];
    int str[1000];
    int cal_sum=0;
    scanf("%s",str);
    for(int i=0;i<4;i++) {
        scanf("%d",&cal[i]);
    }
        for(int i=0;i<4;i++)
        {
            for(int j=0;str[j+1]!='\0';j++)
            {   
            printf("\nStr: %d, Cal: %d ",str[i],cal[j]);
                if(str[i] = j){
                    cal_sum+=cal[j];
                    printf("\nAdded %d cal to list.",cal[j]);
                }
                else {
                    break;
                }
                
            }
        }

        printf("\ntot cal: %d",cal_sum);
return 0;

}