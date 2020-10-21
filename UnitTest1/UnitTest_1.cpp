#include "pch.h"
#include "CppUnitTest.h"
#include "../Task_1/defs.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(SumTest)
	{
	public:
		
		TEST_METHOD(SumTestMethod1)
		{
			int ar[] = { 0, 1, 2, 3, 4 };
			Assert::AreEqual(array_sum(ar, 5), 10);
		}

		TEST_METHOD(SumTestMethod2)
		{
			int ar[] = { 0, 0, 0, 0 };
			Assert::AreEqual(array_sum(ar, 4), 0);
		}

		TEST_METHOD(SumTestMethod3)
		{
			int ar[] = { 0, 1, -1, 2, -2 };
			Assert::AreEqual(array_sum(ar, 5), 0);
		}

		TEST_METHOD(SumTestMethod4)
		{
			int ar[] = { 0, -11, -22, -33, -44, -55 };
			Assert::AreEqual(array_sum(ar, 6), -165);
		}
	};


	TEST_CLASS(MultipTest)
	{
	public:

		TEST_METHOD(MultipTestMethod1)
		{
			const int n{ 5 }; bool boo{ true };
			int ar_A[] = { 0, 1, 2, 3, 4 };
			int ar_B[] = { 4, 3, 2, 1, 0 };
			int ar_Res[n];
			int ar_Answ[] = { 0, 3, 4, 3, 0 };
			array_multip(ar_A, ar_B, ar_Res, 5);
			for (int i{ 0 }; i < n; i++)
				Assert::AreEqual(ar_Res[i], ar_Answ[i]);
		}
	};


	TEST_CLASS(VectorLengthTest)
	{
	public:

		TEST_METHOD(VectorLengthTestMethod1)
		{
			int ar[] = { 12, 5 };
			Assert::AreEqual(vector_len(ar, 2), 13.0);
		}

		TEST_METHOD(VectorLengthTestMethod2)
		{
			int ar[] = { -12, -5 };
			Assert::AreEqual(vector_len(ar, 2), 13.0);
		}

		TEST_METHOD(VectorLengthTestMethod3)
		{
			int ar[] = { 13, 5, 7, 2 };
			Assert::AreEqual(vector_len(ar, 4), 15.7162, 1e-3);
		}

		TEST_METHOD(VectorLengthTestMethod4)
		{
			int ar[] = { 0, 0, 0 };
			Assert::AreEqual(vector_len(ar, 3), 0.0);
		}
	};


	TEST_CLASS(CosSimilarityTest)
	{
	public:

		TEST_METHOD(CosSimilarityTestMethod1)
		{
			int a[] = { 12, 5 };
			int b[] = {3, 4};
			Assert::AreEqual(cos_similarity(a, b, 2), 0.861538, 1e-4);
		}
	};


	TEST_CLASS(MatrixMultipTest)
	{
	public:

		TEST_METHOD(MatrixMultipTestMethod1)
		{
			int a[] = { 1, 2, 3, 4 };
			int b[] = { 5, 6, 7, 8 };
			int res[4];
			int test_matrix[4] = {19, 22, 43, 50};
			matrix_multip(a, b, res, 2);
			for (int i{ 0 }; i < 2; i++) {
				Assert::AreEqual(test_matrix[i], res[i]);
			}
		}
	};
}
