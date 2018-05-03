#include <iostream>
#pragma once

using namespace std;

template <typename T>
void Vector<T>::list() const
{
  for (int i = 0; i < _size; i++)
  {
    cout << _elem[i] << "," << i << endl;
  }
}