#pragma once

#include <iostream>
using namespace std;

// return position if find
// return lo-1 if not find
template <typename T>
Rank Vector<T>::find(T const &e, Rank lo, Rank hi) const
{
  // cout << e << endl;
  while ((lo < hi--) && (_elem[hi] != e))
  {
    // cout << hi << endl;
  }
  return hi;
}