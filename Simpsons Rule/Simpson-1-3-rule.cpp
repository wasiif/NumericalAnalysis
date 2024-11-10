#include <iostream>

using namespace std;

// evaluate 0-->6  1/1+x^2 dx using simpson's 1/3 rule
double calculate(double x) { 
  return 1/(1 + x * x);
}

int main() {

  float a = 0, b = 6, n = 6, h, result;
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
  result = h / 3 * ((y[0] + y[6]) + 4 * (y[1] + y[3] + y[5]) + 2 * (y[2] + y[4]));
  cout << "\nResult = " << result << endl;
  return 0;
}
