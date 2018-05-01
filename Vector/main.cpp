#include <iostream>
#include "vector.h"

using namespace std;

int main()
{
  int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  Vector<int> v(A, 0, 10);

  int a = v[4];

  cout << a << endl;



  system("pause");

  return 0;
}
