#pragma once
#include "utils.h"
template <class T>
int partition(vector<T>& arr, int start, int end);

template <class T>
void quick_sort(vector<T>& arr, int start, int end);

template <class T>
int partition(vector<T>& arr, int start, int end) {
    T var = arr[start];
    int i = start;

    for (int k = start+1; k <= end; k++) {
        if (arr[k] <= var) 
        {
            i++;
            swapp(arr, i, k);
        }
    }
    swapp(arr, i , start);
    return i ;
}

template<class T>
void quick_sort(vector<T>& arr, int start, int end)
{
    if (start < end) {
        int pivot = partition(arr, start, end);
        quick_sort(arr, start, pivot - 1);
        quick_sort(arr, pivot + 1, end);

    }

}

  