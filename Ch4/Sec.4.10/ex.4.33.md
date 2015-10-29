---

Q: Using Table 4.12(p. 166) explain what the following expression does:

    someValue ? ++x, ++y : --x, --y

---

A: Because the comma operator have the lowermost precedence, in this expresion the conditonal operator execute first. Judge the value of `someValue`, if true, plus one on x then y, or minus one on x then y.