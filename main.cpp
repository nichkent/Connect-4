#include "menu.h"
#include "play.h"
#include <iostream>

int main()
{
    // Initialize necessary Objects
    Menu menu;
    Play play;
    bool to_play_or_not_to_play = false;

    // Gather user input on if they want to play or exit the game, if yes start the game
    while(!to_play_or_not_to_play)
    {
        // Call to display_menu
        to_play_or_not_to_play = menu.display_menu();

        // If block that determines the game to start
        if(to_play_or_not_to_play)
        {
            // Loops to gather user input during the game. Also calls upon all game logic.
            play.game_loop();
        }
    }

    // Return 0
    return 0;
}