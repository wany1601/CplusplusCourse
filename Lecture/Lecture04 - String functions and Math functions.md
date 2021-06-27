# 1. String

String is a collection of characters. String supports index system, each character inside a string has a specific index, start with `0`. In this section we will learn some build-in functions of strings.

String also belongs to the standard namespace, in this case, you should either use `std::string` or add `using namespace std;` at the very beginning of the file. 

| function                              | return                                              | Example                                                      |
| ------------------------------------- | --------------------------------------------------- | ------------------------------------------------------------ |
| `str.length()`                        | the length of a string                              | `"hi".length` returns `2`                                    |
| `str.at(int idx)`                     | the character at a specific position                | `"hi".at(0)` returns `'h'`<br />"hi"[0] also returns `'h'`   |
| `str[int idx] = char c`               | modify a character                                  | `"hi"[1] = 'o'` results `"ho"`                               |
| `str.empty()`                         | if a string is empty                                | `"".empty()` returns `true`<br />`"hi".empty()` returns `false` |
| `str.append(str2)`                    | one string as the join of the two strings           | `"he".append("llo")` returns `"hello"`                       |
| `str.substr(int startIdx, int len)`   | a substring of the first string                     | `"hello".substr(2, 3)` returns `"llo"`                       |
| `str.find(string str2)`               | the location of `str2` in `str`                     | `"hello".find("ll")` returns `2`                             |
| `str.find(string str2, int startIdx)` | the location of `str2` in `str` start at `startIdx` | `"hello".find("l", 3)` returns `3`                           |



Exercise: 

1. input a full name, find the space between, then separate the name as `fname` and `lname`.
2. input a 10-digits telephone number, e.g.: `1112223333`, then convert the number as the format: `111-222-3333`
3. input a 10-digits telephone number, e.g.: `111-222-3333`, then convert the number as the format: `1112223333`
4. input a valid email address, e.g.: `aaa@bbb.com`, then extract the account (`aaa`), the host name (`bbb`) and the extension (`com`)



# 2. Math functions

C++ provides many build-in math functions, if you want to use those functions, you have to first include the `<cmath>` header at the beginning of the file:

| function                         | return                                    | Example                                                 |
| -------------------------------- | ----------------------------------------- | ------------------------------------------------------- |
| `pow(double num1, double num2)`  | num1 ^ num2                               | `pow(2, 4)` returns `16`<br />`pow(9, 0.5)` returns `3` |
| `sqrt(double num)`               | square root of `num`                      | `sqrt(9)` returns `3`                                   |
| `round(double num)`              | round a number                            | `round(3.1)` returns `3`<br />`round(3.6)` returns `4`  |
| `ceil(double num)`               | round a number up                         | `ceil(3.1)` returns `4`<br />`ceil(3.6)` returns `4`    |
| `floor(double num)`              | round a number down                       | `floor(3.1)` returns `3`<br />`floor(3.6)` returns `3`  |
| `fmax(double num1, double num2)` | find the maximum amount `num1` and `num2` | `fmax(1, 2)` returns `2`                                |
| `fmin(double num1, double num2)` | find the minimum amount `num1` and `num2` | `fmin(1, 2)` returns `1`                                |



Exercise: 

1. Given the basic salary, the annual increase ratio and the amount of year, calculate the salary of an employee in the future
2. A parking lot charge $1 per 30 mins, if a car parks more than 30 mins and less than 60 mins, for example 31 mins, it will be charged as 60 mins $2. and the maximum is $15. Write a piece of code to calculate the amount the driver has to pay for a certain amount of parting time.  
