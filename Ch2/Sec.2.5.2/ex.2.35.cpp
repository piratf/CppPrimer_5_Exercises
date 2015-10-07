#include <iostream>
#include <typeinfo>
#include <cxxabi.h>
using namespace std;

const string GetClearName(const char* name)
{
    int status = -1;
    char* clearName = abi::__cxa_demangle(name, NULL, NULL, &status);
    const char* const demangledName = (status==0) ? clearName : name;
    string ret_val(demangledName);
    free(clearName);
    return ret_val;
}

int main() {
    const int i = 42;
    auto j = i; const auto &k = i; auto *p = &i;
    const auto j2 = i, &k2 = i;
    cout << GetClearName(typeid(k2).name()) << endl;
}