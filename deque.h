#pragma once
#include <list>

template <typename T> class deque {
private: 
	std::list<T> data;

	size_t _size = 0;
public:
	//deque() = default; если делать так, то deque <int> q; работеат
  deque();
};
