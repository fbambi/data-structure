#pragma once

// 缩容
// 1.容量不小于缺省容量的 1/2
// 2.缩容阈值为 1/4，即 size <= capacity * 0.5
template <typename T>
void Vector<T>::shrink()
{
  if (_capacity < DEFAULT_CAPACITY << 1)
    return;
  if (_size << 2 > _capacity)
    return;

  T *oldElem = _elem;
  _elem = new T[_capacity >> 1];
  for (int i = 0; i < _size; i++)
  {
    _elem[i] = oldElem[i];
  }
  delete[] oldElem;
}