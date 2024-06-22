#include <iostream>
using std::cin;
using std::cout;

/**
 * TLAP 2-2
 * Outputs a diamond pattern:
 * 
 *    ##
 *   ####
 *  ######
 * ########
 * ########
 *  ######
 *   ####
 *    ##
 *
 * @return int The exit code of the program.
 *
 * @throws None
 */

int main() {

    // Output the upper half
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
    
    // Output the lower half
    for (int row = 1; row <= 4; row++){

        // Output spaces preceding hashes
        for (int spaceNum = 1; spaceNum <= row - 1; spaceNum++){
            cout << " "; 
        }

        // Output hashes
        for (int hashNum = 1; hashNum <= 10 - 2 * row; hashNum++){
            cout << "#";
        }
        cout << "\n"; // Move to the next row
    }

    return 0;

}