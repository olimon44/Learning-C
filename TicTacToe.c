#include <stdio.h>

char fieldc[9] = {"123456789"};
int fieldi[9] = {1,2,3,4,5,6,7,8,9};
//Player 1 = X, 2 = O
char player = 1;
//loads the current state of the board
void loadBoard() {
    int i;
    for(i=0;i<9;i++) {
        switch (i) {
            case 3:
                printf("\n%c ",fieldc[i]);
                break;
            case 6:
                printf("\n%c ",fieldc[i]);
                break;
            default:
                printf("%c ",fieldc[i]);
                break;
        }
    }
}
int main() {
    int current_slot;
    int who_won = 0;
    loadBoard();
    //game logic and changing the board
    do{
        printf("\n\nPLAYER %d\nEnter 1-9\n-->", player);
        scanf("%d", &current_slot);
        if(current_slot == fieldi[current_slot-1]) {
            if (player == 1) {
                fieldc[current_slot-1] = 'X';
                fieldi[current_slot-1] = 0;
                player = 2;
            }
            else {
                fieldc[current_slot-1] = 'O';
                fieldi[current_slot-1] = 0;
                player = 1;
            }
        }
        else {
            printf("Wrong Number\n\n");
        }
        loadBoard();
        //winning
        //1-3
        if (fieldc[0]==fieldc[1]&&fieldc[1]==fieldc[2]) {
            if(player==1){who_won=2;}
            if(player==2){who_won=1;}
        }
        //1-9
        if (fieldc[0]==fieldc[4]&&fieldc[4]==fieldc[8]) {
            if(player==1){who_won=2;}
            if(player==2){who_won=1;}
        }
        //3-7
        if (fieldc[2]==fieldc[4]&&fieldc[4]==fieldc[6]) {
            if(player==1){who_won=2;}
            if(player==2){who_won=1;}
        }
        //4-6
        if (fieldc[3]==fieldc[4]&&fieldc[4]==fieldc[5]) {
            if(player==1){who_won=2;}
            if(player==2){who_won=1;}
        }
        //7-9
        if (fieldc[6]==fieldc[7]&&fieldc[7]==fieldc[8]) {
            if(player==1){who_won=2;}
            if(player==2){who_won=1;}
        }
        //1-7
        if (fieldc[0]==fieldc[3]&&fieldc[3]==fieldc[6]) {
            if(player==1){who_won=2;}
            if(player==2){who_won=1;}
        }
        //3-9
        if (fieldc[2]==fieldc[5]&&fieldc[5]==fieldc[8]) {
            if(player==1){who_won=2;}
            if(player==2){who_won=1;}
        }
        //2-8
        if (fieldc[1]==fieldc[4]&&fieldc[4]==fieldc[7]) {
            if(player==1){who_won=2;}
            if(player==2){who_won=1;}
        }
    }
while(who_won==0);
printf("\n\nPLAYER %d WON!\n", who_won);
}
