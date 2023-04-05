#include <iostream>
#include <fstream>
#include "menu.h"
using namespace std;


    Menu::Menu()
    {}

    void Menu::view_game()
    {
        // Define var for holding games
        string holder_game;

        // Open file
        ifstream openfile(R"(C:\Users\nicho\CLionProjects\M2OEP-nikent\Saved_Games.txt)");

        while(!openfile.fail() && !openfile.eof())
        {
            if(openfile.peek() == '\n')
            {
                cout << endl << endl;
            }
            openfile >> holder_game;
            cout << holder_game + " ";

            if(openfile.eof())
            {
                cout << endl << endl;
            }
        }
    }

    void Menu::display_rules()
    {
        cout << endl << "Rules of Connect 4:" << endl;
        cout << "     How to play:" << endl;
        cout << "          Player 1 will start by choosing the column that they would like to" << endl;
        cout << "          drop their piece. Once selected, the piece will fall to the bottom of" << endl;
        cout << "          the selected column. Player 2 will then get their turn where they will do" << endl;
        cout << "          the same." << endl << endl;
        cout << "     How to win:" << endl;
        cout << "          To win a game, one player must have four of their pieces next to each other." << endl;
        cout << "          This can be achieved with the pieces being next to each other horizontally," << endl;
        cout << "          vertically, or diagonally." << endl << endl;
        cout << "Have Fun!" << endl << endl;
    }

    bool Menu::display_menu()
    {
        string user_choice;
        int loop = 0;

        cout << "Hello and welcome to Connect 4! Please select one of the options from the menu below:" << endl;
        cout << "1. Start game" << endl;
        cout << "2. Display Rules" << endl;
        cout << "3. View Saved Games" << endl;
        cout << "4. Quit" << endl;
        cout << "Please enter your selection: ";

        getline(cin, user_choice);

        // Reads user input
        if (user_choice == "1") {
            return true;
        } else if (user_choice == "2") {
            display_rules();
        } else if (user_choice == "3"){
            view_game();
        }
        else if (user_choice == "4") {
            cout << "Quiting..." << endl;
            exit(0);
        }
        else if (user_choice == "")
        {
            cout << "No input. Please enter a number 1-3" << endl;
        }
        else {
            cout << "Invalid input. Please enter a number 1-3" << endl;
        }
        return false;
    }