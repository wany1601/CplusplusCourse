# 1. Basic Input and Output

## 1.1 First piece of C++ code and Output 

```c++
// hello_world.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

int main()
{
    std::cout << "HelloWorld";
}
```

### 1.1.1 Comments

Comments are written for humans to read, and compiler will ignore it. There are two kinds of comments:

1. Single-line comment: starts with `//` and end at the end of the line. 
2. Multi-line comment: between `/*` and `*/`, can cross lines.

### 1.1.2 include

Lines that begin with `#` are processed by the preprocessor (Step 2) before the program is compiled. `#include` notifies the preprocessor to include in the program the contents of the input/output stream header `<iostream>`. This header is a file contains information the compiler uses when compiling any program that outputs data to the screen or inputs data from the keyboard. Usually the header will be placed between a pair of `<>` if the header is pre-defined by C++ and a pair of `""` if the header is defined by user.

### 1.1.3 main()

A function is a piece of code that can achieve a specific task. (Function always follows by a pair of `()`). A program may contain many functions, main() is the entrance of the program. In the other word, C++ programs always begin executing at function main() no matter where the main() function is defined.

A function contains two parts: 

* header: indicate the return type of the function, the name of the function and the input of a method. You can understand the header as the outlook of a function. If you consider a function as a machine, the header is the outlook of the machine, maybe from the outlook you can figure out that the machine is called a popcorn machine, and there are two entrances, one to add corns, and the other to add sugar/salt and butter. So you can kind of figure out how the machine works even though you don't know how the machine works.  
* body: contains the details of the implementation of the function. If the method is a machine, then the body is the place that contains all screws and nuts. The body of a function is always defined between a pair of `{}` after the header of a function.

### 1.1.4 statement

The `main()` method contains only one line of code `std::cout << "HelloWorld";`. This line of code is a statement. A statement is a basic unit that only perform a tiny action in C++ program. Most C++ statements end with `;`.

The statement here we have is a standard output statement `cout`, the `std` before it indicate its `namespace`. You can understand it as `cout in the std`. The reason to use a namespace is because a much more complicated program may contain many different `cout`, then when we use `cout`, we want to indicate that this is the `std` (standard) namespace. `std::cout` will print whatever after it in the console. You can print many things with one `std::cout`, linked with `<<`, e.g.: `std::cout << "My name is " << "Yi" <<" " << "Wang";`

### 1.1.5 String 

A String is a collection of characters that defines between a pair of `""`, like "helloworld", "123", "3 < 0 is correct".



So all together here we first tell the preprocess that we need to use the `<iostream>` header that contains `std::cout`. Then there isthe main() method that plays as the entrance of the entire program, in which there is only one statement, that print a string "HelloWorld" in the console.   



## 1.2 Modifying the code and input

