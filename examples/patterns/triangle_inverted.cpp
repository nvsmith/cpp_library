#include <iostream>
using std::cin;
using std::cout;
using std::string;

/**
 * TLAP 2-1
 * Outputs an inverted triangle pattern
 * with spacer characters on both sides of the triangle:
 * 
 * ########
 * .######.
 * ..####..
 * ...##...    
 * 
 * @param None
 *
 * @return int The exit code of the program.
 *
 * @throws None
 */

int main() {

    // Loop through each row
    for (int row = 1; row <= 4; row++){
        string line = "";

        // Add leading character
        for (int dotNum = 1; dotNum < row; dotNum++){
            line += ".";
        }
        
        // Loop through each char space in the row
        for (int hashNum = 1; hashNum <= 10 - 2 * row; hashNum++){
            // Print a hash
            line += "#";
        }

        // Add trailing character 
        for (int dotNum = 1; dotNum < row; dotNum++){
            line += ".";
        }
        // Print a new line at the end of each row
        cout << line << "\n";
    }

}