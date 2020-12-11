// Police Recruits
//https://codeforces.com/contest/427/problem/A

#include<stdio.h>

int main() {
    int events;
    int heired=0, untreated=0;
    scanf("%d",&events);
    int arr[events];

    for(int i=0;i<events;i++) {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<events;i++) {
        if(arr[i]>0) {
            heired +=arr[i];
            // printf("\nHeired incresed by 1 to: %d",heired);
 
        }
            if(arr[i]<0 && heired >0) {
                heired--;
                // printf("\nHeired Decresed by 1 to: %d",heired);
            }
            else if(arr[i]<0 && heired<=0) {
                untreated++;
                // printf("\nUnsolved case increased by 1 to: %d",untreated);
            }
    }

printf("\n%d",untreated);

return 0;
}