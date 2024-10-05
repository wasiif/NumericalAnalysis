import math

# Function to evaluate f(x) = x^3 - 2x - 5
def calculate(x):
    return (x * x * x) - (2 * x) - 5

# Bisection method to find the root
def bisection(a, b, tolerance, maxIter):
    iteration = 0
    c = 0

    # Check if the initial guesses bracket the root
    if calculate(a) * calculate(b) > 0:
        print("Invalid values. f(a) and f(b) must have opposite signs.")
        return None

    # Iterative loop until the interval is smaller than tolerance or max iterations reached
    while abs(b - a) > tolerance and iteration < maxIter:
        c = (a + b) / 2

        # Print the current iteration, mid-point, and its function value
        print(f"Iteration {iteration + 1}: Root = {c}\tf(x) = {calculate(c)}")

        # Check if the midpoint is the root
        if calculate(c) == 0.0:
            print(f"Exact root found: {c}")
            return c

        # Decide which subinterval to use in the next step
        if calculate(a) * calculate(c) < 0:
            b = c
        else:
            a = c

        iteration += 1

    # Final approximation after the loop ends
    print(f"Final approximation after {iteration} iterations: Root = {c}\tf(x) = {calculate(c)}")
    return c

# Input values from the user
a = float(input("Enter first guess value (a): "))
b = float(input("Enter second guess value (b): "))
tolerance = float(input("Enter the tolerance (e.g., 0.001): "))
maxIter = int(input("Enter maximum number of iterations: "))

# Call the bisection method
bisection(a, b, tolerance, maxIter)
