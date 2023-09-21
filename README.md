# C Printf Custom Implementation

![License](https://img.shields.io/badge/license-MIT-blue.svg)

This project develops a custom implemetation of the standard C printf function. This project aims to demonstrate the inner workings of the `printf` function and provide a simple, educational implementation. This is a group project conducted during ALX software engineering course, cohort 18.

## Contributors
- [James Nyamweya](https://github.com/JamesNyamweya) - Implemented to logics for format specifiers '%d', '%s', '%c', '%f', and '%x'
- [Ken Wakura Mbuya](https://github.com/wakura-mbuya) - Fixed a critical bug in the formatting logic and ensured the project is properly documented.


## Table of Contents
- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Building](#building)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Features

- Basic formatting options: `%d`, `%s`, `%c`, `%f`, `%x`, and more.
- Handles the formart specifiers
	- %
	- c, s, d, i, b, u, o, x, X, p, l, h, r, R
- Uses a local buffer of 1024 chars in order to minimize calling "write" function
- Handles the following flag characters for non-custom conversion specifiers:
	- +
	- space
	- #
	- -
- Width and precision specifiers.
- Variable argument support.
- Customizable output stream (e.g., print to a file).

## Getting Started

These instructions will help you get a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites

You will need a C compiler to build and run this project. You can use GCC on Linux or MinGW on Windows. Make sure you have it installed before proceeding.

### Building

To build the project, follow these steps:

1. Clone the repository to your local machine:

   ```bash
   git clone https://github.com/jamesNyamweya/printf.git

## Usage
You can use the custom printf function just like the standard printf function. Include the main.h header file and the other source files and call the _printf function with the desired format and arguments.

```c
#include "main.h"

int main() {
    int num = 42;
    _printf("This is a number: %d\n", num);
    return 0;
}
```

## Contributing
If you would like to contribute to this project, please get in touch with either James Nyamweya or Ken Wakura.

## License
This project is licensed under the MIT License
