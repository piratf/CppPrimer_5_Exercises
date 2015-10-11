---

Q: Which, if any, of the following `vector` definitions are in error? For those that are legal, explain what the definition does. For those that are not legal, explain why they are illegal.

    (a) vector<vector<int>> ivec;
    (b) vector<string> svec = ivec;
    (c) vector<string> svec(10, "null");

---

A: 

> + (a) vector<vector<int>> ivec;

    legal, an empty vector contains vector<int> type objects.
> + (b) vector<string> svec = ivec;

    illegal, `ivec` has different type to `svec` and could not be converted.
> + (c) vector<string> svec(10, "null");

    legal, ten strings with value "null" in vactor<string> svec.