#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
//��10����������������--ð�ݷ�
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
//	printf("the sorted numbers��");
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	return 0;
//}

//ѡ��--��10�����ֽ��н�������
//int main() {
//	int a[10], i, j, k, t, n = 10;
//	printf("input 10 numbers:");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < n - 1; i++) {
//		k = i;//���赱ǰ�˵ĵ�һ����Ϊ��ֵ������k��
//		for (j = i + 1; j < n; j++)
//			if (a[k] < a[j])
//				k = j;
//		if (k != i) {//k��Ϊ��ֵ�����ҵ��������
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

//���뷨
//int main() {
//	int a[10], i, j, t;
//	printf("input 10 numbers:");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	for (i = 0; i < 10; i++) {//n�����ӵ�2������ʼ��n-1�β���
//		t = a[i];//�����������ݴ��ڱ���t��
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

//����ַ��������ƶ����м���
int main() {
	char arr1[] = "welcom to hunan!!";
	char arr2[] = "@@@@@@@@@@@@@@@@@";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right) {
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//����ʱ��Ϣһ��
		left++;
		right--;
	}
	return 0;
}