//Sajira and Dima
// https://codeforces.com/contest/381/problem/A

//   Problem  ************************************

#include<stdio.h>

int swap(int *xp,int*yp) {
        int temp = *xp;
        *xp = *yp;
        *yp = temp;
}

int main() {
    int cards;
    scanf("%d",&cards);
    int cardArr[cards];

//Taling Input
    for(int i=0;i<cards;i++) {
        scanf("%d",&cardArr[i]);
    }

    int player1=0, player2=0;
 
//Sorting Array
	for(int i=0;i<cards-1; i++)
	{
		for(int j=0; j<cards-i-1; j++)
		{
			if(cardArr[j]>cardArr[j+1])
				swap(&cardArr[j], &cardArr[j+1]);
		}
	}

for(int i=0;i<cards;i++) {
    printf("%d ",cardArr[i]);
}

//Adding Score of players.
int c1=0,c2=1;
while(c1<cards) {
    player1+=cardArr[c1];
    c1+=2;
}
while(c2<cards) {
    player2+=cardArr[c2];
    c2+=2;
}
//Finding Winner to print frist.
int winner=0,looser=0;

if(player1>player2) {
    winner = player1;
    looser = player2;
}
else{
    winner = player2;
    looser = player1;
}

printf("\n%d %d",winner,looser);

    return 0;
}



//This code is not working properly as expected.
// Problem is occuring somewhere in loop part.