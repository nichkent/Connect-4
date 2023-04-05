#include <iostream>
#include "menu.h"
#include "play.h"
#include "board.h"
using namespace std;

bool testing_menu();
bool testing_play();
bool testing_board();

int main()
{
    if(testing_play())
    {
        cout << "Passed all Play test cases" << endl;
    }
    if(testing_board())
    {
        cout << "Passed all Board test cases" << endl;
    }
    return 0;
}

// Menu .cpp does not require a test case as it only handles menuing

bool testing_play()
{
    // Initialize vars
    Play play;
    bool passed = true;
    int rows = 6;
    int columns = 6;

    // Create a fake game board
    static int** game_board = new int*[rows];
    for(int j = 0; j < rows; j++)
    {
        game_board[j] = new int[columns];
    }
    for(int i = 0; i < rows; i++)
    {
        for(int k = 0; k < columns; k++)
        {
            game_board[i][k] = 0;
        }
    }

    // Checks to see if process_player_move can handle an incorrect input
    if(!play.process_player_move(1, "8", game_board))
    {
        cout << "Failed incorrect input 8 test case" << endl;
        passed = false;
    }
    // Checks to see if process_player_move can handle an incorrect input
    if(!play.process_player_move(1, "0", game_board))
    {
        cout << "Failed incorrect 0 input test case" << endl;
        passed = false;
    }

    // Return passed
    return passed;
}

bool testing_board()
{
    // Initialize vars
    Board board;
    bool passed = true;
    int rows = 6;
    int columns = 7;

    // Create a fake game_board
    static int** game_board1 = new int*[rows];
    for(int j = 0; j < rows; j++)
    {
        game_board1[j] = new int[columns];
    }
    for(int i = 0; i < rows; i++)
    {
        for(int k = 0; k < columns; k++)
        {
            game_board1[i][k] = 0;
        }
    }

    // Checks check_for_win_p1 to see if it will return an incorrect win state
    if(board.check_for_win_p1(game_board1))
    {
        cout << "Failed all 0s test case, check_for_win_p1" << endl;
        passed = false;
    }
    // Checks check_for_win_p2 to see if it will return an incorrect win state
    if(board.check_for_win_p2(game_board1))
    {
        cout << "Failed all 0s test case, check_for_win_p2" << endl;
        passed = false;
    }


    // Create a fake game_board
    static int** game_board2 = new int*[rows];
    for(int j = 0; j < rows; j++)
    {
        game_board2[j] = new int[columns];
    }
    for(int i = 0; i < rows; i++)
    {
        for(int k = 0; k < columns; k++)
        {
            game_board2[i][k] = 0;
        }
    }
    game_board2[0][0] = 1;
    game_board2[0][2] = 1;
    game_board2[0][4] = 1;
    game_board2[0][6] = 1;

    // Checks check_for_win_p1 to see if it will return an incorrect win state
    if(board.check_for_win_p1(game_board2))
    {
        cout << "Failed four unrelated ones test case, check_for_win_p1" << endl;
        passed = false;
    }
    // Checks check_for_win_p2 to see if it will return an incorrect win state
    if(board.check_for_win_p2(game_board2))
    {
        cout << "Failed four unrelated ones test case, check_for_win_p2" << endl;
        passed = false;
    }


    // Create a fake game_board
    static int** game_board3 = new int*[rows];
    for(int j = 0; j < rows; j++)
    {
        game_board3[j] = new int[columns];
    }
    for(int i = 0; i < rows; i++)
    {
        for(int k = 0; k < columns; k++)
        {
            game_board3[i][k] = 0;
        }
    }
    game_board3[0][0] = 2;
    game_board3[0][2] = 2;
    game_board3[0][4] = 2;
    game_board3[0][6] = 2;

    // Checks check_for_win_p1 to see if it will return an incorrect win state
    if(board.check_for_win_p1(game_board3))
    {
        cout << "Failed four unrelated twos test case, check_for_win_p1" << endl;
        passed = false;
    }
    // Checks check_for_win_p2 to see if it will return an incorrect win state
    if(board.check_for_win_p2(game_board3))
    {
        cout << "Failed four unrelated twos test case, check_for_win_p2" << endl;
        passed = false;
    }

    return passed;
}