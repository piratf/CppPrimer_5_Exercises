---

Q: Corrent the errors in each of the following code fragments:

    (a) if (ival1 != ival2)
            ival1 = ival2
        else ival1 = ival2 = 0;
    (b) if (ival < minval)
            minval = ival;
            occurs = 1;
    (c) if (int ival1 = get_value()) 
            cout << "ival = " << ival << endl;
        if (!ival)
            cout << "ival = 0\n";
    (d) if (ival = 0)
            ival = get_value();

---

A: 

    (a) if (ival1 != ival2) {
            ival1 = ival2;
        }
        else {
            ival1 = ival2 = 0;
        }
    (b) if (ival < minval) {
            minval = ival;
            occurs = 1;
        }
    (c) if (int ival1 = get_value()) {
            cout << "ival = " << ival << endl;
            if (!ival) {
                cout << "ival = 0\n";
            }
        }
    (d) if (ival == 0) {
            ival = get_value();
        }