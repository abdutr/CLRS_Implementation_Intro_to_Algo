#pragma once
#include <vector>
#include "utils.h"
using namespace std;
// implemented without looking for code/pseudocode 

template <class T>
void merge_sort(vector<T> &arr, int i, int j);

template <class T>
void merge(vector<T>& arr, int i,int middle, int j);


template <class T>
void merge_sort(vector<T> &arr, int i, int j) {
	if (i >= j) {
		return;
	}
	int middle = (i + j) / 2;
	merge_sort(arr, i, middle);
	merge_sort(arr, middle + 1, j);
	merge(arr, i,middle, j);


}

template<class T>
void merge(vector<T>& arr, int start,int middle , int end)
{
	vector<T> left, right;

	for (int i = start; i <= middle; i++) {
		left.push_back(arr[i]);
	}
	left.push_back(INT32_MAX);//while using templates this does not make sense change it.

	for (int i = middle + 1; i <= end; i++) {
		right.push_back(arr[i]);
	}
	right.push_back(INT32_MAX);

	int i = 0;
	int j = 0;

	for (int k = start; k <= end; k++) {
		if (left[i] < right[j]) {
			arr[k] = left[i];
			i++;
		}
		else if (right[j] <= left[i]) {
			arr[k] = right[j];
			j++;
		}
	}

}
