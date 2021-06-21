# 1. Introduction

## 1.1 Basic Knowledge of C++ 

* C++ is first developed in early 1980s.
* C++ is an extension of C language, with Object-oriented Programming (OOP): class and object.
* General operating systems (OS) are often written in C/C++, and many applications or software are written in C/C++. 
* C++ Standard Library includes predefined classes and functions that can be directly used
  * Learning a programming language contains two parts: 
    * the basic syntax of the language
    * pre-defined classes and functions
* static language VS dynamic language
  * static language: C, C++, Java, C#: have to declare the type of a variable
  * dynamic language: python, JS 

## 1.2 Different Languages and Codes

### 1.2.1 Different Languages

* **Machine Language** only contains 0 and 1, each 0 or 1 is one **bit(b)**, 8 bit together is a **byte(B)**. Programming code at early stage are written in Machine Language. Difficult to read and write by human, difficult to debug.

* **Assembling Language** uses specific key words to replace 0 and 1s, much easier to read and write, but still long to write (directly deal with the memory) 

* **High-programming Language** are programming languages such as C, C++, Python, Java, C# etc., which are very similar to natural language we use every day, much easier to read and write and much shorter than the previous two languages. 

  

### 1.2.2 Different Code

* **Machine Code (Binary Code)**, only contains 0 and 1, is **the only code the computer (Central processing unit (CPU)) can understand**.
* **Source Code** is the code the programmer writes, e.g.: .cpp file for C++ language.



## 1.3 Six Phases for executing C++ code

1. **editing**: programmer writes the source code
2. **preprocessing**: that contains some manipulations before complication. 
3. **compiling**: translates the source code into machine code 
4. **linking**: the compiled code usually contains "holes" since some code belongs to other libraries, A linker links the compiled code in step 3 with other code to make executable code.
5. **loading**: load the program into memory
6. **executing**: executing the code

## 1.3 Tools

1. **Integrated development environment (IDE)**: a software that contains multi-tools for programmers to develop, e.g.: Visual Studio (2019, Community). An IDE contains complier, debugger and other automatic tools to accelerate the programming speed. 
   * Pro: powerful and integrated
   * Con: Huge and heavy
2. Editor: a software that supports text editor. Programmers need to install additional tools such as compiler to execute the code. E.g.: Visual Studio Code, Sublime, Atom.
   *  Pro: Small and light
   * Con: Need to additional tools



