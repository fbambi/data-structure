#pragma once

template <typename T>
void Vector<T>::expand()
{
  if (_size < _capicity)
    return;
  if (_capicity < DEFAULT_CAPACITY)
    _capacity = DEFAULT_CAPACITY;

  T *oldElem = _elem;
  _elem = new T[_capaticy <<= 1];
  for (int i = 0; i < _size; i++)
    _elem[i] = oldElem[i];
  delete[] oleElem;
}