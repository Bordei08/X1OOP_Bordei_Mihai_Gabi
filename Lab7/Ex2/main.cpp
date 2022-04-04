#include <iostream>

#include "Templates.h"

int main() {
	Vector<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	// s : 10, 20, 30, 40
    /s.pop();
	// s : 10, 20, 30
	//s.removeOfIndex(2);
	// s : 10 , 30 (initializarea incepe de la 1)
	s.printElements();
	

	return 0;
}