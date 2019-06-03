#include <iostream>
#include <list>
#include "deque.h"

int main() {
	deque<int> q; //нельзя
	deque<int> q(); //только так работает
	return 0;
}
