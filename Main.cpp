#include "Header.h"
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int** arr = 0;
	int strings, columns;
	cout << "¬ведите кол-во строк :  " << endl;
	cin >> strings;
	cout << " ¬ведите  кол-во столбцов  :   " << endl;
	cin >> columns;
	arr = Init(arr, strings, columns);
	PrintArr(arr, strings, columns);
	arr = Clear(arr, strings);
}
