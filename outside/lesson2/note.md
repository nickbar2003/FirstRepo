  // (4 + 4) -> Evaluates to 8
  // The Same way
  // is_even(c) -> Evaluates to true if c is even

    Pretend you're the compiler
0: Starting code
    int a = (5 + 5);

    if (is_even(a)) {
      // do something
    }

1:
    int a = 10;

    if (is_even(a)) {
      // do something
    }
2:
    int a = 10;

    if (is_even(10)) {
      // do something
    }

3:
    int a = 10;

    if ((10) % 2 == 0) {
      // do something
    }
4:
    int a = 10;

    if (true) {
      // do something
    }
