typedef int Rank;

#define DEFAULT_CAPACITY 3

template <typename T>
class Vector
{
private:
  Rank _size;
  int _capacity;
  T *_elem;

protected:
  void copyFrom(T const *A, Rank lo, Rank hi);

public:
  // 构造函数
  Vector(int c = DEFAULT_CAPACITY)
  {
    _elem = new T[_capacity = c];
    _size = 0;
  }

  Vector(T const *A, Rank lo, Rank hi) { copyFrom(A, lo, hi); }

  T &operator[](Rank r) const;
};

#include "vector_implementation.h"
