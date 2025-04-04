# C++ Example Project

This project is a simple C++ example that demonstrates the use of CMake, GoogleTest, and includes a basic fraction class implementation.

## Project Structure

- `src/`: Contains the main source code
  - `fraction.h` and `fraction.cpp`: Implementation of the fraction class
  - `main.cpp`: Main program entry point
- `test/`: Contains the unit tests
  - `test_fraction.cpp`: Unit tests for the fraction class
- `cmake/`: Contains CMake-related files
- `Dockerfile`: Contains instructions for building and running the project in a Docker container

## Building the Project

1. Make sure you have CMake installed on your system.
2. Clone the repository:
   ```
   git clone https://github.com/GopalKrishna1999/Test-tool.git
   cd Test-tool
   ```
3. Create a build directory and run CMake:
   ```
   mkdir build
   cd build
   cmake ..
   ```
4. Build the project:
   ```
   make
   ```

## Running the Tests

After building the project, you can run the tests using:
```
make test
```

## Running the Program

After building the project, you can run the main program using:
```
./src/cpp-example
```

## Using Docker

To build and run the project using Docker:

1. Build the Docker image:
   ```
   docker build -t cpp-example .
   ```
2. Run the Docker container:
   ```
   docker run -it cpp-example
   ```

## License

This project is licensed under the MIT License. See the LICENSE file for details.
