# 0x18-dynamic_libraries

This directory contains the source code and examples for the `0x18-dynamic_libraries` project. The project focuses on understanding dynamic libraries in C programming.

## Table of Contents

- [Introduction](#introduction)
- [Installation](#installation)
- [Usage](#usage)
- [Examples](#examples)
- [Contributing](#contributing)

## Introduction

Dynamic libraries, also known as shared libraries, are a way to package reusable code that can be loaded and linked at runtime by programs. They provide a modular approach to software development, allowing developers to distribute and update libraries independently of the applications that use them.

This project explores the concepts and usage of dynamic libraries in C programming. It covers creating and using dynamic libraries, dynamic linking, and dynamic loading.

## Installation

To use the code in this repository, follow these steps:

1. Clone the repository to your local machine using the following command:

```bash
git clone https://github.com/your-username/0x18-dynamic_libraries.git
```

2. Navigate to the project directory:

```bash
cd 0x18-dynamic_libraries
```

3. Compile the source code files using the provided `Makefile`:

```bash
make all
```

This will compile the source code and generate the necessary dynamic library files.

## Usage

The compiled dynamic library files can be used in different ways:

- **Static linking:** You can statically link the dynamic library with your C program by specifying the library during the compilation process. For example:

```bash
gcc -Wall -Werror -Wextra -pedantic my_program.c -o my_program -L/path/to/library -lmylibrary
```

- **Dynamic linking:** You can dynamically link the library at runtime using the `-l` option and `-L` option to specify the library's location. For example:

```bash
gcc -Wall -Werror -Wextra -pedantic my_program.c -o my_program -ldl
```

- **Dynamic loading:** You can load the library dynamically during the program's execution using functions like `dlopen()`, `dlsym()`, and `dlclose()`. This allows for more flexibility in loading and using libraries.

## Examples

The repository provides several examples to demonstrate the usage of dynamic libraries. Each example is contained in a separate directory and includes a `README.md` file explaining the purpose and usage.

Here is a list of the available examples:

- `0-printf_lib`: Example demonstrating how to create a dynamic library with a custom `printf` function.

Feel free to explore the examples and modify the code to experiment with dynamic libraries.

