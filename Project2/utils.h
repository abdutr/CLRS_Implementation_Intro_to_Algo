#pragma once
#include <vector>
#define INCREASING 1
#define DECREASING 0
using namespace std;

template <class T>
void print_vector(vector<T>& arr);

template<class T>
void swapp(vector<T>& arr, int left, int right);

template<class T>
void swapp(vector<T>& arr, int left, int right)
{
	T temp = arr[left];
	arr[left] = arr[right];
	arr[right] = temp;
}

template <class T>
void print_vector(vector<T>& arr) {
	for (unsigned int i = 0; i < arr.size(); i++) {
		cout << arr[i] << "\t";
	}
}