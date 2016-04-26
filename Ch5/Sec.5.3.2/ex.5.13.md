---

Q: Each of the programs in the highlighted text on page 184 contains a common programming error. Identify and correct each error.

    (a) unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
        char ch = next_text();
        switch (ch) {
            case 'a': aCnt++;
            case 'e': eCnt++;
            default: iouCnt++;
        }

    (b) unsigned index = some_value();
        switch (index) {
            case 1:
                int ix = get_value();
                ivec[ ix ] = index;
                break;
            default:
                ix = ivec.size() - 1;
                ivec[ ix ] = index;
        }

    (c) unsigned evenCnt = 0, oddCnt = 0;
        int dight = get_num() % 10;
        switch (digit) {
            case 1, 3, 5, 7, 9:
                oddcnt++;
                break;
            case 2, 4, 6, 8, 10:
                evencnt++;
                break;
        }

    (d) unsigned ival = 512, jval = 1024, kval = 4096;
        unsigned bufsize;
        unsigned swt = get_bufCnt();
        switch(swt) {
            case ival:
                bufsize = ival * sizeof(int);
                break;
            case jval:
                bufsize = jval * sizeof(int);
                break;
            case kval:
                bufsize = kval * sizeof(int);
                break;
        }

---

A: Missing `break` of each case.

B: The ix is be initialized in case 1, the flow transfer could bypass the initialization. We could defining `ix` in the block, or define `ix` without the initialization.

C: Error format, it's should be

``` c++
case 1: case 2: case 3: case 4: case 5:
```

The comma can not be the separator at here.

D: The value associated with each `case` must be integral constant expressions.