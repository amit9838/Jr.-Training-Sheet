// Bear and Big Brother
// https://codeforces.com/contest/791/problem/A

#include<stdio.h>

int main() {
    int S_wt, B_wt;

    scanf("%d",&S_wt);
    scanf("%d",&B_wt);

    int count = 0;

    while(S_wt<=B_wt) {

        S_wt *= 3;
        B_wt *=2;
        count++;
    }

    printf("%d",count);
return 0 ;
}

