#pragma once

using namespace std;

template <typename T>
void List<T>::show()
{
  int n = _size;
  ListNodePosi(T) p = trailer;
  while (0 < n--)
  {
    p = p->pred;
    cout << p->data << endl;
  }
}
