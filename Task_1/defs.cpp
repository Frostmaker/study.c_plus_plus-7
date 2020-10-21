#include <typeinfo>
#include <iostream>

using namespace std;

int array_sum(int ar[], int len) {
	int sum{ 0 };
	for (int i{ 0 }; i < len; i++) {
		sum += ar[i];
	}
	return sum;
}


void array_multip(int ar_A[], int ar_B[], int ar_Res[], int len) {
	for (int i{ 0 }; i < len; i++) {
		ar_Res[i] = ar_A[i] * ar_B[i];
	}
}


double vector_len(int ar[], int len) {
	int sum{ 0 };
	for (int i{ 0 }; i < len; i++) {
		sum += ar[i] * ar[i];
	}
	return sqrt(sum);
}