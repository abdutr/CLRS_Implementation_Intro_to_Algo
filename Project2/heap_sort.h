#pragma once
#include <iostream>
#include <vector>

#define PARENT(A) ceil((double)A/2)-1
#define LEFT(A) (A<<1) +1
#define RIGHT(A) (A<<1) +2



template <class T>
class heap {
private:
	vector<T> arr;
	int heap_size;


public:

	int operator[](int i) {
		return arr[i];
	}

	void max_heapify(unsigned int index);
	void build_max_heap();
	heap(vector<T> init_vector);

};


template<class T>
void heap<T>::max_heapify(unsigned int index)
{
	int largest = index;
	int left = LEFT(index);
	int right = RIGHT(index);

	if (left<heap_size && arr[left] > arr[index]) {
		largest = left;
	}

	if (right< heap_size   arr[right] > arr[largest]) {
		largest = right;
	}
	if (largest != index) {
		swapp(arr, largest, index);
		max_heapify(largest);
	}


}

template<class T>
void heap<T>::build_max_heap()
{
	int i = (heap_size - 1) / 2;
	while (i >= 0) {
		max_heapify(i);
		i--;
	}

}

template<class T>
heap<T>::heap(vector<T> init_vector) {
	arr = init_vector;
	heap_size = arr.size();
}