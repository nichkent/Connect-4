//
// Created by nicho on 2/4/2023.
//

#ifndef M1OEP_NIKENT_BOARD_H
#define M1OEP_NIKENT_BOARD_H

#include <vector>
using namespace std;

class Board{
private:
    // Variables that handle the creation of the game's board
    static const int rows = 6;
    static const int columns = 7;
public:
    /*
     * Default constructor of Board class
     */
    Board();

    /*
     * create_board will create a 2d array pointer that will handle the logic of the game. Creates a 2d array of 0's.
     *
     * Parameter: None
     * Return: int**
     */
    static int** create_board();

    /*
     * add_move_to_array_p1 handles the move in the logic board of player 1.
     *
     * Parameter: int column
     * Return: void
     */
    static void add_move_to_array_p1(int column, int** gameBoard);

    /*
     * add_move_to_array_2 handles the move in the logic board of player 2.
     *
     * Parameter: int column
     * Return: void
     */
    static void add_move_to_array_p2(int column, int** gameBoard);

    /*
     * check_for_win_p1 handles the logic for determining if there was a winning move played by player 1
     *
     * Parameter: int** gameBoard
     * Return: bool win_condition
     */
    static bool check_for_win_p1(int** gameBoard);

    /*
     * check_for_win_p2 handles the logic for determining if there was a winning move played by player 2
     *
     * Parameter: int** gameBoard
     * Return: bool win_condition
     */
    static bool check_for_win_p2(int** gameBoard);
};

#endif //M1OEP_NIKENT_BOARD_H