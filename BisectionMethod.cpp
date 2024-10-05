#include <iostream>
#include <cmath> // for fabs

using namespace std;

// Function to evaluate f(x) = x^3 - 2x - 5
double calculate(double x) {
    return (x * x * x) - (2 * x) - 5;
}

// Bisection method to find the root
double bisection(double a, double b, double tolerance, int maxIter) {
    double c;
    int iteration = 0;

    // Check if the initial guesses bracket the root
    if (calculate(a) * calculate(b) > 0) {
        cout << "Invalid values. f(a) and f(b) must have opposite signs." << endl;
        return 0;
    }

    // Iterative loop until the interval is smaller than the tolerance or max iterations are reached
    while (fabs(b - a) > tolerance && iteration < maxIter) {
        c = (a + b) / 2;

        // Print the current iteration, mid-point, and its function value
        cout << "Iteration " << iteration + 1 << ": Root = " << c << "\tf(x) = " << calculate(c) << endl;

        // Check if the midpoint is a root
        if (calculate(c) == 0.0) {
            cout << "Exact root found: " << c << endl;
            return c;
        }

        // Determine which subinterval to select for the next step
        if (calculate(a) * calculate(c) < 0)
            b = c;
        else
            a = c;

        iteration++;
    }

    // Final approximation after the loop ends
    c = (a + b) / 2;
    cout << "Final approximation after " << iteration << " iterations: Root = " << c << "\tf(x) = " << calculate(c) << endl;
    return c;
}

int main() {
    double a, b, tolerance;
    int maxIter;

    // Input values from the user
    cout << "Enter first guess value (a): ";
    cin >> a;
    cout << "Enter second guess value (b): ";
    cin >> b;
    cout << "Enter the tolerance (e.g., 0.001): ";
    cin >> tolerance;
    cout << "Enter maximum number of iterations: ";
    cin >> maxIter;

    // Call the bisection method
    bisection(a, b, tolerance, maxIter);

    return 0;
}
