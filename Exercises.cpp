#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

// Exercise 1
//TODO: Step 4: Return the vector as auto using type deferring, I.e. vector<int> not allowed.
static void helloForLoops()
{
    // TODO: Step 1: Construct a vector with an initial size and each value is zero.
    // Use C++11 auto and decltype to defer the type, I.e. do not use "int".

    // TODO: Step 2: For each element in the vector, set it to the value as the position
    // in the vector, e.g. the first value shall be 1, second is 2 and so on until initial size.

    // TODO Step 3: Print out all the values in the vector on stdout.
    cout << "Exercise 1: ";

    cout << endl;
}

// Exercise 2
// TODO: Step 4: Return the vector as auto using type deferring, I.e. vector<int> not allowed.
static void helloLambdas()
{
    // TODO: Step 1: Add a sort function using the Lambda syntax:
    // [](input_paramter_declaration)->returned_type {body_of_the_lambda_expression}(parameters)
    // The lambda shall take two numbers and return true
    // if the second value is larger than the first value, false otherwise.

    // TODO: Step 2: Use the previous exercise to get a vector.

    // TODO: Step 3: Use sort function from algorithm to sort the vector given the lambda

    // TODO: Step 4: Print contents of the vector again.
    cout << "Exercise 2: ";

    cout << endl;
}

// Exercise 3a
// Write a function that matches contents in a vector given a lambda function.
// TODO: Step 1: Replace void * func with a type of std::function<> that takes
// a uint32_t and returns bool. Also replace void * vec with your vector.
// TODO: Step 2: Change the return type to your vector as well, use the new return syntax.
static void getMatchFromVector(void * func, void * vec)
{
    // TODO: Step 3: For each value in vector, if it matches by the function,
    // add it in the new vector.
    
    // TODO: Step 4: Return your new vector.
}

// Exercise 3b
// Write a function that uses the one in 3a, it shall return all
// numbers in the vector that are greater than the specified value.
// TODO: Step 1: Change signature to follow getMatchFromVector()
static void selectGreaterThan(const uint32_t number, void * vec)
{
    getMatchFromVector( /* TODO: Step 2: Insert lambda here */ NULL, vec );
    cout << "Exercise 3b: ";
    // TODO: Step 3: Print the contents to stdout and return the new vector
    cout << endl;
}

// Exercise 3c
// Write a function that uses the one in 3a, it shall return all
// numbers in the vector that are greater than the specified value.
// TODO: Step 1: Change signature to follow getMatchFromVector()
static void selectLessThan(const uint32_t number, void * vec)
{
    getMatchFromVector( /* TODO: Step 2: Insert lambda here */ NULL, vec );
    cout << "Exercise 3c: ";
    // TODO: Step 3: Print the contents to stdout and return the new vector
    cout << endl;
}

// Exercise 4
// Implement factorial function using constexpr and the new return value syntax
// TODO: Step 1: Change the signature to use constexpr and the new return syntax.
uint32_t factorial(const uint32_t n)
{
    // TODO: Step 2: Implement, e.g. factorial(5) = 5 * 4 * 3 * 2 * 1 = 120.
    // It's a recursive problem and ternary operations must be used with constexpr.
    return 1;
}

// Exercise 5
// TODO: Step 1: Implement the CMyBox class. It should have
// - One default constructor
// - One constructor taking an int (size of array) and populate the array with rnd
// - One copy constructor
// - One move constructor
// - One destructor
static void helloCopyAndMoveConstructs()
{
    cout << "Exercise 5: " << endl;
    //TODO: Step 2: Create an instance of the box, fill it with shit and print it.

    //TODO: Step 3: Copy the box to another instance (use the copy constructor)

    //TODO: Step 4: Move the first box to a third instance (use std::move())

    //TODO: Step 5: If you have time, try to override the = operator to make a move
    // instead of a copy.
}

int main()
{
    // Exercise 1: Ranged for loops
    helloForLoops();

    // Exercise 2: Lambdas
    helloLambdas();

    // Exercise 3: More lambdas
    selectGreaterThan(5, NULL);
    selectLessThan(15, NULL);

    // Exercise 4:
    cout << "Exercise 4: " << factorial(5) << endl;

    // Exercise 5:
    helloCopyAndMoveConstructs();

    return EXIT_SUCCESS;
}
