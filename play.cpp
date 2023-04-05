#include <iostream>
#include <fstream>
#include "play.h"
#include "board.h"
#include "menu.h"
using namespace std;


Play::Play() {}


struct PlayerType
{
    enum moveCol {Col1 = 0, Col2 = 1, Col3 = 2, Col4 = 3, Col5 = 4, Col6 = 5, Col7 = 6};

    // Overloaded operator to compare the input string and moveCol enum type
    friend bool operator==(const string& str, moveCol col)
    {
        if(str == "1")
        {
            return col == 1;
        }
        else if(str == "2")
        {
            return col == 2;
        }
        else if(str == "3")
        {
            return col == 3;
        }
        else if(str == "4")
        {
            return col == 4;
        }
        else if(str == "5")
        {
            return col == 5;
        }
        else if(str == "6")
        {
            return col == 6;
        }
        else if(str == "7")
        {
            return col == 7;
        }
    }
};

bool Play::process_player_move(int moveNum, string const& getPlayerMove, int **game_board)
{
    // Implement the struct
    PlayerType *playerType = new PlayerType;

    // Define column holder
    int column;

    // If block to determine if it was player one that moved or player 2
    // Handles player two inputs
    if(moveNum % 2 == 0)
    {
        // If block to determine the row that the user inputted
        if(getPlayerMove == "1")
        {
            cout << "Player two's move was to row " << getPlayerMove << endl;
            column = playerType->Col1;
            Board::add_move_to_array_p2(column, game_board);
            return false;
        }
        else if(getPlayerMove == "2")
        {
            cout << "Player two's move was to row " << getPlayerMove << endl;
            column = playerType->Col2;
            Board::add_move_to_array_p2(column, game_board);
            return false;
        }
        else if(getPlayerMove == "3")
        {
            cout << "Player two's move was to row " << getPlayerMove << endl;
            column = playerType->Col3;
            Board::add_move_to_array_p2(column, game_board);
            return false;
        }
        else if(getPlayerMove == "4")
        {
            cout << "Player two's move was to row " << getPlayerMove << endl;
            column = playerType->Col4;
            Board::add_move_to_array_p2(column, game_board);
            return false;
        }
        else if(getPlayerMove == "5")
        {
            cout << "Player two's move was to row " << getPlayerMove << endl;
            column = playerType->Col5;
            Board::add_move_to_array_p2(column, game_board);
            return false;
        }
        else if(getPlayerMove == "6")
        {
            cout << "Player two's move was to row " << getPlayerMove << endl;
            column = playerType->Col6;
            Board::add_move_to_array_p2(column, game_board);
            return false;
        }
        else if(getPlayerMove == "7")
        {
            cout << "Player two's move was to row " << getPlayerMove << endl;
            column = playerType->Col7;
            Board::add_move_to_array_p2(column, game_board);
            return false;
        }
    }
    else // Handles player one inputs
    {
        if(getPlayerMove == "1")
        {
            cout << "Player one's move was to row " << getPlayerMove << endl;
            column = playerType->Col1;
            Board::add_move_to_array_p1(column, game_board);
            return false;
        }
        else if(getPlayerMove == "2")
        {
            cout << "Player one's move was to row " << getPlayerMove << endl;
            column = playerType->Col2;
            Board::add_move_to_array_p1(column, game_board);
            return false;
        }
        else if(getPlayerMove == "3")
        {
            cout << "Player one's move was to row " << getPlayerMove << endl;
            column = playerType->Col3;
            Board::add_move_to_array_p1(column, game_board);
            return false;
        }
        else if(getPlayerMove == "4")
        {
            cout << "Player one's move was to row " << getPlayerMove << endl;
            column = playerType->Col4;
            Board::add_move_to_array_p1(column, game_board);
            return false;
        }
        else if(getPlayerMove == "5")
        {
            cout << "Player one's move was to row " << getPlayerMove << endl;
            column = playerType->Col5;
            Board::add_move_to_array_p1(column, game_board);
            return false;
        }
        else if(getPlayerMove == "6")
        {
            cout << "Player one's move was to row " << getPlayerMove << endl;
            column = playerType->Col6;
            Board::add_move_to_array_p1(column, game_board);
            return false;
        }
        else if(getPlayerMove == "7")
        {
            cout << "Player one's move was to row " << getPlayerMove << endl;
            column = playerType->Col7;
            Board::add_move_to_array_p1(column, game_board);
            return false;
        }
    }
    // Base case
    return true;
}


