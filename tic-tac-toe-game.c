#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
void printboard();
int checkwin();
char number[]={'0','1','2','3','4','5','6','7','8','9'};
int num;

int main(){
printboard();
printf("box shown above\n");
printf("||||||***LETS PLAY TIC TAC TOE***||||||\n");
printf("\n");
printf("players get ready to play||||||||||\n");
printf("\n");

int player=1;
int count=1;
int n=0;
int status=-1;
while(count<10){
player=(player%2==0)?2:1;
char mark=(player==1)?'O':'X';
printf("enter the position you want to enter the mark:");
scanf("%d",&num);


number[num]=mark; 
printboard();
count++;
int a=checkwin();
if(a==1){
    printf("player %d is the winner!\n",player);
 break;
}

player++;
n++;
}
if(n==9){
    printf("MATCH DRAW!");
    
}
}


void printboard(){
system("cls");
printf("     |    |       \n");
printf("_%c___|_%c__|__%c___ \n",number[1],number[2],number[3]);
printf("     |    |       \n");
printf("_%c___|_%c__|__%c___ \n",number[4],number[5],number[6]);
printf("     |    |       \n");
printf("_%c___|_%c__|__%c___ \n",number[7],number[8],number[9]);
printf("     |    |       \n");
}

int checkwin(){
    int check=0;
    if(number[1]==number[2] && number[2]==number[3]){
        return 1;
    }
    if(number[1]==number[4] && number[4]==number[7]){
        return 1;
    }
    if(number[1]==number[5] && number[5]==number[9]){
        return 1;
    }
    if(number[2]==number[5] && number[5]==number[8]){
        return 1;
    }
    if(number[3]==number[6] && number[6]==number[9]){
        return 1;
    }
    if(number[4]==number[5] && number[5]==number[6]){
        return 1;
    }
    if(number[7]==number[8] && number[8]==number[9]){
        return 1;
    }
    if(number[3]==number[5] && number[5]==number[7]){
        return 1;
    }
    if(check==9){
        return 0;
    }
    ++check;
    if(num<1 || num>9){
printf("invalid number try again!\n");
}
    return -1;
}






