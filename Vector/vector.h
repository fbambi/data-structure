typedef int Rank;

#define DEFAULT_CAPACITY 3

template <typename T>
class Vector
{
private:
  Rank _size;    // 大小
  int _capacity; // 容量
  T *_elem;      // 内部数组

protected:
  void copyFrom(T const *A, Rank lo, Rank hi); // 区间拷贝
  void expand();                               // 动态扩容
  int remove(Rank lo, Rank hi);

public:
  // 构造函数
  Vector(int c = DEFAULT_CAPACITY)
  {
    _elem = new T[_capacity = c];
    _size = 0;
  }

  Vector(T const *A, Rank lo, Rank hi) { copyFrom(A, lo, hi); } // 区间拷贝构造函数

  T &operator[](Rank r) const; // []重载

  void list() const; // 打印向量

  Rank find(T const &e, Rank lo, Rank hi) const;
  Rank insert(Rank r, T const &e);
  T remove(Rank r);
  int deduplicate();
  void traverse(void (*)(T&));
};

#include "vector_implementation.h"
