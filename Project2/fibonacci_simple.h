#pragma once
long long int fibonacci(long long int a);

long long int fibonacci(long long int a) {
	if (a == 0) return 0;
	else if (a == 1) return 1;
	else {
		return fibonacci(a - 1) + fibonacci(a - 2);
	}

}