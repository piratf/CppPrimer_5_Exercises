---

Q: Explain each of the following examples, and corrent any problems you detect.

    (a) while (string::iterator iter != s.end()) { /* ... */ }
    (b) while (bool status = find(word)) { /* ... */ }
            if (!status) { /* ... */ }

---

A: in the first example, the `iter` was defined in the conditional statement, so the `iterator` was be initialized each time in condition. It's should be correct like this:

    string::iterator iter = s.begin();      // initialize
    while (iter != s.end()) { /* ... */ }

the second example define a variable `status` in the while loop, but use it outside the loop, It's an error:

    bool status = false;
    while (status = find(word)) { /* ... */ }
        if (!status) { /* ... */ }