#include <iostream>
#include <limits>
#include <iomanip>

/* TODO
»спользу€ заголовочный файл <limits>, std::cout, sizeof() и управл€ющие последовательности
cоставьте следующую таблицу
“ип переменной		|    –азмер,	|	    «начениe|   оличество
                    |     байт   	|  ћинимальное	|  ћаксимальное  | значимых бит
-------------------------------------------------------------------------------------------
bool			|	1	|     false	|      true      |	1
unsigned short		|	2	|	0	|      65535	 |	16
short
unsigned int
int
unsigned long
long
unsigned long long
long long
char
float
double
дл€ справки использовать http://www.cplusplus.com/reference/limits/numeric_limits/
*/
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus"); // включение адекватного отображени€ кириллицы в консоль
	cout << boolalpha; // настройка консоли, вывод булевых типов как true / false
	//sizeof(int); // возвращает байтовый размер переменной типа int
	//std::numeric_limits<int>::max(); // возвращает максимальное значение которое может хранить переменна€ типа int
	//std::numeric_limits<int>::max(); // возвращает минимальное значение которое может хранить переменна€ типа int
	//std::numeric_limits<int>::digits; // возвращает количество значимых бит переменной типа int

	cout << left;
	cout << setw(30) << "bool: " << setw(30) << sizeof(bool) << setw(30) << numeric_limits<bool>::max() << setw(30) << numeric_limits<bool>::min() << setw(30) << numeric_limits<bool>::digits << endl;
	cout << setw(30)<< "unsigned short: " << setw(30)<< sizeof(unsigned short)<< setw(30)<< numeric_limits<unsigned short>::max()<< setw(30)<< numeric_limits<unsigned short>::min()<< setw(30)<< numeric_limits<unsigned short>::digits << endl;
	cout << setw(30) << "short: " << setw(30) << sizeof(short) << setw(30) << numeric_limits<short>::max() << setw(30) << numeric_limits<short>::min() << setw(30) << numeric_limits<short>::digits << endl;
	cout << setw(30) << "unsigned int: " << setw(30) << sizeof(unsigned int) << setw(30) << numeric_limits<unsigned int>::max() << setw(30) << numeric_limits<unsigned int>::min() << setw(30) << numeric_limits<unsigned int>::digits << endl;
	cout << setw(30) << "int: " << setw(30) << sizeof(int) << setw(30) << numeric_limits<int>::max() << setw(30) << numeric_limits<int>::min() << setw(30) << numeric_limits<int>::digits << endl;
	cout << setw(30) << "unsigned long: " << setw(30) << sizeof(unsigned long) << setw(30) << numeric_limits<unsigned long>::max() << setw(30) << numeric_limits<unsigned long>::min() << setw(30) << numeric_limits<unsigned long>::digits << endl;
	cout << setw(30) << "long: " << setw(30) << sizeof(long) << setw(30) << numeric_limits<long>::max() << setw(30) << numeric_limits<long>::min() << setw(30) << numeric_limits<long>::digits << endl;
	cout << setw(30) << "unsigned long long: " << setw(30) << sizeof(unsigned long long) << setw(30) << numeric_limits<unsigned long long>::max() << setw(30) << numeric_limits<unsigned long long>::min() << setw(10) << numeric_limits<unsigned long long>::digits << endl;
	cout << setw(30) << "long long: " << setw(30) << sizeof(long long) << setw(30) << numeric_limits<long long>::max() << setw(30) << numeric_limits<long long>::min() << setw(30) << numeric_limits<long long>::digits << endl;
	cout << setw(30) << "char: " << setw(30) << sizeof(char) << setw(30) <<(int)numeric_limits<char>::max() << setw(30) << (int)numeric_limits<char>::min() << setw(30) << numeric_limits<char>::digits << endl;
	cout << setw(30) << "float: " << setw(30) << sizeof(float) << setw(30) << numeric_limits<float>::max() << setw(30) << numeric_limits<float>::min() << setw(30) << numeric_limits<float>::digits << endl;
	cout << setw(30) << "double: " << setw(30) << sizeof(double) << setw(30) << numeric_limits<double>::max() << setw(30) << numeric_limits<double>::min() << setw(30) << numeric_limits<double>::digits << endl;

}
