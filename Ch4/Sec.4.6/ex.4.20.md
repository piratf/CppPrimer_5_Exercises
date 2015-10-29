---

Q: Assuming that `iter` is a `vector<string>::iterator`, indicate which, if any, of the following expressions are legal. Explain the behavior of the legal expressions and why those that aren't legal are in error.

    (a) *iter++;        (b) (*iter)++   (c) *iter.empty()
    (d) iter->empty();  (e) ++*iter;    (f) iter++->empty();

---

A: 

> + (a) *iter++;        

legal, get the object of current postion, then move iter to next postion.
> + (b) (*iter)++  

illegel, get the object of current postion, then use the `string` object as the operand of `++`.

but `string` can't do that.
> + (c) *iter.empty()

illegal, `dot` operator has higher precedence than `*`, but iter is an iterator, which has no members.
> + (d) iter->empty();  

legal, judge whether the `string` at iter position is empty.
> + (e) ++*iter;   

illegal, because the association of `iter` is from right to left, to the operate of `*` been evaluate first. the result is a string object, can not be the operand of `++`.
> + (f) iter++->empty();

illegal, iter has no member.
the behavoir is `->` try to fetch the left-hand operand, if success then call the member function, after that `iter` increase itself.