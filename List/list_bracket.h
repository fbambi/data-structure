#pragma once

template <typename T>
T &List<T>::operator[](int r) const
{
  ListNodePosi(T) p = first();
  while (0 < r--)
  {
    p = p->succ;
  }
  return p->data;
}
