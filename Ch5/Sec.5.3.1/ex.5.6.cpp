// Q: Rewrite your grading program to use the conditional operator (& 4.7, p.151) in place of the if-else statement.

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

        level = (score - 60 > 100) ? levels[0] : levels[(score - 50) / 10];
        level += (score == 100) ? ""
                 : (score % 10 > 7) ? "+"
                 : (score % 10 < 3) ? "-"
                 : "";

        cout << "The level of " << score << " is " << level << endl;
    }
    return 0;
}