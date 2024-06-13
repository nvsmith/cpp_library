#include <iostream>
using std::cin;
using std::cout;

/**
 * Prints characters in a right triangle/half a square:
 * #####
 * ####
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