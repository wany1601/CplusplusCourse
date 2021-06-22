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

# Data Types

C++ is a static programming language, which means it is very strict with data types. A programming language usually supports integral value, floating value, boolean value

C++ supports: 

| Data Type                | Size (B) | Range                           |
| ------------------------ | -------- | ------------------------------- |
| char                     | 1        | -127 to 127                     |
| unsigned char            | 1        | 0 to 255                        |
| `short int`              | 2        | -32,768 to 32,768               |
| `unsigned short int`     | 2        | 0 to 65535                      |
| **`int`**                | 4        | -2,147,483,648 to 2,147,483,647 |
| `unsigned int`           | 4        | 0 to 4,294,967,795              |
| `long int`               | 8        | -2,147,483,648 to 2,147,483,647 |
| `unsigned long int`      | 8        | 0 to 4,294,967,295              |
| `long long int`          | 8        | -(2^63) to (2^63)-1             |
| `unsigned long long int` | 8        | 0 to (2^64)                     |
| `float`                  | 4        |                                 |
| `double`                 | 8        |                                 |
| `long double`            | 12       |                                 |
| `wchar_t`                | 2 or 4   |                                 |



