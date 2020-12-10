// Boy or Girl
// http://codeforces.com/contest/236/problem/A


//   problem        ***************************************************

#include<stdio.h>

int main() {
    char name[100];
    char name2[100];
    int count = 0;
    printf("Enter the name: ");
    scanf("%s",name);
    int flag = 0;
    int k = 0;

for(int i=0;name[i]!='\0';i++) {
    for(int j=0;name[j+1]!='\0';j++) {
            if(name[j]>name[j+1]) {    
                int temp = name[j];
                name[j] = name[j+1];
                name[j+1] = temp;
                 }
            }
    }
    for (int i = 0; name[i]!='\0'; i++)
    {
        for(int j=i+1;name[j]!='\0';j++) {
                if(name[j]!=name2[k++]) {
                    
                }
                else {
                    break;
                }
            }

        if (flag)
        {
            printf("%c",name2[i]);
        }
        
    }
printf("\n");

for (int i = 0; i < name[i]!='\0'; i++)
{
    printf("%c",name[i]);
}


printf("\n");
    // if (count%2==0)
    // {
    //     printf("CHAT WITH HER!");
    // }
    // else {
    //     printf("IGNORE HIM!");
    // }
        
    return 0;

}



//  Code is not working.

// Have doubt in removing duplicates from given string.