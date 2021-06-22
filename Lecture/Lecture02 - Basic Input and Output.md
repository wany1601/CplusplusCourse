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

the stream insertion symbol `<<` indicates that there will be a stream sending to the `cout` to print. The << also shows the direction of the stream.**

### 1.1.5 String 

A String is a collection of characters that defines between a pair of `""`, like "helloworld", "123", "3 < 0 is correct".



So all together here we first tell the preprocess that we need to use the `<iostream>` header that contains `std::cout`. Then there isthe main() method that plays as the entrance of the entire program, in which there is only one statement, that print a string "HelloWorld" in the console.   



## 1.2 Modifying the code and input

Displaying the result in the console is great, but may not be enough for most of the tasks. We may also want to input something.

C++ also provides the basic console input tool: `cin`, which also belongs to the <iostream> header, so if you want to input through the console, don't forget to have `#include <iostream>` at the very beginning.

If you want to input something, that value should be stored in a variable. 

A variable is a container, that you can put something inside. C++ is a `static` language, which means each variable has a specific `data type`, you can understand it as each container should have a specific shape, and if the shape is not right, you cannot put the value into a container. For example, if you have an `int` type variable, which can only be used to store an integer number, but then you want to put a string into it, C++ will not allow that.

To declare (create) a variable, you need to add specify its data type first, then followed by the variable name. More details about data type and variable will be explained in the next lesson.

Now let's say we just want to ask the user to input an integer number, then multiple it by 2 and then display the result.

First we have to use `cout` to give user a hint before we ask them to input, or user does not know what to do.

```c++
#include <iostream>

int main()
{
    std::cout << "Please input an integer number: ";		// give the user a hint
}
```



Then we need an `int` variable to store the user input and use `cin` to ask the user to input

```c++
#include <iostream>

int main()
{
    int num;											// int variable with no initialized value 

    std::cout << "Please input an integer number: ";
    std::cin >> num;									// store the input into var num 
}
```



Once we have the input number stored, we can calculate the result and store it into another variable:

```c++
#include <iostream>

int main()
{
    int num;
    int result;

    std::cout << "Please input an integer number: ";
    std::cin >> num;
    
    result = num * 2;
}
```



In the end we can print the result by using another `cout`

```c++
#include <iostream>

int main()
{
    int num;
    int result;

    std::cout << "Please input an integer number: ";
    std::cin >> num;
    
    result = num * 2;

    std::cout << num << " * 2 = " << result;					// use one cout to output multi values
}
```



## 1.3 using namespace

In the previous example we have two `cout` and one `cin`, for each of them, we have to add `std::` in front of it to indicate that we are talking about the `cout` and `cin` in the standard namespace. If you have to use many `cin` and `cout`, it will be very inconvenient to add `std::` every time.

There is a way to not write `std::`.

We can add `using namespace std;` after the `#include`, this will be considered as a global namespace for the entire file. So if you are using `cin` and `cout`, then by default it will be the standard `std::cin` and `std::cout`. However, this is a side affect of using `using namespace`, there are chances that we want to use some tools not from the `std` namespace, and setting a global namespace may result  not using the one from the right namespace.

```c++
#include <iostream>
using namespace std;

int main()
{
    int num;
    int result;

    cout << "Please input an integer number: ";
    cin >> num;
    
    result = num * 2;

    cout << num << " * 2 = " << result;
}
```

