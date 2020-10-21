#include <typeinfo>
#include <iostream>

using namespace std;

int array_sum(int ar[], int len) {
	// Функция вычисляет сумму элементов массива

	int sum{ 0 };
	for (int i{ 0 }; i < len; i++) {
		sum += ar[i];
	}

	return sum;
}


void array_multip(int ar_A[], int ar_B[], int ar_Res[], int len) {
	/*  Функция перемножает два массива <ar_A> и <ar_B> поэлементно 
		и записысывает результат в <ar_Res>  */

	for (int i{ 0 }; i < len; i++) {
		ar_Res[i] = ar_A[i] * ar_B[i];
	}
}


double vector_len(int vec[], int len) {
	// Функция находит длину вектора <vec>

	int sum{ 0 };
	for (int i{ 0 }; i < len; i++) {
		sum += vec[i] * vec[i];
	}

	return sqrt(sum);
}


double cos_similarity(int vec_A[], int vec_B[], int len) {
	// Функция нахождения косинуса сходства векторв <vec_A> и <vec_B>

	double numer, denom;
	int* vec_t = new int[len];
	array_multip(vec_A, vec_B, vec_t, len);
	numer = array_sum(vec_t, len);
	denom = vector_len(vec_A, len) * vector_len(vec_B, len);
	delete[] vec_t;
	vec_t = nullptr;

	return numer / denom;
}


void cout_matrix(int a[], int len) {
	// Функция выводит матрицу в консоль в квадратном виде

	for (int j = 0; j < len; j++) {
		for (int i = 0; i < len; i++) {
			cout << a[j * len + i] << ' ';
		}
		cout << endl;
	}
}


void matrix_multip(int a[], int b[], int res[], int len) {
	/*  Функция перемножает матрицу <a> на матрицу <b> и записывает результат в матриц <res>
		a имеет размер l × m
		b имеет размер m × n
		res имеет размер l × n  */
	
	int t{ 0 };
	for (int l{ 0 }; l < len; l++)
	{
		for (int n{ 0 }; n < len; n++)
		{
			for (int m{ 0 }; m < len; m++)
				t += a[l * len + m] * b[m * len + n];
			
			res[l * len + n] = t;
			t = 0;
		}

	}	
}


void rotate_matrix(int a[], int res[], int len) {
	// Функция записывает в матрицу <res> матрицу <a>, повернутую на 90º

	int t{ 0 };
	for (int j{ 0 }; j < len; j++) {

		for (int i{ 0 }; i < len; i++) {
			// Блин, да как эту матрицу повернуть-то?
		}
	}
}