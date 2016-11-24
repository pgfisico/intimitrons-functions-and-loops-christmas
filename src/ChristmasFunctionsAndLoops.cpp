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

    // TODO Implement the code to print each line of the tree
    // Hint: You may want to use a loop for this

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

    // TODO Run the following two lines of code in a loop until a valid height is entered
    // Call canProgramPrintChristmasTree to check the height
    // Hint: You may need to know that in C++, a single ! means NOT
    std::cout << "Enter a tree height: ";
    std::cin >> height;

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
    // TODO Implement this function
}

/*
 * Prints the star for a tree of the given height on it's own line
 */
void printStar(int treeHeight)
{
    // TODO Finish implementing this function
    // Hint: You will need to call both of your printCharacter functions
    // (Okay, you don't need to, but the point of this exercise is to call them)

    std::cout << std::endl;
}

/*
 * Prints the stem for a tree of the given height on it's own line
 */
void printStem(int treeHeight)
{
    // TODO Finish implementing this function
    // Hint: It will be very similar to printStar(), but the stem is a vertical line
    // (Thought question) Could we make a new, single function to replace both printStar() and printStem()?

    std::cout << std::endl;
}
