#include <iostream>
#include <cmath>
using namespace std;

// Function for which we want to find the root
double fx(double x) {
    return (x * x * x) - (2 * x) - 5; // Example: f(x) = x^3 - 2x - 5
}

// Implementing the False Position Method
double falsi(double x0, double x1, int maxitr, float e) {
    if (fx(x0) * fx(x1) > 0) {
        cout<<"Wrong guess values."<<endl;
        return 0;
    }

    double x2;
    for (int i = 0; i < maxitr; i++) {
        // Calculate the new approximation using the False Position formula
        x2 = x0 - ((x1 - x0) * fx(x0)) / (fx(x1) - fx(x0));

        // Print the current iteration and the value of x2
        cout << "Iteration " << i + 1 << " x2 = " << x2 << " fx(x2) = " << fx(x2) << endl;

        // Check if the result is within the desired tolerance
        // fabs() function is in <cmath> file whis gives |absolute| value 
        if (fabs(fx(x2)) <= e) {
            cout << "The root is: " << x2 << endl;
            return x2;
        }

        // Update x0 or x1 based on the sign of f(x2)
        if (fx(x2) * fx(x0) < 0)
            x1 = x2;
        else
            x0 = x2;
    }

    cout << "The method did not converge after " << maxitr << " iterations." << endl;
    return 0;
}

int main() {
    double x0, x1;
    int maxitr;
    float e = 0.0001; // Tolerable error

    cout << "Enter first guess value (x0): " << endl;
    cin >> x0;
    cout << "Enter second guess value (x1): " << endl;
    cin >> x1;
    cout << "Enter the number of iterations: " << endl;
    cin >> maxitr;

    // Call the false position method
    falsi(x0, x1, maxitr, e);

    return 0;
}
