#include <iostream>
using std::cin;
using std::cout;

/**
 * Prints a sideways triangle of characters:
 * #
 * ##
 * ###
 * ##
 * #
 *
 * @return int The exit code of the program.
 *
 * @throws None
*/

int main() {

    // Loop through each row
    for (int row = 1; row <= 7; row++){
        // Loop through each char space in the row
        // quantity of char space = [3 - |3-(current row number)|]
        for (int hashNum = 1; hashNum <= 3 - abs(3 - row); hashNum++){
            // Print a hash
            cout << "#";
        }
        // Print a new line at the end of each row
        cout << "\n";
    }

}