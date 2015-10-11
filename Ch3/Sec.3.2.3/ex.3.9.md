---

Q: What does the following program do? Is it valid? If not, why not?

    string s;
    cout << s[0] << endl;

---

A: The behavior is undefined, it's invalid. Because the string `s` with default constructor is a empty string, use subscript on a empty string is a undefined behavior.