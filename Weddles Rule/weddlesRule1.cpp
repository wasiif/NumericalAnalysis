#include <iostream>

using namespace std;

// evaluate 0 --> 6  1/1+x dx using Weddle's rule
double calculate(double x) { 
  return 1/(x + 1);
}

int main() {

  float a = 0, b = 6, n = 6, h,i, result;
  float y[10];
  int j=0;
   h = (b - a) / n;
  
  // calculate y0, y1, y2, ...,
  
  for (i = a; i <= b; i++)
  {
    y[j] = calculate(i);
    cout << "f(" << i << ") ="<< "\t\t" << y[j] << endl;
    j++;
  }
  
  // calculate result
  result = ((3 * h / 10) * (y[0] + (5 * y[1]) + y[2] + (6 * y[3]) + y[4] + (5 * y[5]) + y[6]));
 
  cout << "\nResult = " << result << endl;
  return 0;
}
