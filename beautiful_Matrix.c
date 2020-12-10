#include<stdio.h>

int main() {
    int x,y;
    int mat[5][5]={0};

    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            scanf("%d",&mat[i][j]);
            if(mat[i][j]==1) {
                x=i;
                y=j; 
            }
        }
    }
    int p = 2-x;
    int q = 2-y;

    if(p<0) {
        p = p*-1;
    }
    if(q<0) {
        q = q*-1;
    }
    printf("%d",p+q);
return 0;
}