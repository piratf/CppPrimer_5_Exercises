// Q: Rewrite the grade clustering program from & 3.3.3(p.104) using iterators instead of subscripts.

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main() {
    freopen("ex.3.25.txt", "r", stdin);
    std::vector<int> grades;
    std::vector<int> cluster(11);
    int grade;
    while (std::cin >> grade) {
        grades.push_back(grade);
    }

    auto it = cluster.begin();
    for (auto num : grades) {
        ++*(it + (num / 10));
    }

    for (auto num : cluster) {
        cout << num << ' ';
    }
    cout << endl;
    return 0;
}