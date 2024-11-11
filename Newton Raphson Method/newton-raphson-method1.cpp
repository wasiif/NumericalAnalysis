#include <iostream>
#include <cmath> 

using namespace std;

// equation f(x) = x^4 - x -10 
double cal_fx(double x) {
    return (x * x * x * x) - x - 10;
}

// derivative of f(x) = 4x^3 - 1
double cal_gx(double x) {
    return 4 * (x * x * x) - 1;
}

int main() {
    double x0, x1;
    int i = 1, maxitr;
    
    cout << "Enter the initial guess: ";
    cin >> x0;
    cout << "Enter the maximum number of iterations: ";
    cin >> maxitr;
    
    do {
        if (cal_gx(x0) == 0) {
            cout << "Derivative is zero. Cannot continue with Newton-Raphson method." << endl;
            return -1;
        }

        // Newton-Raphson formula
        x1 = x0 - cal_fx(x0) / cal_gx(x0);
        
        // Display current iteration results
        cout << "Iteration " << i << ": x1 = " << x1 
             << ", f(x1) = " << cal_fx(x1) 
             << ", f'(x1) = " << cal_gx(x1) << endl;
             
        x0 = x1;  // Update x0 for the next iteration
        i++;
        
    } while (fabs(cal_fx(x1)) > 0.0001 && i <= maxitr);
    
    if (i > maxitr) {
        cout << "The method did not converge within the maximum number of iterations." << endl;
    } else {
        cout << "The root is approximately: " << x1 << endl;
    }
    
    return 0;
}
