---

Q: The following expression fails to compile due to operator precedence. Using Table 4.12(p.166), explain why it fails. How would you fix it?

    string s = "word";
    string p1 = s + s[s.size() - 1] == 's' ? "" : "s";

---

A: Because the precedence of `+` is higher than `==`, so the left-hand operand of `==` is the result of `s + s[s.size() - 1]`.

I will rewrite the second line like this:

    string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");