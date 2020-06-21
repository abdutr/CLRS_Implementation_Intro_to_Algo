#include <iostream>
#include <vector>
#include <ctime>
#include "insertion_sort.h"
#include "merge_sort.h"
#include "utils.h"
#include "binary_search.h"
#include "fibonacci_simple.h"
#include "fibonacci_dynamic.h"
#include "max_subarray.h"
#include "quick_sort.h"
#include "heap_sort.h"

using namespace std;




int main() {
	vector<int> arr{9,8,10,5,7,2,15,20,13,19};
	insertion_sort(arr,DECREASING);
	print_vector(arr);
	cout << endl;

	vector<int> arr2{ 9,8,10,5,7,2,15,20,13,19 };
	merge_sort(arr2, 0, arr2.size() - 1);
	print_vector(arr2);


	cout << binary_search(arr2, 15);
	clock_t a = clock();
	for (int i = 0; i < 10; i++) {
		cout << fibonacci(i)<<"\t";
		if (i % 10 == 0) cout << endl;
	}
	
	cout << (double)(clock() - a) / CLOCKS_PER_SEC<<endl;//for 50 number took 295 sec

	clock_t b = clock();
	for (int i = 0; i < 50; i++) {
		//cout << fibonacci_dynamic(i) << "\t";
		fibonacci_dynamic(i);
		if (i % 1000 == 0) cout << i<<endl;
	}
	cout << (double)(clock() - b) / CLOCKS_PER_SEC;//for 50 number took 0.016 sec


	vector<int> arr3{ 29,-25,9,-8,10,-5,7,-2,15,-20,13,-19,13 };
	cout << endl;
	print_vector(arr3);
	cout<<maxSubArraySum(arr3,ONLYRUN);

	quick_sort(arr3, 0, arr3.size()-1);
	cout << endl;
	print_vector(arr3);
	for (int i = 0; i <= 5;i++) {
		cout <<endl<<"Parent "<<i<<": " <<PARENT(i) << "\t Left "<<i<<" :"<< LEFT(i)<< "\t Right " << i << " :" << RIGHT(i)<<endl;
	}
}
