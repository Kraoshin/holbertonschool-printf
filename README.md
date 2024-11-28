![Mon image](https://imgur.com/lNtgnEz.png)
                                        
## 📄 Description

This project provides a custom implementation of the `printf` function in C, allowing you to understand and customize how your data is displayed.

## ✨ Features

* **Essential Format Specifiers:**
    * `%c`: Print a single character.
    * `%s`: Print a string.
    * `%%`: Print a literal percent sign.
    * `%d`: Print a decimal integer.
    * `%i`: Print an integer (same as `%d`)
    

* **Variable Arguments:** Handle a dynamic number of arguments with ease.
* **Error Handling:** Gracefully handle invalid format strings.
* **Character Count:** Keep track of your printed characters like a pro.
### 📂 Files main functions
| FILE	|DESCRIPTION|
|:---:|:---:|
|_printf.c	|contains my main _printf function|
|_printf_flowchart.png	|contains in shemas the process of the function|
|main.h	|contains the main structure and the function prototypes|
|man_3_printf.1	|man page of the _printf function
|function_print.c	|contains the print functions requested to display|
|specifier.c	|contains the function that takes a char and compare it with a specifier|
|_putchar.c|contains the function that display|

## 🚀 Getting Started

### 📋 Requirements


‣ Allowed editors: vi,vim or emacs.
‣ All the files will be compiled on Ubuntu 20.04 LTS using gcc.
‣ Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/main/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/main/betty-doc.pl)
‣ You are not allowed to use global variables
‣ No more than 5 functions per file
‣ The prototypes of all your functions should be included in your header file called main.h


### Compilation

Ready to compile? Just use this command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

## Usage

## 1 - Include the header file:

```
#include "main.h"
```

## 2 -Call the _printf function:
```
int _printf(const char *format, ...);
```
## 💻 Example


![Mon image](https://imgur.com/g1bx61j.png)

### Output:

![Mon image](https://imgur.com/nYLd0H1.png)

📘 MAN page
Execution: `man ./man_3_printf`
![Mon image](https://imgur.com/V3Zqf5T.png)

## ⚙️Under the Hood

The _printf function carefully examines the format string, character by character.
Format specifiers (those starting with %) are handled by specialized functions.
Non-format characters are printed directly to the output.                                                                   A custom implementation of va_list and va_start manages those variable arguments

## 🧑💻 Authors
[Killian Kerleau](https://github.com/Kraoshin),
[Charlène MARTIN](https://github.com/Knarta)
