// Anton And Danik
// https://codeforces.com/contest/734/problem/A

#include<stdio.h>

int main() {
    int countA=0,countD=0;
    int NOG;
    scanf("%d",&NOG); 
    char arr[NOG];
    scanf("%s",arr);

    for (int i = 0; i < NOG; i++)
    {
        if(arr[i]=='A'){
            countA++;
        }
        else{
            countD++;
        }
    }
    if(countA>countD){

        printf("Anton");
    }
    else if(countD>countA) {

        printf("Danik");
    }
    else{
        printf("Friendship");
    }
    
getchar();
return 0;
}
