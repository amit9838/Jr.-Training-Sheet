//Petya and String
// http://codeforces.com/contest/112/problem/A

#include<stdio.h>

int main() {
    char str1[100], str2[100];

    scanf("%s",str1);
    scanf("%s",str2);
    
    for(int i=0; str1[i]!='\0';i++){

        if(str1[i] >='A' && str1[i]<='Z')
            {
                str1[i] = str1[i]+32;
            }
        else{
            str1[i] = str1[i];
        }
        if(str2[i] >='A' && str2[i]<='Z')
            {
                str2[i] = str2[i]+32;
            }
        else{
            str2[i] = str2[i];
        }
    }

    int result = strcmp(str1,str2) ;
    if(result>0) {
        printf("1");
    }
    else if(result<0)
        printf("-1");

    else
        printf("0");

    return 0;
}