#include <iostream>
using std::cin;
using std::cout;

/**
 * Prints a grid or a square of characters:
 * ###
 * ###
 * ###
 *
 * @return int The exit code of the program.
 *
 * @throws None
 */

int main() {

    // Loop through each row
    for (int row = 1; row <= 3; row ++){
        // Loop through each char space in the row
        for (int hashNum = 1; hashNum <= 3; hashNum++) {
            // Print a hash
            cout << "#";
        }
        // Print a new line at the end of each row
        cout << "\n";
    }

}