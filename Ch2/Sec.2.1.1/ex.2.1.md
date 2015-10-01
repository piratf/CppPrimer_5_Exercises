---

Q: What are the differences between `int`, `long`, `long long`, and `short`? Between an unsigned and a signed type? Between a float and a double?

---

A: `int` is the most commonly used type to represent a integer. `long` has the larger Minimum Size with `int`, but on many implementation, `long` has the same length of `int`. `long long` is the better solution when we need a large number.

unsigned type use their bits to hold value greater than or equal to zero, signed is "balance" in abstract said, it's should be evenly divided between positive and negative values, standard said.

`float` has fewer bits of minimum size with `double`, it's usually has shorter length than `double` in real world too. but it's not even faster in many implementation, so frequently, `double` is the better one for floating-point number.