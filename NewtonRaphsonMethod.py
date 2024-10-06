import math

# equation f(x) = x^4 - x - 10
def cal_fx(x):
    return (x ** 4) - x - 10

# derivative of f(x) = 4x^3 - 1
def cal_gx(x):
    return 4 * (x ** 3) - 1

# Newton-Raphson Method
def newton_raphson(x0, maxitr):
    i = 1  # Iteration counter
    
    while i <= maxitr:
        # Check for division by zero in the derivative
        if cal_gx(x0) == 0:
            print("Derivative is zero. Cannot continue with Newton-Raphson method.")
            return
        
        # Newton-Raphson formula
        x1 = x0 - cal_fx(x0) / cal_gx(x0)
        
        # Display current iteration results
        print(f"Iteration {i}: x1 = {x1}, f(x1) = {cal_fx(x1)}, f'(x1) = {cal_gx(x1)}")
        
        # Check for convergence (tolerance)
        if abs(cal_fx(x1)) < 0.0001:
            print(f"The root is approximately: {x1}")
            return
        
        # Update x0 for the next iteration
        x0 = x1
        i += 1
    
    print("The method did not converge within the maximum number of iterations.")

# Main function
if __name__ == "__main__":
    # Input from user
    x0 = float(input("Enter the initial guess: "))
    maxitr = int(input("Enter the maximum number of iterations: "))
    
    # Call the Newton-Raphson method
    newton_raphson(x0, maxitr)
