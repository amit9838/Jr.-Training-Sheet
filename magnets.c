#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int magArr[n];
    int grpCount=1;

    for(int i=0;i<n;i++) {
        scanf("%d",&magArr[i]);
    }

    for(int i=1;i<n;i++) {
        int flag =0;
        if(magArr[i]!=magArr[i-1])
        {
            printf("\nCount incremented ---%d,%d",magArr[i-1],magArr[i]);
           grpCount++;
        }
        else{
            printf("\nCount not incremented ---%d,%d",magArr[i-1],magArr[i]);
            
        }
    }

    printf("\n%d",grpCount);
    return 0;
}