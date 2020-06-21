#pragma once
// implemented without looking for code/pseudocode
#include <vector>
#include "utils.h"
using namespace std;

template<class T>
void insertion_sort(vector<T>& arr,bool direction);


template<class T>
void insertion_sort(vector<T>& arr,bool direction)
{

	for (int i = 1; i < arr.size(); i++) {
		T key = arr[i];
		int j = i - 1;
		if (direction == INCREASING) {
			while (j >= 0 && key < arr[j]) {
				arr[j + 1] = arr[j];
				j--;
			}
		}
		else if(direction == DECREASING) {
			while (j >= 0 && key > arr[j]) {
				arr[j + 1] = arr[j];
				j--;
			}
		}

		arr[j + 1] = key;
	}
}