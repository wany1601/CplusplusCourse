# 1. Identifier

`Identifiers` are the name for the variable or methods and so on. In general you have to follow the following rules while giving an identifier:

* C++ is case-sensitive.
* Syntax
  * Names can contain **letters, digits and underscores**
  * Names must begin with a letter or an underscore (_)
  * Names cannot contain whitespaces or special characters like !, #, %, etc.
  * Reserved words (like C++ keywords, such as `int`) cannot be used as names
* Self-documenting
  * Identifiers should also be meaningful, so people can understand what you is the variable or what does the method do when they read the identifier.
* Stable style
  * Use CamelCase for all names. Start types (such as classes, structs, and typedefs) with a capital letter, other names (functions, variables) with a lowercase letter. You may use an all-lowercase name with underscores if your class closely resembles an external construct (e.g., a standard library construct) named that way.
  * C++ interfaces are named with a `Interface` suffix, and abstract base classes with an `Abstract` prefix.
  * Member variables are named with a trailing underscore.
  * Accessors for a variable `foo_` are named `foo()` and `setFoo()`.
  * Global variables are named with a `g_` prefix.
  * Static class variables are named with a `s_` prefix.
  * Global constants are often named with a `c_` prefix.
  * If the main responsibility of a file is to implement a particular class, then the name of the file should match that class, except for possible abbreviations to avoid repetition in file names (e.g., if all classes within a module start with the module name, omitting or abbreviating the module name is OK). Currently, all source file names are lowercase, but this casing difference should be the only difference.
  * from https://manual.gromacs.org/documentation/5.1-current/dev-manual/naming.html

# 2. Primitive Data Types

C++ is a static programming language, which means it is very strict with data types. A programming language usually supports integral value, floating value, boolean value。

C++ supports: 

| Data Type                | Size (B) | Range                           |
| ------------------------ | -------- | ------------------------------- |
| **`char`**               | 1        | -127 to 127                     |
| unsigned char            | 1        | 0 to 255                        |
| `short int`              | 2        | -32,768 to 32,768               |
| `unsigned short int`     | 2        | 0 to 65535                      |
| **`int`**                | 4        | -2,147,483,648 to 2,147,483,647 |
| `unsigned int`           | 4        | 0 to 4,294,967,795              |
| `long int`               | 8        | -2,147,483,648 to 2,147,483,647 |
| `unsigned long int`      | 8        | 0 to 4,294,967,295              |
| `long long int`          | 8        | -(2^63) to (2^63)-1             |
| `unsigned long long int` | 8        | 0 to (2^64)                     |
| **`float`**              | 4        |                                 |
| **`double`**             | 8        |                                 |
| `long double`            | 12       |                                 |
| `wchar_t`                | 2 or 4   |                                 |
| **`bool`**               | 1        | `true` and `false`              |



## 2.1 Auto Conversion

If you add two `int` numbers, the result should be `int`, e.g.: `1 + 2 = 3`. If you add two `double` numbers, the result should be `double`, e.g.: `3.1 + 4.2 = 7.3`. However, if you have an `int` number add a `double` number, the situation is different, e.g.: `1 + 2.3`, the result here should be `3.3`, a double value. Now we would like to go deeper to see why C++ gives us this result: Generally C++ does not like to do any operation with two values with different types, so it will always cast the data type to the same type before the calculation. Here C++ has two choices: (1) cast the `int` into `double` so `1` will be `1.0`, or (2) cast the `double` into `int` so 2.3 will be `2`. C++ will choose the first one, since `double` is more accurate than `int`. Casting an `int` to `double` will not change the value just adding  trailing zeros, while casting an `double` to `int` may risk of losing data. Since computer always care about the accuracy, so casting `int` into `double` is always safer.  C++ will automatically cast the `int` into `double` so the operation will be `1.0 + 2.3` and the result is `3.3`.

In general, C++ will always casting something with smaller size to something with bigger size, e.g.: `short + int = int`, `int + long = long`, `char + int = int` etc. Also, C++ will always casting integral into floating, e.g.:  int + float = float, 



## 2.2 Manual Conversion

TODO

# 3. Arithmetic Operation

C++ supports the basic arithmetic operations such as

* addition: +
* subtraction: -
* multiplication: *
* division: \
* modulo: %

Pay attention to the data type when do arithmetic calculation. For example: 10 / 3 = 3, but 10.0 / 3 = 3.3333 

## 3.2. Advanced Arithmetic Operation

C++ also supports advanced arithmetic operation. There are two levels of advanced arithmetic operation:

### 3.2.1. Level 1

In many situations we have to modify a variable and update its value. For example, you want to sell hotdogs, so you have a variable `balance` to represent the balance of your cashbox. You put $100 in the box. When a customer buy a hotdog, $2 will be payed so you will modify the `balance`: `balance = balance + 2;`. This statement can be replaced by `balance += 2`. 

Similarly, C++ also supports `-=`, `*=`, `\=`, `%=`.



### 3.2.2 Level 2

In some situations, we want to modify a variable in a specific way: add it by 1 or subtract it by 1. For example, a count up or a count down clock.

C++ supports ++ and --, which will increase/decrease the variable by 1.

If a statement only does one operation, which increasing/decreasing a variable by 1, you can put the ++/-- before the variable or after the variable, there is no difference between them. For example: `++time;` is the same as `time++;`.

If a statement contains more than one operation, which increasing/decreasing a variable by 1, the location of ++/-- variable matters.

```c++
int num = 1;
cout << ++num;			// print 2, and num equals 2

int num2 = 1;
cout << num2++;			// print 1, and num2 equals 2
```



Basically, when you have more than one operations in one statement, 

* if the ++/-- locates before the variable (`++num`), C++ will first update the variable before other operations. 
* if the ++/-- locates after the variable (`num2++`), C++ will update the variable after finishing other operations. 