void Play::game_loop()
{
    // Define variables
    int loop = 0;
    int moveNum = 0;

    // Initialization of pointer to grab pointer from create_board
    int **game_board = Board::create_board();

    // Initial print of the board
    for(int l = 0; l < 6; l++)
    {
        for(int b = 0; b < 7; b++)
            cout << game_board[l][b] << " ";
        cout << endl;
    }

    // do while loop that holds the loop for the game
    while(loop == 0)
    {
        // Initialize variables
        string getPlayerMove;
        bool is_player_move_valid = true;
        bool win_condition_p1;
        bool win_condition_p2;


        // Player one moves
        cout << "Player 1 please enter the column you would like to place your piece (1-7):";
        moveNum++;

        // Call to process_player_move
        while (is_player_move_valid)
        {
            getline(cin, getPlayerMove);
            if(getPlayerMove == "1" || getPlayerMove == "2" || getPlayerMove == "3" || getPlayerMove == "4" || getPlayerMove == "5" || getPlayerMove == "6" || getPlayerMove == "7")
            {
                is_player_move_valid = process_player_move(moveNum, getPlayerMove, game_board);
            }
            else
            {
                cout << "Invalid input. Please enter a number 1-7 to select your column:";
            }
        }

        // Call to check_for_win
        win_condition_p1 = Board::check_for_win_p1(game_board);

        // Evaluates if player 1's win_condition is correct
        if (win_condition_p1)
        {
            // Declare vars
            Menu menu;
            int playerWon = 1;
            int loop_save1 = 0;
            int loop2 = 0;
            cout << "Congratulations Player 1, you have won the game!" << endl;

            // Ask to save game
            cout << "Would you like to save this game so the results can be viewed later?: (Y/N) ";

            while(loop_save1 == 0)
            {
                // Ask the user to play again
                getline(cin, getPlayerMove);

                // Determine input
                if(getPlayerMove == "Y" || getPlayerMove == "y")
                {
                    save_game(playerWon);
                    menu.display_menu();
                }
                else if(getPlayerMove == "N" || getPlayerMove == "n")
                {
                    loop_save1 = 1;
                    break;
                }
                else
                {
                    cout << "Invalid input. Please enter either Y or N:";
                }
            }

            // Ask to play again
            cout << "Would you like to play again? (y/n):" << endl;

            while(loop2 == 0)
            {
                // Ask the user to play again
                getline(cin, getPlayerMove);

                // Determine input
                if(getPlayerMove == "Y" || getPlayerMove == "y")
                {
                    game_loop();
                }
                else if(getPlayerMove == "N" || getPlayerMove == "n")
                {
                    cout << "Exiting..." << endl;
                    // Quit program
                    exit(0);
                }
                else
                {
                    cout << "Invalid input. Please enter either Y or N:";
                }
            }
        }

        is_player_move_valid = true;

        // Player two moves
        cout << "Player 2 please enter the column you would like to place your piece (1-7):";
        moveNum++;

        // Call to process_player_move
        while (is_player_move_valid)
        {
            getline(cin, getPlayerMove);
            if(getPlayerMove == "1" || getPlayerMove == "2" || getPlayerMove == "3" || getPlayerMove == "4" || getPlayerMove == "5" || getPlayerMove == "6" || getPlayerMove == "7")
            {
                is_player_move_valid = process_player_move(moveNum, getPlayerMove, game_board);
            }
            else
            {
                cout << "Invalid input. Please enter a number 1-7 to select your column:";
            }
        }

        // Call to check_for_win
        win_condition_p2 = Board::check_for_win_p2(game_board);

        // Evaluates if player 2's win_condition is correct
        if (win_condition_p2)
        {
            // Declare vars
            Menu menu;
            int playerWon = 2;
            int loop_save1 = 0;
            int loop2 = 0;
            cout << "Congratulations Player 1, you have won the game!" << endl;

            // Ask to save game
            cout << "Would you like to save this game so the results can be viewed later?: (Y/N) ";

            while(loop_save1 == 0)
            {
                // Ask the user to play again
                getline(cin, getPlayerMove);

                // Determine input
                if(getPlayerMove == "Y" || getPlayerMove == "y")
                {
                    save_game(playerWon);
                    menu.display_menu();
                }
                else if(getPlayerMove == "N" || getPlayerMove == "n")
                {
                    loop_save1 = 1;
                    break;
                }
                else
                {
                    cout << "Invalid input. Please enter either Y or N:";
                }
            }

            // Ask to play again
            cout << "Would you like to play again? (y/n):" << endl;

            while(loop2 == 0)
            {
                // Ask the user to play again
                getline(cin, getPlayerMove);

                // Determine input
                if(getPlayerMove == "Y" || getPlayerMove == "y")
                {
                    game_loop();
                }
                else if(getPlayerMove == "N" || getPlayerMove == "n")
                {
                    cout << "Exiting..." << endl;
                    // Quit program
                    exit(0);
                }
                else
                {
                    cout << "Invalid input. Please enter either Y or N:";
                }
            }
        }
    }
}

