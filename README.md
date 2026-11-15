# Cpp-Array-Basics

5 small programs in **C++** that practice the basics of arrays: input and output, smallest and largest value, changing an array inside a function, linear search and reversing in place.

## What these programs practice

- Declaring an array with a constant size (`const int size`) and filling it with a loop
- Passing an array and its size to a function
- Finding the smallest and largest value, and their indices
- Linear search that returns the index, or `-1` if the value isn't found
- Reversing an array in place with two indices (`start` and `end`) and `swap`

## The programs

| File | What it does | Example |
|---|---|---|
| `array_1.cpp` | Reads 5 numbers and prints them one per line | `1 2 3 4 5` prints each on its own line |
| `array_2.cpp` | Finds the smallest and largest value with their indices | `{50, 5, 100, -5, 6, -24}` gives smallest `-24` at index 5 and largest `100` at index 2 |
| `array_3.cpp` | Doubles every element inside a function | `{1, 5, 2, 6, 3}` gives `2 10 4 12 6` |
| `array_4.cpp` | Linear search for a target value | target `8` in `{4, 2, 7, 8, 1, 2, 5}` gives index `3` |
| `array_5.cpp` | Reverses an array in place | `{4, 2, 7, 8, 1, 2, 5}` gives `5 2 1 8 7 2 4` |

## Run any program

```bash
g++ array_1.cpp -o array_1
./array_1
```

On Windows, run `array_1.exe` instead of `./array_1`.

## Known limitations

- **No prompt in `array_1`:** the user isn't told to enter 5 numbers.
- **`array_2` uses two loops,** one for the smallest and one for the largest. One loop could do both. Also, `small_index` and `large_index` have no starting value, and `INT32_MAX` and `INT32_MIN` come from `<cstdint>`, which I haven't included myself.
- **`array_4` returns only the first match.** With duplicates (the array has two `2`s) it never reports the second one.
- **Fixed data:** most programs use a hard-coded array instead of asking the user, and none of them check input.
- **`array_5`:** the labels say "Before Swap" and "After Swap" (should be "Before Reverse" and "After Reverse"), and the last line doesn't end with a newline.
- Arrays have a fixed size. A `vector` would let the size change.

## What I learned

- An array's size must be a constant that the compiler knows, so I use `const int size`.
- When an array is passed to a function, the function works on the original, not on a copy, so changes are visible in `main`.
- Two indices that move toward each other (`start` and `end`) reverse an array without a second array.
- Returning `-1` for "not found" is a standard convention.

---

Part of my learning journey: [github.com/HINDOL-2007](https://github.com/HINDOL-2007)
