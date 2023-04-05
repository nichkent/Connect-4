//
// Created by nicho on 1/25/2023.
//

#ifndef M1OEP_NIKENT_PLAY_H
#define M1OEP_NIKENT_PLAY_H

#include <string>
#include <vector>
using namespace std;

class Play{
private:
public:
    /*
     * Default constructor for the Play object.
     */
    Play();

    /*
     * display_board prints out visual representation of board so user can understand
     * what is happening in the game currently.
     *
     * Parameter: None
     * Return: void
     */
    static void display_board();

    /*
     * game_loop is the main loop that the game runs in. This is to ensure that when players are inputting their moves
     * the game continues running beyond the first two moves. Also calls other functions that handle the logic of the
     * game.
     *
     * Parameter: None
     * Return: void
     */
    static void game_loop();

    /*
     * process_player_move is intended to add the move from the player to logic board
     *
     * Parameter: int moveNum, const string& getPlayerMove
     * Return: bool
     */
    static bool process_player_move(int moveNum, const string& getPlayerMove, int** game_board);

    /*
     * save_game is used to save the result of the game to a file to be retrieved later via the view game option on
     * the main menu
     *
     * Parameter: None
     * Return: void
     */
    static void save_game(int playerWon);
};
#endif //M1OEP_NIKENT_PLAY_H