# CPP01
(Memory allocation, pointers to members,
references, switch statement)
## Grade: 90/100
![cpp01](https://github.com/user-attachments/assets/2ae8939a-cde7-4ec3-8a07-3016f0fc9d82)

## Overview
CPP01 is a collection of advanced C++ exercises that deepened my understanding of memory management, object-oriented programming, and pointers to member functions. The exercises span various topics—from creating a horde of zombies to designing a simple phonebook and automating complaint messages with Harl. Each exercise was designed to challenge my ability to design robust, efficient code while adhering to strict coding standards.

## Exercises

### 00. BraiiiiiiinnnzzzZ
- **Description:**  

  Implements a `Zombie` class that holds a private `name` attribute and an `announce()` method which prints a message in the format:

  name: BraiiiiiiinnnzzzZ...

  It also includes two functions:
  
- `Zombie* newZombie(std::string name);` creates a zombie on the heap.

- `void randomChump(std::string name);` creates a zombie on the stack, which announces itself immediately.

- **Key Concepts:**  
Dynamic vs. automatic allocation, destructors, memory management.

### 01. Moar brainz!
- **Description:**  
Implements the function `Zombie* zombieHorde(int N, std::string name);` which allocates an array (a "horde") of `N` zombies in a single memory allocation. Each zombie is initialized with the provided name.
- **Key Concepts:**  
Array allocation, object initialization, preventing memory leaks.

### 02. HI THIS IS BRAIN
- **Description:**  
Demonstrates the difference between pointers and references by creating a string variable initialized to `"HI THIS IS BRAIN"`, a pointer to the string, and a reference to the string. The program prints the memory addresses and values of each.
- **Key Concepts:**  
Pointers, references, and basic memory addressing in C++.

### 03. Unnecessary violence
- **Description:**  
Develops two classes, `HumanA` and `HumanB`, each with a `Weapon`.

- `HumanA` is always armed and takes its `Weapon` via its constructor.

- `HumanB` can change its weapon and might be unarmed at times.

Their `attack()` methods display a message in the format:

`name` attacks with their `weapon type`

- **Key Concepts:**  
Composition, passing objects by reference vs. pointer, encapsulation.

### 04. Sed is for losers
- **Description:**  
Creates a program that replaces every occurrence of a string `s1` with `s2` in a given file. The output is written to a new file named `<filename>.replace`.  

**Note:** You are not allowed to use `std::string::replace`.
- **Key Concepts:**  
File I/O, string manipulation, error handling.

### 05. Harl 2.0
- **Description:**  
Implements a `Harl` class with private member functions (`debug()`, `info()`, `warning()`, and `error()`) and a public method `complain(std::string level)`. This method uses pointers to member functions to call the appropriate complaint method based on the level provided.
- **Key Concepts:**  
Pointers to member functions, switch-case alternatives, clean code design.

## Files Structure
Each exercise is contained within its own directory (ex00, ex01, ex02, etc.) and generally includes:
- **Makefile:**  
Automates the build process.
- **main.cpp:**  
Contains the `main()` function and test code.
- **Header Files (.h / .hpp):**  
Class declarations and function prototypes.
- **Source Files (.cpp):**  
Implementations of classes and functions specific to the exercise.

## Compilation
Each exercise can be compiled individually using the provided Makefile. For example:
```bash
cd ex00
make
./executable_filename
```

## What I Learned

**Memory Management:** Understanding when to allocate objects on the heap versus the stack, and managing dynamic arrays.

**Object-Oriented Design:** Designing classes with proper encapsulation, constructors/destructors, and member functions.

**Advanced C++ Features:** Using pointers to member functions for flexible method invocation, and leveraging the STL where appropriate.

**File I/O and String Processing:** Handling file operations and advanced string manipulation without relying on certain library functions.

**Clean Code Practices:** Writing robust, maintainable code while adhering to strict coding standards.

## Conclusion
CPP01 was a challenging and rewarding experience that significantly deepened my understanding of advanced C++ concepts. From managing dynamic arrays of zombies to implementing flexible complaint mechanisms in Harl, each exercise has prepared me for more complex real-world projects.
