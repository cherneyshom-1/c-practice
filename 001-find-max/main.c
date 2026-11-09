/* 001 找数组最大值 find_max */
#include<stdio.h> 
int find_max(const int* a, int n) {
		int i = 0;
		const int* p = a;
		const int* max = a;
		for (i = 0; i < n - 1; i++) {
			if (*(p+1) >= *max)
				max = p+1;
			p++;
		}
		return *max;
}
int main() {
    #define n 1
	int arr[n] = { -8 };
	int* a = arr;
	int max = find_max(arr, n);
	printf("%d", max);
	return 0;
}
