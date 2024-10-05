import math

# Function to evaluate f(x) = x^3 - 2x - 5
def fx(x):
    return (x * x * x) - (2 * x) - 5

# False position (Regula Falsi) method
def falsi(x0, x1, maxitr, e):
    # Check if the initial guesses do not bracket the root
    if fx(x0) * fx(x1) > 0:
        print("Wrong guess values.")
        return None

    x2 = 0
    for i in range(maxitr):
        # Compute the new approximation for the root
        x2 = x0 - ((x1 - x0) * fx(x0)) / (fx(x1) - fx(x0))

        # Print the current iteration, approximation, and function value
        print(f"Iteration {i + 1}: x2 = {x2}, f(x2) = {fx(x2)}")

        # If the function value at the new approximation is within tolerance, stop
        if abs(fx(x2)) <= e:
            print(f"The root is: {x2}")
            return x2

        # Decide which subinterval to use in the next step
        if fx(x2) * fx(x0) < 0:
            x1 = x2
        else:
            x0 = x2

    print(f"The method did not converge after {maxitr} iterations.")
    return None

# Input values from the user
x0 = float(input("Enter first guess value (x0): "))
x1 = float(input("Enter second guess value (x1): "))
maxitr = int(input("Enter the number of iterations: "))
e = float(input("Enter the tolerable error (e.g., 0.00001): "))

# Call the falsi method
falsi(x0, x1, maxitr, e)
