# GitHub Workshop: Fix One Bug, Make One Commit

Welcome! Each of the 20 C files contains **one small intentional bug**. Pick an assigned file, fix the bug, run it until it prints `PASS`, and contribute your change.

## Before starting
- Have a GitHub account and Git installed 
- For local testing, have a C compiler such as GCC available
- Workshop repo: https://github.com/byteoftomato/Github-Workshop

## Suggested steps (branch + pull request)
1. Clone: `git clone https://github.com/byteoftomato/Github-Workshop.git`
2. Enter directory: `cd Github-Workshop`
3. Create a unique branch: `git switch -c fix/01-yourname` (replace `01` and `yourname`).
4. Edit **only your assigned `.c` file**.
5. Compile: `gcc -std=c11 -Wall -Wextra 01_add_two_numbers.c -o exercise01`
6. Run on macOS/Linux: `./exercise01` or on Windows PowerShell: `.\exercise01.exe` (compile there with `-o exercise01.exe`).
7. Verify it prints `PASS`.
8. `git add 01_add_two_numbers.c`
9. `git commit -m "Fix exercise 01: add two numbers"`
10. `git push -u origin fix/01-yourname`
11. On GitHub, open a pull request from your branch into `main`. Wait for me to review/merge.

**If you cannot push** because you are not a repository collaborator, fork the workshop repo on GitHub, clone your fork instead, push to your fork, and open a pull request into the original repository's `main` branch.

## Exercise list

| File | Topic |
|---|---|
| `01_add_two_numbers.c` | add two numbers |
| `02_subtract_two_numbers.c` | subtract two numbers |
| `03_multiply_two_numbers.c` | multiply two numbers |
| `04_integer_division.c` | integer division |
| `05_square_number.c` | square number |
| `06_remainder.c` | remainder |
| `07_is_even.c` | is even |
| `08_is_positive.c` | is positive |
| `09_maximum.c` | maximum |
| `10_minimum.c` | minimum |
| `11_absolute_value.c` | absolute value |
| `12_celsius_to_fahrenheit.c` | celsius to fahrenheit |
| `13_next_number.c` | next number |
| `14_double_number.c` | double number |
| `15_sum_first_n.c` | sum first n |
| `16_triangle_perimeter.c` | triangle perimeter |
| `17_rectangle_area.c` | rectangle area |
| `18_rectangle_perimeter.c` | rectangle perimeter |
| `19_seconds_to_minutes.c` | seconds to minutes |
| `20_last_digit.c` | last digit |
