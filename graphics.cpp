#include "graphics.h"
#include "menu.h"
#include "play.h"
#include <iostream>
#include <time.h>
#include <vector>
using namespace std;

GLdouble width, height;
int wd;

enum Screens{
    SCREEN_MENU,
    SCREEN_PLAY,
    SCREEN_RULES,
    SCREEN_SAVED,
    SCREEN_WIN
};

// Define global screen variable
Screens current_screen = SCREEN_MENU;

void init() {
    width = 1200;
    height = 800;
    srand(time(0));
}

/* Initialize OpenGL Graphics */
void initGL() {
    // Set "clearing" or background color
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
 whenever the window needs to be re-painted. */
void display() {
    // tell OpenGL to use the whole window for drawing
    glViewport(0, 0, width, height);

    // do an orthographic parallel projection with the coordinate
    // system set to first quadrant, limited by screen/window size
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, width, height, 0.0, -1.f, 1.f);

    glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    /*
     * Draw here
     */
    switch(current_screen)
    {
        case SCREEN_MENU:
            glColor3f(1, 1, 1);
            glRasterPos2i(300, 225);
            for(const char &letter : "Hello and welcome to Connect 4! Please select one of the options from the menu below:"){
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, letter);
            }
            glColor3f(1, 1, 1);
            glRasterPos2i(300, 255);
            for(const char &letter : "1. Start game"){
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, letter);
            }
            glColor3f(1, 1, 1);
            glRasterPos2i(300, 285);
            for(const char &letter : "2. Display Rules"){
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, letter);
            }
            glColor3f(1, 1, 1);
            glRasterPos2i(300, 315);
            for(const char &letter : "3. View Saved Games"){
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, letter);
            }
            glColor3f(1, 1, 1);
            glRasterPos2i(300, 345);
            for(const char &letter : "4. Quit"){
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, letter);
            }
            glColor3f(1, 1, 1);
            glRasterPos2i(300, 395);
            for(const char &letter : "Please enter your selection with the number keys (1-4)"){
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, letter);
            }
            break;
        case SCREEN_PLAY:
            break;
        case SCREEN_RULES:
            glColor3f(1, 1, 1);
            glRasterPos2i(275, 200);
            for(const char &letter : "Rules of Connect 4:"){
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, letter);
            }
            glColor3f(1, 1, 1);
            glRasterPos2i(300, 250);
            for(const char &letter : "How to play:"){
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, letter);
            }
            glColor3f(1, 1, 1);
            glRasterPos2i(300, 290);
            for(const char &letter : "Player 1 will start by choosing the column that they would like to"){
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, letter);
            }
            glColor3f(1, 1, 1);
            glRasterPos2i(300, 320);
            for(const char &letter : "drop their piece. Once selected, the piece will fall to the bottom of"){
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, letter);
            }
            glColor3f(1, 1, 1);
            glRasterPos2i(300, 350);
            for(const char &letter : "the selected column. Player 2 will then get their turn where they will do the same."){
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, letter);
            }
            glColor3f(1, 1, 1);
            glRasterPos2i(300, 385);
            for(const char &letter : "How to win:"){
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, letter);
            }
            glRasterPos2i(300, 425);
            for(const char &letter : "To win a game, one player must have four of their pieces next to each other."){
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, letter);
            }
            glColor3f(1, 1, 1);
            glRasterPos2i(300, 455);
            for(const char &letter : "This can be achieved with the pieces being next to each other horizontally, vertically, or diagonally."){
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, letter);
            }
            glColor3f(1, 1, 1);
            glRasterPos2i(300, 525);
            for(const char &letter : "Have Fun!"){
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, letter);
            }
            glColor3f(1, 1, 1);
            glRasterPos2i(300, 575);
            for(const char &letter : "Press the 0 key to go back to the menu screen."){
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, letter);
            }
            break;
        case SCREEN_SAVED:
            break;
        case SCREEN_WIN:
            glColor3f(1, 1, 1);
            glRasterPos2i(175, 225);
            for(const char &letter : "You Win! Press 'esc' to exit")
            {
                glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, letter);
            }
            break;
        default:
            break;
    }

    glFlush();  // Render now
}

// http://www.theasciicode.com.ar/ascii-control-characters/escape-ascii-code-27.html
void kbd(unsigned char key, int x, int y) {
    // escape
    if (key == 27) {
        glutDestroyWindow(wd);
        exit(0);
    }


    // Load main screen
    switch (key) {
        case '0':
            current_screen = SCREEN_MENU;
            break;
        case '1':
            current_screen = SCREEN_PLAY;
            break;
        case '2':
            current_screen = SCREEN_RULES;
            break;
        case '3':
            current_screen = SCREEN_SAVED;
            break;
        case '4':
            glutDestroyWindow(wd);
            exit(0);
            break;
    }

    glutPostRedisplay();
}

void kbdS(int key, int x, int y) {
    // Makes sure the buttons cannot be interacted with before the play screen
    if(current_screen == SCREEN_PLAY) {
        switch (key) {
            case GLUT_KEY_DOWN:
                break;
            case GLUT_KEY_LEFT:
                break;
            case GLUT_KEY_RIGHT:
                break;
            case GLUT_KEY_UP:
                break;
        }
    }

    glutPostRedisplay();
}

void cursor(int x, int y) {
    glutPostRedisplay();
}

// button will be GLUT_LEFT_BUTTON or GLUT_RIGHT_BUTTON
// state will be GLUT_UP or GLUT_DOWN
void mouse(int button, int state, int x, int y) {
    // Makes sure the buttons cannot be interacted with before the play screen
    if(current_screen == SCREEN_PLAY) {

    }

    glutPostRedisplay();
}

void timer(int dummy) {

    glutPostRedisplay();
    glutTimerFunc(30, timer, dummy);
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    // Initialize necessary Objects
    Menu menu;
    Play play;
    bool to_play_or_not_to_play = false;

    // start of glut main
    init();

    glutInit(&argc, argv);          // Initialize GLUT

    glutInitDisplayMode(GLUT_RGBA);

    glutInitWindowSize((int)width, (int)height);
    glutInitWindowPosition(100, 200); // Position the window's initial top-left corner
    /* create the window and store the handle to it */
    wd = glutCreateWindow("Confetti!" /* title */ );

    // Register callback handler for window re-paint event
    glutDisplayFunc(display);

    // Our own OpenGL initialization
    initGL();

    // register keyboard press event processing function
    // works for numbers, letters, spacebar, etc.
    glutKeyboardFunc(kbd);

    // register special event: function keys, arrows, etc.
    glutSpecialFunc(kbdS);

    // handles mouse movement
    glutPassiveMotionFunc(cursor);

    // handles mouse click
    glutMouseFunc(mouse);

    // handles timer
    glutTimerFunc(0, timer, 0);

    // Enter the event-processing loop
    glutMainLoop();
    return 0;
}
