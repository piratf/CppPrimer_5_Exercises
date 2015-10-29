#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main() {
    std::vector<int> ivec(10);
    std::vector<int>::size_type cnt = ivec.size();

    for (std::vector<int>::size_type ix = 0; 
        ix != ivec.size(); ++ix, --cnt) {
        ivec[ix] = cnt;        
    }

    for (const auto &var : ivec) {
        cout << var << ' ';
    }
    cout << endl;
    return 0;
}