//Word
// https://codeforces.com/contest/59/problem/A

#include<stdio.h>

int main() {
    char name[100];
    int countU=0;
    int countL=0;
    scanf("%s",name);
// Counting upper and lowercase letters to find majority of case; 
    for(int i=0;name[i]!='\0';i++) {
        if(name[i]>='A' && name[i]<='Z')
            {
                countU++;
            }
        else {
            countL++;
        }
    }
//Changing to uppercase or lowercase by looking at majority
    if(countU>countL) {

    for(int i=0;name[i]!='\0';i++) {
                if(name[i]>='A' && name[i]<='Z')
                    {
                        name[i]=name[i];
                    }
                else {
                    name[i]=name[i]-32;
                }
            }
    }
    else {

    for(int i=0;name[i]!='\0';i++) {
                if(name[i]>='A' && name[i]<='Z')
                    {
                        name[i]=name[i]+32;
                    }
                else {
                    name[i]=name[i];
                }
            }
    }


    //Finally Printing rectified name
        for(int i=0;name[i]!='\0';i++) {

                printf("%c",name[i]);
            }

    return 0;
}