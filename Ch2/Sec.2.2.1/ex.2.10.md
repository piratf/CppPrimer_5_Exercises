---

Q: What are the initial values, if any, of each of the following variables?

``` c++
    std::string global_str;
    int global_int;

    int main() {
        int local_int;
        std::string local_str;
    }
````

---

A:

``` c++
    std::string global_str;     // initial value is empty string, ""; it's defined by class string;
    int global_int;             // initial value is 0, variables defined out of any function body has the initial value 0, if no class determined it.

    int main() {
        int local_int;          // undefined, this variable inside main function.
        std::string local_str;  // empty string, ""; 
    }
````