---

Q: Which of the following are legal? For those that are illegal, explain why?

    (a) const int buf;      (b) int cnt = 0;
    (c) const int sz = cnt; (d) ++cnt; ++sz;

---

A: 

> + (a) const int buf;     

illegal, not initialized. 
> + (b) int cnt = 0;       

legal.
> + (c) const int sz = cnt;

illegal, cnt is not a const value.
> + (d) ++cnt; ++sz;       

++cnt is legel, ++sz is illegal, shouldn't change the value of const
