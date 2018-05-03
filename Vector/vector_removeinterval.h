#pragma once

// 区间删除
// 返回被删除元素的数量
template <typename T>
int Vector<T>::remove(Rank lo, Rank hi)
{
  if (lo == hi)
    return 0;
  while (hi < _size)
  {
    _elem[lo] = _elem[hi];
    lo++;
    hi++;
  }
  _size = lo;
  return hi - lo;
}
