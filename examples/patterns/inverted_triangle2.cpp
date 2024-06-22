#include <iostream>
using std::cin;
using std::cout;

/**
 * TLAP 2-1
 * Outputs an inverted triangle pattern:
 * ########
 *  ###### 
 *   ####  
 *    ##    
 * 
 * @param None
 *
 * @return int The exit code of the program.
 *
 * @throws None
 */

int main() {

    // Loop through each row
    for (int row = 1; row <= 4; row++) {
        // Loop through each space before the hashes
        for (int spaces = 1; spaces < row; spaces++){
            cout << " "; // Output a space
        }

        // Loop through each hash in the row
        for (int hashes = 1; hashes <= 10 - 2 * row; hashes++){
            cout << "#"; // Output a hash
        }

        cout << "\n"; // Output a new line at the end of each row
    }

    return 0;
    
}