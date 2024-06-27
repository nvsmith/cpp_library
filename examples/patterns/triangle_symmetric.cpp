#include <iostream>
using std::cin;
using std::cout;

/**
 * Outputs a symmetric triangle:
 *    ##
 *   ####
 *  ######
 * ########
 *
 * @return int The exit code of the program.
 *
 * @throws None
 */

int main() {

    // Output rows
    for (int row = 1; row <= 4; row++){
        // Output spaces preceding hashes
        for (int spaceNum = 1; spaceNum <= 4 - row; spaceNum++){
            cout << " ";
        }

        // Output hashes
        for (int hashNum = 1; hashNum <= 2 * row; hashNum++){
            cout << "#";
        }

        cout << "\n"; // Move to the next row
    }
    
    return 0;    
}

