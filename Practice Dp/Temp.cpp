#include <iomanip> 
#include <iostream> 
 
using namespace std; 
 
int main() 
{ 
  double x = 13 / 3; // not what you want 
  double y = 13.0 / 3; 
  double z = 13 / (double)3; 
   
  cout << fixed << showpoint; 
  cout << setprecision(2); 
  cout << x << endl; // prints 4 
  cout << y << endl; // prints 4.33 
  cout << z << endl; // prints 4.33 
   
  return 0; 
} 