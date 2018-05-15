#include "listNode.h"

typedef int Rank;
template <typename T>
class List
{

private:
  int _size;
  ListNodePosi(T) header;
  ListNodePosi(T) trailer;

protected:
  void init();

public:
  List() { init(); }

  T &operator[](int r) const;

  ListNodePosi(T) first() const { return header->succ; }
  ListNodePosi(T) last() const { return trailer->pred; }

  ListNodePosi(T) find(T const &e) const
  {
    return find(e, _size, trailer);
  }
  ListNodePosi(T) find(T const &e, int n, ListNodePosi(T) p) const;

  ListNodePosi(T) insertAsFirst(T const &e);
  ListNodePosi(T) insertAsLast(T const &e);

  ListNodePosi(T) insertBefore(ListNodePosi(T) p, T const &e)
  {
    _size++;
    return p->insertAsPred(e);
  };
  ListNodePosi(T) insertAfter(ListNodePosi(T) p, T const &e)
  {
    _size++;
    return p->insertAsSucc(e);
  };
  void show();
};

#include "list_implement.h"
