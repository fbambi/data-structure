#pragma once

#include <iostream>
using namespace std;

template <typename T>
void Vector<T>::copyFrom(T const *A, Rank lo, Rank hi)
{
  _elem = new T[_capacity = 2 * (hi - lo)];
  _size = 0;
  while (lo < hi)
  {
    cout << A[lo] << endl;
    _elem[_size++] = A[lo++];
  }
}