void Play::save_game(int playerWon)
{
    // Define vars
    Menu menu;
    ofstream saveGame;
    string getPlayerOneName;
    string getPlayerTwoName;
    string getPlayerMoveWinner;
    string getPlayerMoveLoser;
    int loop = 0;
    int loop2 = 0;

    // Open file in append mode
    saveGame.open(R"(C:\Users\nicho\CLionProjects\M2OEP-nikent\Saved_Games.txt)", ios_base::app);

    // Prompt the user
    cout << "Player 1 please enter your name:";

    // Loop to validate for input
    while(loop == 0)
    {
        int isString = 0; // checks to see if there is any character other than a string in input

        // Ask the user to play again
        getline(cin, getPlayerOneName);

        // Checks each character of input to see if it is a letter or not
        for(int i = 0; i < getPlayerOneName.length(); i++)
        {
            if(!isalpha(getPlayerOneName[i]))
            {
                isString += 1;
            }
        }

        // If there is anything more than a letter it will return an invalid input
        if(isString > 0)
        {
            cout << "Invalid input. Enter a name made of only letters:";
        }
        else
        {
            loop = 1;
        }
    }

    // Prompt the user
    cout << "Player 2 please enter your name:";

    // Loop to validate for input
    while(loop2 == 0)
    {
        int isString = 0; // checks to see if there is any character other than a string in input

        // Ask the user to play again
        getline(cin, getPlayerTwoName);
        for(int i = 0; i < getPlayerTwoName.length(); i++)
        {
            if(!isalpha(getPlayerTwoName[i]))
            {
                isString += 1;
            }
        }

        // If there is anything more than a letter it will return an invalid input
        if(isString > 0)
        {
            cout << "Invalid input. Enter a name made of only letters:";
        }
        else
        {
            loop2 = 1;
        }
    }

    // Assign winner variables for saving to file
    if(playerWon == 1)
    {
        getPlayerMoveWinner = getPlayerOneName;
        getPlayerMoveLoser = getPlayerTwoName;
    }
    else if(playerWon == 2)
    {
        getPlayerMoveWinner = getPlayerTwoName;
        getPlayerMoveLoser = getPlayerOneName;
    }


    // Save to file
    saveGame << endl << getPlayerMoveWinner + " won against " + getPlayerMoveLoser;

    // Close the file
    saveGame.close();

    // Reprompt the menu
    menu.display_menu();
}

