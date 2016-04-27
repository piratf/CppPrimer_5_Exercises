// Given two vectors of `int`s, write a program to determine whether one vector is a prefix of the other. For `vector`s of unequal length, compare the number of elements of the smaller `vector`. For example, given the vectors containing 0, 1, 1, and 2 and 0, 1, 1, 2, 3, 5, 8, respectively your program should return true.

#include <cstdio>
#include <vector>
using std::vector;

void inputVec(vector<int> &vec) {
    int n = 0, num = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &num);
        vec.push_back(num);
    }
}

bool isPrefix(vector<int> &vec1, vector<int> &vec2) {
    if (vec1.size() > vec2.size()) {
        vec1.swap(vec2);
    }
    for (int i = 0, bound = vec1.size(); i < bound; ++i) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    freopen("test.5.17.txt", "r", stdin);

    vector<int> vec1, vec2;
    inputVec(vec1);
    inputVec(vec2);
    printf("%s\n", isPrefix(vec1, vec2) ? "true" : "false");
    return 0;
}