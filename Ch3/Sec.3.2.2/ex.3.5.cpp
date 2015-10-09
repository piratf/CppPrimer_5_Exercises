// Q: Write a program to read strings from the standard input, concatenating what is read into one large string. Print the concatenated string. Next, change the program to separate adjacent input strings by the space.

#include <iostream>
#include <vector>
using namespace std;

vector<string> split(const string& src) {
    string var;
    vector<string> ans;
    for (string::size_type i = 0; i < src.length(); ++i) {
        if (src[i] == ' ') {
            if (var != "") {
                ans.push_back(var);
                var = "";
            }
        }
        else {
            var += src[i];
        }
    }
    if (var != "") {
        ans.push_back(var);
    }
    return ans;
}

int main() {
    string sum, var;
    /** concatenation part */
    // while (cin >> var) {
    //     sum += var;
    // }
    // cout << sum << endl;

    /** split part */
    getline(cin, sum);
    vector<string> strArr = split(sum);
    cout << "Get " << strArr.size() << " strings from the long string" << endl;
    for (string str : strArr) {
        cout << str << endl;
    }
    return 0;
}