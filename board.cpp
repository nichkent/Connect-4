//
// Created by nicho on 2/4/2023.
//
#include "board.h"
#include <iostream>
using namespace std;

Board::Board() = default;

int** Board::create_board()
{
    static int** game_board = new int*[Board::rows];
    for(int j = 0; j < rows; j++)
    {
        game_board[j] = new int[Board::columns];
    }


    for(int i = 0; i < Board::rows; i++)
    {
        for(int k = 0; k < Board::columns; k++)
        {
            game_board[i][k] = 0;
        }
    }
    return game_board;
}


void Board::add_move_to_array_p1(int column, int** gameBoard)
{
    int changes = 0;

    if(column == 0)
    {
        for(int i = 5; 0 < i; i--)
        {
            // If block so the whole row isn't changed at each move
            if(changes == 0)
            {
                if(gameBoard[i][column] == 1 || gameBoard[i][column] == 2)
                {
                    continue;
                }
                else
                {
                    gameBoard[i][column] = 1;
                    changes++;
                }
            }
        }

        for(int l = 0; l < rows; l++)
        {
            for(int b = 0; b < columns; b++)
                cout << gameBoard[l][b] << " ";
            cout << endl;
        }
    }

    else if(column == 1)
    {
        for(int i = 5; 0 < i; i--)
        {
            // If block so the whole row isn't changed at each move
            if(changes == 0)
            {
                if(gameBoard[i][column] == 1 || gameBoard[i][column] == 2)
                {
                    continue;
                }
                else
                {
                    gameBoard[i][column] = 1;
                    changes++;
                }
            }
        }

        for(int l = 0; l < rows; l++)
        {
            for(int b = 0; b < columns; b++)
                cout << gameBoard[l][b] << " ";
            cout << endl;
        }
    }

    else if(column == 2)
    {
        for(int i = 5; 0 < i; i--)
        {
            // If block so the whole row isn't changed at each move
            if(changes == 0)
            {
                if(gameBoard[i][column] == 1 || gameBoard[i][column] == 2)
                {
                    continue;
                }
                else
                {
                    gameBoard[i][column] = 1;
                    changes++;
                }
            }
        }

        for(int l = 0; l < rows; l++)
        {
            for(int b = 0; b < columns; b++)
                cout << gameBoard[l][b] << " ";
            cout << endl;
        }
    }

    else if(column == 3)
    {
        for(int i = 5; 0 < i; i--)
        {
            // If block so the whole row isn't changed at each move
            if(changes == 0)
            {
                if(gameBoard[i][column] == 1 || gameBoard[i][column] == 2)
                {
                    continue;
                }
                else
                {
                    gameBoard[i][column] = 1;
                    changes++;
                }
            }
        }

        for(int l = 0; l < rows; l++)
        {
            for(int b = 0; b < columns; b++)
                cout << gameBoard[l][b] << " ";
            cout << endl;
        }
    }

    else if(column == 4)
    {
        for(int i = 5; 0 < i; i--)
        {
            // If block so the whole row isn't changed at each move
            if(changes == 0)
            {
                if(gameBoard[i][column] == 1 || gameBoard[i][column] == 2)
                {
                    continue;
                }
                else
                {
                    gameBoard[i][column] = 1;
                    changes++;
                }
            }
        }

        for(int l = 0; l < rows; l++)
        {
            for(int b = 0; b < columns; b++)
                cout << gameBoard[l][b] << " ";
            cout << endl;
        }
    }

    else if(column == 5)
    {
        for(int i = 5; 0 < i; i--)
        {
            // If block so the whole row isn't changed at each move
            if(changes == 0)
            {
                if(gameBoard[i][column] == 1 || gameBoard[i][column] == 2)
                {
                    continue;
                }
                else
                {
                    gameBoard[i][column] = 1;
                    changes++;
                }
            }
        }

        for(int l = 0; l < rows; l++)
        {
            for(int b = 0; b < columns; b++)
                cout << gameBoard[l][b] << " ";
            cout << endl;
        }
    }

    else if(column == 6)
    {
        for(int i = 5; 0 < i; i--)
        {
            // If block so the whole row isn't changed at each move
            if(changes == 0)
            {
                if(gameBoard[i][column] == 1 || gameBoard[i][column] == 2)
                {
                    continue;
                }
                else
                {
                    gameBoard[i][column] = 1;
                    changes++;
                }
            }
        }

        for(int l = 0; l < rows; l++)
        {
            for(int b = 0; b < columns; b++)
                cout << gameBoard[l][b] << " ";
            cout << endl;
        }
    }
}

