// Q: Using an if-else statement, write your own version of the program to generate the letter grade from a numeric grade.

#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;

int main() {
    const vector<string> levels = {"F", "D", "C", "B", "A", "A++"};
    string level;
    unsigned score = 0;
    while (~scanf("%u", &score)) {
        assert(score >= 0 && score <= 100);
        if (score - 60 > 100) {
            level = levels[0];
        } else {
            level = levels[(score - 50) / 10];
            if (score != 100) {
                if (score % 10 > 7) {
                    level += '+';
                } else if (score % 10 < 3) {
                    level += '-';
                } else {
                    ;
                }
            } else {
                ;
            }
        }

        cout << "The level of " << score << " is " << level << endl;
    }
    return 0;
}