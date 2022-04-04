#pragma once


template<class T>
class Vector {
private:
	unsigned int count;
	struct element {
		T value;
		element* pred;
		element* next;
		int index;
	}*head;

public :

	Vector() {
		count = 0;
	}


	void push(T value) {
		if (count == 0) {
			head = new element;
			head->value = value;
			head->next = head->pred = nullptr;
		}
		else {
			element* e = new element;
			e->value = value;
			e->pred = head;
			head->next = e;
			head = e;
		}
		count++;
	}

	void pop() {
		element* e = new element;
		e = head->pred;
		// daca e este penultimul element atunci trebuie sa merge pe next pentru al vedea pe ultimul 

		std::cout << e->next->value << " \n";
		delete head;
		head = e;
		count--;
	}

	int getCount() {
		return count;
	}

	void removeOfIndex(int index) {
		if (index == count) {
			pop();
		}
		else {
			element* chead = new element;
			chead = head;
			int c = count;
			while (c != index) {
				std::cout <<chead-> value << "\n";
				chead = chead->pred;
				c--;
			}
			element* list1 = new element;
			element* list2 = new element;
			list1 = chead->pred;
			list2 = chead->next;
			std::cout << chead->value << " \n";
			delete chead;
			chead = list1;
			chead->next = list2;
			
			head = chead;
			count--;
		}
	}

	void printElements() {
		element* chead = new element;
		chead = head;
		int c = count;
		while (c) {
			std::cout << chead->value << ", ";
			c--;
			chead = chead->pred;
		}
	}

};