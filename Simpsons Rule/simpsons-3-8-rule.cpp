#include <iostream>

using namespace std;

// evaluate -3 --> 3  x^4 dx using simpson's 3/8 rule
double calculate(double x) { 
  return (x * x * x * x);
}

int main() {

  float a = -3, b = 3, n = 6, h, result;
  float y[10];
  int i,j=0;

  h = (b - a) / n;
  
  // calculate y0, y1, y2, ...,

  for (i = a; i <= b; i++) {
    y[j] = calculate(i);
    cout << "f(" << i << ") ="<< "\t\t" << y[j] << endl;
    j++;
  }

  // calculate result

  result = (3*h / 8) * ((y[0] + y[6]) + 3 * (y[1] + y[2] + y[4] + y[5]) + 2 * (y[3]));
  
  cout << "\nResult = " << result << endl;
  return 0;
}
