# GitHub Workshop: Fix One Bug, Make One Commit

Welcome! Each of the 20 C files contains **one small intentional bug**. Pick an assigned file, fix the bug, run it until it prints `PASS`, and contribute your change.

## Before the session
- Have a GitHub account and Git installed (or use GitHub's browser editor if you are not compiling locally).
- For local testing, have a C compiler such as GCC available.
- Workshop repo: https://github.com/byteoftomato/Github-Workshop

## Suggested group workflow (branch + pull request)
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
11. On GitHub, open a pull request from your branch into `main`. Wait for the facilitator to review/merge.

**If you cannot push** because you are not a repository collaborator, fork the workshop repo on GitHub, clone your fork instead, push to your fork, and open a pull request into the original repository's `main` branch.

**Browser-only alternative:** fork the repo, edit your assigned file on your fork, commit to a new branch, then open a pull request. You won't be able to verify `PASS` in the browser editor alone.

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

## Facilitator setup
- Upload the starter files and this README to `main` before attendees clone it.
- Assign a **different** file number to each learner (or each pair).
- Prefer pull requests over all participants committing directly to `main`: the latter requires write access and can create race conditions.
- Demonstrate one pull request, then merge submissions live and refresh the repository's commit history.
- **Do not upload the facilitator answer key** to the student repository until after the workshop.