void Board::add_move_to_array_p2(int column, int** gameBoard)
{
    int changes = 0;

    if(column == 0)
    {
        for(int i = 5; 0 < i; i--)
        {
            // If block so the whole row isn't changed at each move
            if(changes == 0)
            {
                if(gameBoard[i][column] == 1 || gameBoard[i][column] == 2)
                {
                    continue;
                }
                else
                {
                    gameBoard[i][column] = 2;
                    changes++;
                }
            }
        }

        for(int l = 0; l < rows; l++)
        {
            for(int b = 0; b < columns; b++)
                cout << gameBoard[l][b] << " ";
            cout << endl;
        }
    }

    else if(column == 1)
    {
        for(int i = 5; 0 < i; i--)
        {
            // If block so the whole row isn't changed at each move
            if(changes == 0)
            {
                if(gameBoard[i][column] == 1 || gameBoard[i][column] == 2)
                {
                    continue;
                }
                else
                {
                    gameBoard[i][column] = 2;
                    changes++;
                }
            }
        }

        for(int l = 0; l < rows; l++)
        {
            for(int b = 0; b < columns; b++)
                cout << gameBoard[l][b] << " ";
            cout << endl;
        }
    }

    else if(column == 2)
    {
        for(int i = 5; 0 < i; i--)
        {
            // If block so the whole row isn't changed at each move
            if(changes == 0)
            {
                if(gameBoard[i][column] == 1 || gameBoard[i][column] == 2)
                {
                    continue;
                }
                else
                {
                    gameBoard[i][column] = 2;
                    changes++;
                }
            }
        }

        for(int l = 0; l < rows; l++)
        {
            for(int b = 0; b < columns; b++)
                cout << gameBoard[l][b] << " ";
            cout << endl;
        }
    }

    else if(column == 3)
    {
        for(int i = 5; 0 < i; i--)
        {
            // If block so the whole row isn't changed at each move
            if(changes == 0)
            {
                if(gameBoard[i][column] == 1 || gameBoard[i][column] == 2)
                {
                    continue;
                }
                else
                {
                    gameBoard[i][column] = 2;
                    changes++;
                }
            }
        }

        for(int l = 0; l < rows; l++)
        {
            for(int b = 0; b < columns; b++)
                cout << gameBoard[l][b] << " ";
            cout << endl;
        }
    }

    else if(column == 4)
    {
        for(int i = 5; 0 < i; i--)
        {
            // If block so the whole row isn't changed at each move
            if(changes == 0)
            {
                if(gameBoard[i][column] == 1 || gameBoard[i][column] == 2)
                {
                    continue;
                }
                else
                {
                    gameBoard[i][column] = 2;
                    changes++;
                }
            }
        }

        for(int l = 0; l < rows; l++)
        {
            for(int b = 0; b < columns; b++)
                cout << gameBoard[l][b] << " ";
            cout << endl;
        }
    }

    else if(column == 5)
    {
        for(int i = 5; 0 < i; i--)
        {
            // If block so the whole row isn't changed at each move
            if(changes == 0)
            {
                if(gameBoard[i][column] == 1 || gameBoard[i][column] == 2)
                {
                    continue;
                }
                else
                {
                    gameBoard[i][column] = 2;
                    changes++;
                }
            }
        }

        for(int l = 0; l < rows; l++)
        {
            for(int b = 0; b < columns; b++)
                cout << gameBoard[l][b] << " ";
            cout << endl;
        }
    }

    else if(column == 6)
    {
        for(int i = 5; 0 < i; i--)
        {
            // If block so the whole row isn't changed at each move
            if(changes == 0)
            {
                if(gameBoard[i][column] == 1 || gameBoard[i][column] == 2)
                {
                    continue;
                }
                else
                {
                    gameBoard[i][column] = 2;
                    changes++;
                }
            }
        }

        for(int l = 0; l < rows; l++)
        {
            for(int b = 0; b < columns; b++)
                cout << gameBoard[l][b] << " ";
            cout << endl;
        }
    }
}

bool Board::check_for_win_p1(int** gameBoard)
{
    // Horizontal win
    for (int j = 0; j < columns - 3; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            if (gameBoard[i][j] == 1 && gameBoard[i][j + 1] == 1 && gameBoard[i][j + 2] == 1 && gameBoard[i][j + 3] == 1){
                {
                    return true;
                }
            }
        }
    }

    // Vertical win
    for (int i = 0; i < rows - 3; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (gameBoard[i][j] == 1 && gameBoard[i + 1][j] == 1 && gameBoard[i + 2][j] == 1 && gameBoard[i + 3][j] == 1){
                {
                    return true;
                }
            }
        }
    }

    // Diagonal win going up
    for (int i = 3; i < rows; i++)
    {
        for (int j = 0; j < columns - 3; j++)
        {
            if (gameBoard[i][j] == 1 && gameBoard[i - 1][j + 1] == 1 && gameBoard[i - 2][j + 2] == 1 && gameBoard[i - 3][j + 3] == 1)
            {
                return true;
            }
        }
    }

    // Diagonal win going down
    for (int i=3; i < rows; i++)
    {
        for (int j=3; j< columns; j++)
        {
            if (gameBoard[i][j] == 1 && gameBoard[i - 1][j - 1] == 1 && gameBoard[i - 2][j - 2] == 1 && gameBoard[i - 3][j - 3] == 1)
            {
                return true;
            }
        }
    }
    return false;
}

bool Board::check_for_win_p2(int** gameBoard)
{
    // Horizontal win
    for (int j = 0; j < columns - 3; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            if (gameBoard[i][j] == 2 && gameBoard[i][j + 1] == 2 && gameBoard[i][j + 2] == 2 && gameBoard[i][j + 3] == 2){
                return true;
            }
        }
    }

    // Vertical win
    for (int i = 0; i < rows - 3; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (gameBoard[i][j] == 2 && gameBoard[i + 1][j] == 2 && gameBoard[i + 2][j] == 2 && gameBoard[i + 3][j] == 2)
            {
                return true;
            }
        }
    }

    // Diagonal win going up
    for (int i = 3; i < rows; i++)
    {
        for (int j = 0; j < columns - 3; j++)
        {
            if (gameBoard[i][j] == 2 && gameBoard[i - 1][j + 1] == 2 && gameBoard[i - 2][j + 2] == 2 && gameBoard[i - 3][j + 3] == 2)
            {
                return true;
            }
        }
    }

    // Diagonal win going down
    for (int i=3; i < rows; i++){
        for (int j=3; j< columns; j++){
            if (gameBoard[i][j] == 2 && gameBoard[i - 1][j - 1] == 2 && gameBoard[i - 2][j - 2] == 2 && gameBoard[i - 3][j - 3] == 2)
            {
                return true;
            }
        }
    }
    return false;
}