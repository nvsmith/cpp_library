#include <iostream>
using std::cin;
using std::cout;

/**
 * Prints characters in a right triangle shape or half a square 
 * or prints a grid of descending character length.
 * 
 * @return int The exit code of the program.
 *
 * @throws None
 * source: Think Like a Programmer Ch. 2
 */

int main() {

    // Loop through each row
    for (int row = 1; row <= 5; row++){
        // Loop through each char space in the row
        // char space = 6 - (current row number)
        for (int hashNum = 1; hashNum <= 6 - row; hashNum++){
            // Print a hash
            cout << "#";
        }
        // Print a new line at the end of each row
        cout << "\n";
    }


}