#include <iostream>
using std::cin;
using std::cout;

/**
 * Prints numbers in descending order, one number per line:
 * 3
 * 2
 * 1
 *
 * @return int The exit code of the program.
 *
 * @throws None
 * source: Think Like a Programmer Ch. 2
*
*/

int main() {

    // Loop through each row
    for (int row = 1; row <= 3; row ++){
        // Print the number 6 minus the current row number
        cout << 4 - row << "\n";
    }
    
}