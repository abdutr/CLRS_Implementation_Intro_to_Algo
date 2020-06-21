#pragma once
// implemented without looking for code/pseudocode
#include <vector>
#include <cmath>
using namespace std;

template <class T>
int binary_search(vector<T> arr, T val);

template <class T>
int _binary_search(vector<T> &arr, T val, int start, int end);

template <class T>
int binary_search(vector<T> arr, T val) 
{
	return _binary_search(arr, val, 0, arr.size() - 1);

}

template <class T>
static int _binary_search(vector<T> &arr, T val,int start,int end)
{
	int mid = ceil((double)(start + end) / 2)    ;
	if (arr[mid] == val) return mid;
	if (start == end) return -1;

	if (arr[mid] > val) return _binary_search(arr, val, start, mid-1);
	else return _binary_search(arr, val, mid+1, end);

}