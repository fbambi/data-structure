#include <iostream>
#include "list.h"

using namespace std;

int main()
{

  List<int> l;
  int a = 1;
  ListNodePosi(int) p = l.insertAsFirst(1);

  l.insertAfter(p, 8);
  l.insertBefore(p, 7);

  l.insertAsFirst(2);
  l.insertAsFirst(3);

  l.show();

  system("pause");

  return 0;
}
