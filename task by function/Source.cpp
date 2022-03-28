// Персон6альный шаблон С++
#include < iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;
//Задача 1
void typeOfN(int n) {
	cout << "int\n";
}

void typeOfN(double n) {
	cout << "double\n";
}


int SumAB(int A, int B);


template <typename T> void showArr(T array[], int length);//массив и его длинаююю сортируем между отрицательными числами  


template <typename T> void rangeSort(T array[], int length) {
	int index =-1 , lastIndex =-1 ;//если инедекс =0   ласт индекс = ленгс -1 сортирует массив положительных чисел
	for (int i = 0; i < length; i++)
		if (array[i] < 0) {
			index = i;
			break;// брейк останавливает выполнение функции
		}
	for (int i = length - 1; i >= 0; i--)
		if (array[i] < 0) {// здесь мы уже ищем с конца массива 
			lastIndex = i;
			break;
		}
	if (index != -1)
		/*for (int i = lastIndex; i > index; i--)// если будет 0 то это лишняя операция
			for (int j = index; j < i; j++) // тут идем с начала массива
				if (array[j] > array[j + 1])//я так понимаю массив сравниваеться
					swap(array[j], array[j + 1]);*/

		sort(array + index, array + lastIndex);
}




template <typename T>void moveArr(T array[], int length, int n) {
	if( n>=lrngth)
		n-=(n/length)*length//оптимизация программы для того чтоб не делать лишних итераций
	for (int j = 0; j < n; j++) {//зацикливание цикла функции
		T tmp = array[length - 1];
		for (int i = length - 1; i > 0; i--)//для пустой ячейки 
			array[i] = array[i - 1];
		array[0] = tmp;//конечная итерация в массиве
	}
}

			
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	



	/*Задача 1
	cout << "Задача 1\n 5 - ";
	typeOf(5);
	cout << "\n1.2 - ";
	typeOf(1.2);
	cout << endl << endl;*/

	/*cout << "задача 2\nВведите начало и конец диапазона: ";
	cin >> n >> m;
	cout << "Сумма числе от " << n << " до " << m << " = " << SumAB(n, m) << endl << endl;*/

	// задача 3
	/*cout << "Задача 3\nИзначальный массив: " << endl;
	int z3[10];
	for (int i = 0; i < 10; i++)//заполнение масива 
		z3[i] = rand() % (20 + 1 - (-20)) + (-20) ;
	showArr(z3, 20);//вывод массива с помощью функции 
	cout << "Отсортированый массив: " << endl;
	rangeSort(z3, 10);//сортирует массив 
	showArr(z3, 10);//выводит массив
	cout << endl << endl;*/
	

	//Задача 4 сдвиг массива
cout << "Задача 4\nИзначальный массив:" << endl;
int z4[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
showArr(z4, 10);
cout << "\nВведите количество сдвигов: ";//ввод чисел с клавиатуры
cin >> n;
moveArr(z4, 10, n);
cout << "Итоговый массив:" << endl;//вывод массива 
showArr(z4, 10);
cout << endl << endl;



	return 0;
}

int SumAB(int A, int B) {
	if (A >= B)
		return A;
	return SumAB(A, B-1) + B;
}
//Вывод массива 
template <typename T> void showArr(T array[], int length) {//функция вывода массива 
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << array[i] << ", ";
	cout << "\b\b]\n";
}

