// ������6������ ������ �++
#include < iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;
//������ 1
void typeOfN(int n) {
	cout << "int\n";
}

void typeOfN(double n) {
	cout << "double\n";
}


int SumAB(int A, int B);


template <typename T> void showArr(T array[], int length);//������ � ��� �������� ��������� ����� �������������� �������  


template <typename T> void rangeSort(T array[], int length) {
	int index =-1 , lastIndex =-1 ;//���� ������� =0   ���� ������ = ����� -1 ��������� ������ ������������� �����
	for (int i = 0; i < length; i++)
		if (array[i] < 0) {
			index = i;
			break;// ����� ������������� ���������� �������
		}
	for (int i = length - 1; i >= 0; i--)
		if (array[i] < 0) {// ����� �� ��� ���� � ����� ������� 
			lastIndex = i;
			break;
		}
	if (index != -1)
		/*for (int i = lastIndex; i > index; i--)// ���� ����� 0 �� ��� ������ ��������
			for (int j = index; j < i; j++) // ��� ���� � ������ �������
				if (array[j] > array[j + 1])//� ��� ������� ������ �������������
					swap(array[j], array[j + 1]);*/

		sort(array + index, array + lastIndex);
}




template <typename T>void moveArr(T array[], int length, int n) {
	if( n>=lrngth)
		n-=(n/length)*length//����������� ��������� ��� ���� ���� �� ������ ������ ��������
	for (int j = 0; j < n; j++) {//������������ ����� �������
		T tmp = array[length - 1];
		for (int i = length - 1; i > 0; i--)//��� ������ ������ 
			array[i] = array[i - 1];
		array[0] = tmp;//�������� �������� � �������
	}
}

			
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	



	/*������ 1
	cout << "������ 1\n 5 - ";
	typeOf(5);
	cout << "\n1.2 - ";
	typeOf(1.2);
	cout << endl << endl;*/

	/*cout << "������ 2\n������� ������ � ����� ���������: ";
	cin >> n >> m;
	cout << "����� ����� �� " << n << " �� " << m << " = " << SumAB(n, m) << endl << endl;*/

	// ������ 3
	/*cout << "������ 3\n����������� ������: " << endl;
	int z3[10];
	for (int i = 0; i < 10; i++)//���������� ������ 
		z3[i] = rand() % (20 + 1 - (-20)) + (-20) ;
	showArr(z3, 20);//����� ������� � ������� ������� 
	cout << "�������������� ������: " << endl;
	rangeSort(z3, 10);//��������� ������ 
	showArr(z3, 10);//������� ������
	cout << endl << endl;*/
	

	//������ 4 ����� �������
cout << "������ 4\n����������� ������:" << endl;
int z4[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
showArr(z4, 10);
cout << "\n������� ���������� �������: ";//���� ����� � ����������
cin >> n;
moveArr(z4, 10, n);
cout << "�������� ������:" << endl;//����� ������� 
showArr(z4, 10);
cout << endl << endl;



	return 0;
}

int SumAB(int A, int B) {
	if (A >= B)
		return A;
	return SumAB(A, B-1) + B;
}
//����� ������� 
template <typename T> void showArr(T array[], int length) {//������� ������ ������� 
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << array[i] << ", ";
	cout << "\b\b]\n";
}

