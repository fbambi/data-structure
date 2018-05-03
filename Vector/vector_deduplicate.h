#pragma once

// 去重
// 返回删除元素数
template <typename T>
int Vector<T>::deduplicate()
{
  int oldSize = _size;
  int i = 1;
  while (i < _size)
  {
    if (find(_elem[i], 0, i) >= 0)
    {
      remove(i);
    }
    else
    {
      i++;
    }
  }
  return oldSize - _size;
}