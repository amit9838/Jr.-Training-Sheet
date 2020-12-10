// Vanya And Friends
// https://codeforces.com/contest/677/problem/A


#include<stdio.h>

int main() {
    int num, fenceheight;
    // printf("Enter the number of persons: ");
    scanf("%d",&num);
    // printf("\nEnter height of fence: ");
    scanf("%d",&fenceheight);
    int width = 0;

    int arr[num];
    // printf("\nEnter the heights of friends: ");

    for(int i=0;i<num;i++) {
        scanf("%d",&arr[i]);
        if(arr[i]>fenceheight) {
            width +=2;
        }
        else {
            width++;
        }
    }

    printf("%d",width);


return 0;

}

