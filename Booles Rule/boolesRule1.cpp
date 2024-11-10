#include <iostream>
#include <cmath>
using namespace std;

// evaluate 0.0 --> 0.6  e^-x^2 dx using Boole's rule

double calculate(double x) { 
  return 1/exp(x * x);
}

int main() {

  float a = 0.0, b = 0.6, n = 6, h,i, result;
  float y[10];
  int j=0;
   h = (b - a) / n;
  
  // calculate y0, y1, y2, ...,

  for (i = a; i <= b; i=i+0.1) {
    y[j] = calculate(i);
    cout << "f(" << i << ") ="<< "\t\t" << y[j] << endl;
    j++;
  }

  // calculate result

  result = ((2 * h / 45) * ((7 * y[0]) + (32 * y[1]) + (12 * y[2]) + (32 * y[3]) + (14 * y[4]) + (32 * y[5]) + (7 * y[6])));

  // or   = ((2 * h / 45) * (7 *(y[0]+y[6]) + 32 *(y[1]+y[3]+y[5]) + 12 *(y[2]) + 14 * (y[4])));

  cout << "\nResult = " << result << endl;
  return 0;
}
