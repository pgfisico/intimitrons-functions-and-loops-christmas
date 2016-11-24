/*
 * For this exercise, you will finish a program that prints Christmas trees.
 * The program only needs to be able to print Christmas trees with odd heights.
 *
 * Everything you need to do is documented by comments. In Eclipse these to do items are indicated by
 * the blue boxes along the scrollbar (You can click them) and aso show up in the Tasks view.
 * The Tasks view is a tab in the area with Problems and Console. If you don't see it, try
 * Window->Show View->Tasks on the menu bar. (Eclipse also highlights fix me (without the space) in comments)
 *
 */

#include <iostream>

// These are the characters the tree will be made up of
// They have defined using the const keyword - why?
const char BLANK = ' ';
const char STAR = '*';
const char FORWARD_SLASH = '/';
// The double backslash represents a single backslash
// ---- ADVANCED TOPIC ----
/*
 * In C++, the backslash begins an escape sequence. Escape sequences are used to represent characters
 * in strings that would otherwise be hard to represent. Since a single backslash starts an escape sequence,
 * we cannot leave it on it's own (Take out the second one, you will get compiler errors). Because of this,
 * we have to use an escape sequence to represent an actual backslash. The escape sequence for a backslash is \\.
 */
const char BACKWARD_SLASH = '\\';
const char VERTICAL_LINE = '|';

/*
 * These are the function prototypes for this program. Some functions have already been implemented for you,
 * for others you may have to implement part or all of them.
 *
 * Remember, C++ requires you to define your functions or declare a prototype for them earlier in the file than
 * when you call them from your code.
 */
bool canProgramPrintChristmasTree(int height);
int askForChristmasTreeHeight();
// Both these functions have the same name but different parameters. This is called function overloading.
void printCharacter(char character);
void printCharacter(char character, int number);
void printStar(int treeHeight);
/*
 * It is not necessary to give parameters a name in the prototype, but it helps makes the purpose of
 * the function clearer. If the parameters of printCharacter had no names, would you have understood
 * the intent of the function?
 */
void printStem(int);

int main()
{
    int height = askForChristmasTreeHeight();

    printStar(height);

    /*
     * I chose to start my loop counter from zero, but in this case starting it from one
     * may make more sense to some of you, as it would allow us to print (height - row) blanks
     * instead of (height - row - 1) blanks.
     */
    for (int row = 0; row < height; row++)
    {
        // Note that using code (an expression) as an argument for a function is perfectly acceptable
        // We compute height - row - 1 without using an additional variable
        printCharacter(BLANK, height - row - 1);
        printCharacter(FORWARD_SLASH, row);
        printCharacter(VERTICAL_LINE);
        printCharacter(BACKWARD_SLASH, row);

        std::cout << std::endl;
    }

    printStem(height);

    return 0;
}

/*
 * Returns true if the program can print a Christmas tree of the
 * specified height, false otherwise.
 *
 * The program can only print trees with an odd height.
 */
bool canProgramPrintChristmasTree(int height)
{
    /*
     * The modulo operator (%) returns the remainder of division.
     * height % 2 returns the remainder of dividing height by 2.
     */
    if (height % 2 == 0)
    {
        return false;
    }

    return true;
}

/*
 * Asks the user to enter the desired Christmas tree height.
 * Loops until the user enters a number the program is able to print
 * based on the return value of canProgramPrintChristmasTree()
 */
int askForChristmasTreeHeight()
{
    int height;

    do
    {
        std::cout << "Enter a tree height: ";
        std::cin >> height;
    } while (!canProgramPrintChristmasTree(height));

    return height;
}

/*
 * Prints a character once
 */
void printCharacter(char character)
{
    std::cout << character;
}

/*
 * Prints a character a specified number of times
 */
void printCharacter(char character, int number)
{
    for (int i = 0; i < number; i++)
    {
        // Note: You could also call printCharacter(char) here
        std::cout << character;
    }
}

/*
 * Prints the star for a tree of the given height on it's own line
 */
void printStar(int treeHeight)
{
    printCharacter(BLANK, treeHeight - 1);
    printCharacter(STAR);

    std::cout << std::endl;
}

/*
 * Prints the stem for a tree of the given height on it's own line
 */
void printStem(int treeHeight)
{
    printCharacter(BLANK, treeHeight - 1);
    printCharacter(VERTICAL_LINE);

    std::cout << std::endl;
}
