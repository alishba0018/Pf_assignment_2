#include <stdio.h>

void move_player(char grid[5][5], int *player_x, int *player_y, char direction) {
    int new_x = *player_x;
    int new_y = *player_y;
    switch(direction){
    case 'W': //move up
    new_x--;
    break;
    case 'S': //move down
    new_x++;
    break;
    case 'A': //move left
    new_y--;
    break;
    case 'D': //move right
    new_y++;
    break;
    case 'Q': //quit
    break;
    default:
    printf("invalid move");
}
if (new_x >= 0 && new_x < 5 && new_y >= 0 && new_y < 5) {
        if (grid[new_x][new_y] == 'X') {
            printf("You cannot move into an obstacle!\n");
        } else {
            // Collect item if present
            if (grid[new_x][new_y] == 'I') {
                printf("You collected an item!\n");
            }
            // Update player's position
            grid[*player_x][*player_y] = ' '; // Clear old position
            *player_x = new_x;
            *player_y = new_y;
            grid[*player_x][*player_y] = 'P'; // Update new position
        }
    } else {
        printf("Invalid move! You're trying to move out of bounds.\n");
    }
}    


int main(){
    char grid[5][5] = {
{' ', ' ', 'I', 'X', ' '},
{' ', 'X', ' ', ' ', ' '},
{'I', ' ', 'X', 'X', ' '},
{' ', ' ', ' ', 'I', 'X'},
{' ', 'X', ' ', ' ', 'P'}
};
//display grid
int i,j;
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        printf("%c",grid[5][5]);
    }
    printf("\n");
}
int player_x = 4; // Player's starting position (row)
    int player_y = 4; // Player's starting position (column)
    char command;

    while (1) {
        for(i=0;i<5;i++){
          for(j=0;j<5;j++){
        printf("%c",grid[5][5]);
    }
    printf("\n");
}
        printf("Enter your move (W: up, S: down, A: left, D: right, Q: quit): ");
        scanf(" %c", &command); // Note the space before %c to ignore previous newline

        if (command == 'Q') {
            printf("Quitting the game.\n");
            break;
        }

        move_player(grid, &player_x, &player_y, command);
    }


    return 0;
}
