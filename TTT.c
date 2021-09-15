#include <stdio.h>
#include <conio.h>
#include<stdlib.h> 

char t[10]={'0','1','2','3','4','5','6','7','8','9'};

int result();
void draw();

int main()
{

    int player=1,r,choice;

	char sign;

	do
	{
		system("cls");
		draw();
	
		player=(player % 2) ? 1 : 2;
	
		printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tplayer %d,enter a number :  ",player);
		scanf("%d",&choice);
	
		sign = (player == 1) ? 'X' : 'O';
	
		if(choice == 1 && t[1] == '1')
			t[1]=sign;
		else if(choice == 2 && t[2] == '2')
			t[2]=sign;
		else if(choice == 3 && t[3] == '3')
			t[3]=sign;
		else if(choice == 4 && t[4] == '4')
			t[4]=sign;
		else if(choice == 5 && t[5] == '5')
			t[5]=sign;
		else if(choice == 6 && t[6] == '6')
			t[6]=sign;
		else if(choice == 7 && t[7] == '7')
			t[7]=sign;
		else if(choice == 8 && t[8] == '8')
			t[8]=sign;
		else if(choice == 9 && t[9] == '9')
			t[9]=sign;
		else
		{
			printf("						Invalid Move!!!!");
			player--;
		}
		r=result();
		player++;
		}while(r == -1);
	
	    
	
		if(r == 1)
			printf("											player %d, won the game!!!congo !!!!!",--player);
		else
			printf("											game draw between two players!!!!!");
	
	    return 0;
}
int result()
{
	if(t[1] == t[2] && t[2] == t[3])
		return 1;
	else if(t[4] == t[5] && t[5] == t[6])
		return 1;
	else if(t[7] == t[8] && t[8] == t[9])
		return 1;
	else if(t[1] == t[4] && t[4] == t[7])
		return 1;
	else if(t[2] == t[5] && t[5] == t[8])
		return 1;
	else if(t[3] == t[6] && t[6] == t[9])
		return 1;
	else if(t[1] == t[5] && t[5] == t[9])
		return 1;
	else if(t[3] == t[5] && t[5] == t[7])
		return 1;
	else if(t[1] != '1' && t[2] != '2' && t[3] != '3' && t[4] != '4' && t[5] != '5' && t[6] != '6' && t[7] != '7' && t[8] != '8' && t[9] != '9')
		return 0;
	else
		return -1;
}
void draw()
{
    printf("\t\t\t\t\t\t\t\t\t\t\t    TIC TAC TOE\n");
    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t sign of player:1:-X\n\t\t\t\t\t\t\t\t\t\t\t sign of player:2:-O");
    printf("\n\n\n\n\n\n\t\t\t\t\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t     *     *     \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t  %c  *  %c  *  %c  \n",t[1],t[2],t[3]);
    printf("\t\t\t\t\t\t\t\t\t\t\t_____*_____*_____\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t     *     *     \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t  %c  *  %c  *  %c  \n",t[4],t[5],t[6]);
    printf("\t\t\t\t\t\t\t\t\t\t\t_____*_____*_____\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t      *     *     \n");
    printf("\t\t\t\t\t\t\t\t\t\t\t  %c  *  %c  *  %c  \n",t[7],t[8],t[9]);
    printf("\t\t\t\t\t\t\t\t\t\t\t     *     *     \n");
 }
