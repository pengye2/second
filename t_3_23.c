#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
//对10个整数按升序排序--冒泡法
//int main() {
//	int a[10], i, j, t;
//	printf("input 10 numbers:");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	for (j = 0; j < 9; j++)
//		for (i = 0; i < 9 - j; i++)
//			if (a[i] > a[i + 1]) {
//				t = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = t;
//			}
//	printf("the sorted numbers：");
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	return 0;
//}

//选择法--对10个数字进行降序排序
//int main() {
//	int a[10], i, j, k, t, n = 10;
//	printf("input 10 numbers:");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < n - 1; i++) {
//		k = i;//假设当前趟的第一个数为最值，记在k中
//		for (j = i + 1; j < n; j++)
//			if (a[k] < a[j])
//				k = j;
//		if (k != i) {//k不为初值，则找到更大的数
//			t = a[k];
//			a[k] = a[i];
//			a[i] = t;
//		}
//	}
//	printf("the sorted numbers:");
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	return 0;
//}

//插入法
//int main() {
//	int a[10], i, j, t;
//	printf("input 10 numbers:");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < 10; i++) {//n个数从第2个数开始到n-1次插入
//		t = a[i];//将待插入数暂存于变量t中
//		for (j = i - 1; j >= 0 && t > a[j]; j--)
//			a[j + 1] = a[j];
//		a[j + 1] = t;
//	}
//	printf("the sorted numbers:");
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	return 0;
//}

//多个字符从两端移动向中间汇聚
int main() {
	char arr1[] = "welcom to hunan!!";
	char arr2[] = "@@@@@@@@@@@@@@@@@";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right) {
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//运行时休息一秒
		left++;
		right--;
	}
	return 0;
}