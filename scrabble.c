#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    printf("score1 is: %d \n",score1);
    printf("score2 is: %d \n",score2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins! \n");
    }
    else if(score2 > score1)
    {
        printf("Player 2 wins! \n");
    }
    else
    {
        printf("Two players are equal! \n");
    }
    
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int score = 0;
    int n;
    int length = strlen(word);

    for(int i=0;i < length;i++)
    {
        switch(word[i])
        {
            case 'a':
                score = score + 1;
                break;
                
            case 'b':
                score = score + 3;
                break;
                
            case 'c':
                score = score + 3;
                break;
                
            case 'd':
                score = score + 2;
                break;
                
            case 'e':
                score = score + 1;
                break;
                
            case 'f':
                score = score + 4;
                break;
                
            case 'g':
                score = score + 2;
                break;
                
            case 'h':
                score = score + 4;
                break;
                
            case 'i':
                score = score + 1;
                break;
                
            case 'j':
                score = score + 8;
                break;
                
            case 'k':
                score = score + 5;
                break;
                
            case 'l':
                score = score + 1;
                break;
                
            case 'm':
                score = score + 3;
                break;
                
            case 'n':
                score = score + 1;
                break;
                
            case 'o':
                score = score + 1;
                break;
                
            case 'p':
                score = score + 3;
                break;
                
            case 'q':
                score = score + 10;
                break;
                
            case 'r':
                score = score + 1;
                break;
                
            case 's':
                score = score + 1;
                break;
                
            case 't':
                score = score + 1;
                break;
                
            case 'u':
                score = score + 1;
                break;
                
            case 'v':
                score = score + 4;
                break;
                
            case 'w':
                score = score + 4;
                break;
                
            case 'x':
                score = score + 8;
                break;
                
            case 'y':
                score = score + 4;
                break;
                
            case 'z':
                score = score + 10;
                break;
                
            case 'A':
                score = score + 1;
                break;
                
            case 'B':
                score = score + 1;
                break;
                
            case 'C':
                score = score + 1;
                break;
                
            case 'D':
                score = score + 1;
                break;
                
            case 'E':
                score = score + 1;
                break;
                
            case 'F':
                score = score + 1;
                break;
                
            case 'G':
                score = score + 1;
                break;
                
            case 'H':
                score = score + 1;
                break;
                
            case 'I':
                score = score + 1;
                break;
                
            case 'J':
                score = score + 1;
                break;
                
            case 'K':
                score = score + 1;
                break;
                
            case 'L':
                score = score + 1;
                break;
                
            case 'M':
                score = score + 1;
                break;
                
            case 'N':
                score = score + 1;
                break;
                
            case 'O':
                score = score + 1;
                break;
                
            case 'P':
                score = score + 1;
                break;
                
            case 'Q':
                score = score + 10;
                break;
                
            case 'R':
                score = score + 1;
                break;
                
            case 'S':
                score = score + 1;
                break;
                
            case 'T':
                score = score + 1;
                break;
                
            case 'U':
                score = score + 1;
                break;
                
            case 'V':
                score = score + 4;
                break;
                
            case 'W':
                score = score + 4;
                break;
                
            case 'X':
                score = score + 8;
                break;
                
            case 'Y':
                score = score + 4;
                break;
                
            case 'Z':
                score = score + 10;
                break;
                
        }
    }




    return score;
}