# Algorithms for Each method.

# Numerical Analysis Methods

This repository contains implementations of various numerical methods for solving mathematical problems like root-finding, integration, and differential equations.

## Methods Included
- Bisection Method
- False Position Method
- Newton-Raphson Method
- Secant Method
- Trapezoidal & Simpson’s Rules
- Gauss-Seidel & Jacobi Methods
- Euler's & Runge-Kutta Methods

# Algorithms

## Bisection Method Algorithm

1. **Input**:
   - Two initial guesses: `a` and `b` such that \( f(a) \) and \( f(b) \) have opposite signs.
   - A tolerance value `ε` (the desired accuracy).
   - Maximum number of iterations `max_iter`.

2. **Step 1** (Check Bracketing):
   - Verify that \( f(a) \cdot f(b) < 0 \). If not, return an error as the root is not guaranteed within the interval.

3. **Step 2** (Initial Midpoint Calculation):
   - Calculate the midpoint: \( c = \frac{a + b}{2} \).

4. **Step 3** (Convergence Check):
   - If \( |f(c)| \leq ε \), return `c` as the root.

5. **Step 4** (Subinterval Selection):
   - If \( f(a) \cdot f(c) < 0 \), set `b = c`.
   - Otherwise, set `a = c`.

6. **Step 5** (Iteration Loop):
   - Repeat **Step 2** to **Step 4** until:
     - The absolute difference between `a` and `b` is less than `ε`, or
     - The maximum number of iterations is reached.

7. **Output**:
   - The final value of `c` is the approximate root, or an error message if the method didn't converge within the allowed iterations.

## False Position Method Algorithm

1. **Input**:
   - Two initial guesses: `x0` and `x1` such that \( f(x0) \cdot f(x1) < 0 \).
   - A tolerance value `ε` (the desired accuracy).
   - Maximum number of iterations `max_iter`.

2. **Step 1** (Check Bracketing):
   - Verify that \( f(x0) \cdot f(x1) < 0 \). If not, return an error as the root is not guaranteed.

3. **Step 2** (Calculate the New Estimate):
   - Compute the new root estimate:
     \[
     x2 = x0 - \frac{f(x0) \cdot (x1 - x0)}{f(x1) - f(x0)}
     \]

4. **Step 3** (Convergence Check):
   - If \( |f(x2)| \leq ε \), return `x2` as the root.

5. **Step 4** (Subinterval Selection):
   - If \( f(x0) \cdot f(x2) < 0 \), set `x1 = x2`.
   - Otherwise, set `x0 = x2`.

6. **Step 5** (Iteration Loop):
   - Repeat **Step 2** to **Step 4** until:
     - The function value \( f(x2) \) is close enough to zero, or
     - The maximum number of iterations is reached.

7. **Output**:
   - The final value of `x2` is the approximate root, or an error message if the method didn’t converge within the allowed iterations.

#

## Contributing
Contributions and improvements are welcome! Feel free to submit pull requests or open issues.
 
