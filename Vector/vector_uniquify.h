#pragma once

#include <iostream>

using namespace std;

// 有序向量唯一化

// 低效版
template <typename T>
int Vector<T>::uniquify_slow()
{
  int oldSize = _size;
  int i = 1;
  while (i < _size)
  {
    if (_elem[i - 1] == _elem[i])
    {
      remove(i);
    }
    else
      i++;
  }
  return oldSize - _size;
}

// 高效版
template <typename T>
int Vector<T>::uniquify()
{
  Rank i = 0, j = 0;
  while (++j < _size)
  {
    if (_elem[i] != _elem[j])
      _elem[++i] = _elem[j];
  }
  _size = ++i;
  shrink();
  return j - i;
}