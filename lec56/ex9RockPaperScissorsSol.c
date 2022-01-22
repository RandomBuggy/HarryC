#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int genRandom(int n) {
    srand(time(NULL));
    return rand() % n;
}

int greater(char c1, char c2) {
    //return value if c1>c2 then 1, otherwise 0 or if c1==c2 then -1
    if ( c1 == c2 ) {
        return -1;
    }
    

    else if ( (c1 == 'r') && (c2 == 's')) {
        return 1;
    }
    else if ( ( c2 == 'r') && (c1 == 's') ) {
        return 0;
    }
    

    else if ( (c1 == 'p') && (c2 == 'r')) {
        return 1;
    }
    else if ( (c2 == 'p') && (c1 == 'r')) {
        return 0;
    }


    else if ( (c1 == 's') && (c2 == 'p')) {
        return 1;
    }
    else if ( (c2 == 's') && (c1 == 'p')) {
        return 0;
    }
}
int main()
{
    int pScore = 0, compScore = 0, temp;
    char pChar, compChar;
    char dict[] = { 'r', 'p', 's' };
    printf("***** Welcome to the Rock-Paper-Scissors *****\n");
    for ( int i = 0; i < 3; i++ ) {
        printf("\t  ****** Your Options ******\n\n[*] Choose As Your Wish...\n\n[*] For ROCK: 1\n\n[*] For PAPER: 2\n\n[*] For SCISSORS: 3\n\n[>] Enter Your Choice: ");
        scanf("%d", &temp);
        getchar();
        pChar = dict[ temp - 1 ];
        printf("[*] You have chosen: %c\n\n", pChar);
        printf("\n\n**************** Computers Turn ***************\n\n");
        printf("\t  ****** Your Options ******\n\n[*] Choose As Your Wish...\n\n[*] For ROCK: 1\n\n[*] For PAPER: 2\n\n[*] For SCISSORS: 3\n\n");
        temp = genRandom(3) + 1;
        compChar = dict[ temp - 1 ];
        printf("[*] Computer have chosen: %c\n\n", compChar);
        sleep(2);
        
        if (greater(pChar, compChar) == 1 ) {
            compScore += 1;
            printf("Computer Got it!\n");
        }
        else if ( greater(pChar, compChar) == -1 ) {
            compScore += 1;
            pScore += 1;
            printf("Its a Draw\n");
        }
        else {
            pScore += 1;
            printf("You Got It!\n");
        }
    }
        if ( pScore > compScore ) {
            printf("You WIN the game\n");
        }
        else if ( pScore < compScore ) {
            printf("You LOSE the game\n");
        }
        else {
            printf("Its a Draw\n");
        }
        printf("Your Score: %d\nComputer Score: %d\n", pScore, compScore);

    return 0;
}

