#include <iostream>
using std::cin;
using std::cout;

/**
 * Prints a line of characters to the console.
 *
 * @return int The exit code of the program.
 *
 * @throws None
 * 
 * source: Think Like a Programmer Ch. 2
 */
int main() {

    // Loop through each char space in the row
    for (int hashNum = 1; hashNum <= 5; hashNum++) {
        // Print a hash
        cout << "#";
    }
    cout << "\n";
    
}