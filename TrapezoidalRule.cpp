#include <iostream>
#include <cmath>

using namespace std;

// evaluate 0->6 1/1+x^2 dx 
double calculate(double x) 
{
    return 1 / (1 + pow(x, 2));
}

int main() {
    
    float a = 0, b = 6, n = 6, h , result;  // interval [a=0,b=6] into 6 subintervals (n=6).& Step size h
    float y[10];
    int j=0;
    
    h = (b - a) / n;
    
    // calculate y0, y1, y2, ...,
    for(int i = 0; i <= b; i++)
        {
            y[j] = calculate(i);
            cout<<"f("<<i<<") = "<<"\t"<<y[j]<<endl;
            j++;
        }
    // calculate result
    result = h/2 * ((y[0] + y[6]) + 2 * (y[1] + y[2] + y[3] + y[4] + y[5]));
    cout << " Result = " << result << endl;
    return 0;
}
