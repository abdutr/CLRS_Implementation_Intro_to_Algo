#pragma once
//learned from https://www.baeldung.com/java-maximum-subarray
#define DETAILED 1
#define ONLYRUN	0
template <class T>
int maxSubArraySum(vector<T> arr,bool detailed);

template <class T>
int maxSubArraySum(vector<T> arr, bool detailed) {
	int start = 0, end = 0;
	T maxSoFar = 0;
	T maxendinghere = 0;

	for (int i = 0; i < arr.size(); i++) {
		if (detailed == DETAILED) cout << "i: " << i;
		if (arr[i] > maxendinghere+arr[i]) {
			start = i;
			maxendinghere = arr[i];
			if (detailed == DETAILED) cout << " start: " << start << " Max ending here: " << maxendinghere;
		}
		else {
			maxendinghere += arr[i];
			if (detailed == DETAILED) cout <<" Maxending here: "<< maxendinghere;
		}

		if (maxSoFar < maxendinghere) {
			maxSoFar = maxendinghere;
			end = i;
			if (detailed == DETAILED) cout << " maxSofar: " << maxSoFar;
		}
		if (detailed == DETAILED) cout << endl;
		


	}
	std::cout << " Final start:" << start << "\t end:" << end << endl;
	return maxSoFar;

}
