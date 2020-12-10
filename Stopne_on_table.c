// Stones On Table
// https://codeforces.com/contest/266/problem/A
#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    char col[n];
    scanf("%s",col);
    int count =0;

    for(int i=0;i<n;i++) {
        if(col[i]==col[i+1]) {
            count++;
            // printf("count incremented!  ");
        }
    }
printf("%d",count);

return 0;
}