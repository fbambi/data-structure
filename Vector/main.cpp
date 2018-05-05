#include <iostream>
#include "vector.h"

using namespace std;

int main()
{
  int A[10] = {1, 2, 4, 4, 5, 6, 7, 8, 10, 10};
  Vector<int> v(A, 0, 10);

  int n = v.uniquify();
  cout << n << endl;

  system("pause");

  return 0;
}
