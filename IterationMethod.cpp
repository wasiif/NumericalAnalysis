#include <iostream>
#include <cmath>

using namespace std;

double g(double x) {
    // Example: Solving f(x) = 2x^3 - 2x - 5, so g(x) = ((2x + 5)/2)^1/3 
    double temp = ((2 * x + 5)/2);
    return pow(temp,(0.1/0.3));  
}

void iterationMethod(double x0, double tolerance, int maxIter) {
    double x1;  
    int i = 1;


    while (i <= maxIter) {
        x1 = g(x0);  
    
        cout <<"Iteration " << i << "\t\t" <<"x = " << x1 << "\t\t" <<"g(x) = " << g(x1) << endl;
 
        if (fabs(x1 - x0) < tolerance) {
            cout << "Converged to root: " << x1 << " after " << i << " iterations." << endl;
            return;
        }

        x0 = x1;
        i++;
    }

    cout << "Method did not converge after " << maxIter << " iterations." << endl;
}

int main() {
    double x0 = 1.5, tolerance = 0.0001;
    int maxIter;

    // cout << "Enter initial guess: ";
    // cin >> x0;
    // cout << "Enter tolerance (e.g., 0.0001): ";
    // cin >> tolerance;
    cout << "Enter maximum number of iterations: ";
    cin >> maxIter;

    iterationMethod(x0, tolerance, maxIter);

    return 0;
}
