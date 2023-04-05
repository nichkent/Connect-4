//
// Created by nicho on 1/25/2023.
//

#ifndef M1OEP_NIKENT_MENU_H
#define M1OEP_NIKENT_MENU_H
class Menu{
private:
public:
    /*
     * Default constructor of the Menu class
     */
    Menu();

    /*
     * view_game allows the user to see past games
     *
     * Parameter: None
     * Return: void
     */
    void view_game();

    /*
     * display_rules prints out the rules of the game for the user to read before playing.
     *
     * Parameter: None
     * Return: void
     */
    static void display_rules();

    /*
     * display_menu handles displaying the menu for the user upon start up of the program. This function will also
     * grab the user's input on if they would like to play, see the rules, or exit the program.
     *
     * Parameter: None
     * Return: bool
     */
    bool display_menu();
};

#endif //M1OEP_NIKENT_MENU_H
