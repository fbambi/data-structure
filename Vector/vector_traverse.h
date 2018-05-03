#pragma once

template <typename T>
void Vector<T>::traverse(void (*visit)(T &))
{
  for (int i = 0; i < _size; i++)
    visit(_elem[i]);
}