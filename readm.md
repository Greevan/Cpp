# Compiling and Running a C++ Program on Linux

## Step-by-Step Procedure

### 1. Prerequisites
   Ensure you have `g++` installed on your Linux system. You can check and install it using the package manager:

```sh
sudo apt update
sudo apt install g++
```

### 2. Writing Your C++ Program
   Create a C++ file (`example.cpp`) with your desired code. For instance:

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

### 3. Compiling the Program
   Use `g++` to compile the C++ file:

```sh
g++ -o example example.cpp
```

This command tells `g++` to compile `example.cpp` and output an executable named `example`.

### 4. Running the Program
   Execute the compiled program using:

```sh
./example
```

The program should run and display `Hello, World!`.

### 5. Summary
   - Update and install `g++` if not already installed.
   - Write the C++ program and save it to a file (`example.cpp`).
   - Compile the program using `g++ -o example example.cpp`.
   - Run the compiled program with `./example`.