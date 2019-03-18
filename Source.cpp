
//Задание 1
//Дано N (1 ≤ N ≤ 27).
//Найти количество трехзначных натуральных чисел, сумма цифр которых равна N.
//Тестовые данные				Ожидаемый результат
//1							1
//27							1
//5							15
//10							54
//20							36


//#include <iostream>
//using namespace std;
//
//int main() {
//	int a; cin >> a;
//	int counter=0;
//	for (int i = 100; i < 1000; i++) {
//		if (i % 10 + (i / 10) % 10 + i / 100 = a) counter++;
//	}
//	cout << counter;
//
//
//	while (1);
//	return 0;
//}
#include <string>
#include <iostream>
using namespace std;
int main() {
	string s;
	geline(cin, s);
	int size = s.size();
	for (int i = 1; i <= 3;++i) {
		if (i == 1 && 3){
			cout << "+";
				for (int j = 0; j < size + 3; ++j) {
					cout << "-";
				}
			cout << "+";
			cout << endl;
		}
		else {
			cout << "| " << s << " |";
			cout << endl;
		}
	}
	while (1);
	return 0;
}



//Задание 2
//Вы решили помочь Васе с разработкой его игры и взяли на себя красивый вывод сообщений в игре.
//Напишите программу, которая принимает на вход строку текста
//и затем печатает введенную строку на экран в рамочке из символов +, - и |.
//Для красоты текст должен отделяться от рамки слева и справа пробелом.
//Например, текст Hello world должен выводиться так:
//+-------------+
//| Hello world |
//+-------------+
//#include <string>
//int main()
//{
//	std::string line;
//	std::getline(std::cin, line); 	// считывает из консоли сразу целую строку и записываем ее в переменную line
//	int size = line.size();		// функция возвращает длину строки
//}

#include <string>
#include <iostream>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	int size = s.size();
	for (int i = 1; i <= 3; ++i) {
		if (i == 1 || i == 3) {
			cout << "+";
			for (int j = 0; j < size + 2; ++j) {
				cout << "-";
			}
			cout << "+";
			cout << endl;
		}
		else {
			cout << "| " << s << " |";
			cout << endl;
		}
	}
	while (1);
	return 0;
}

//Задание 3
//Стали известны подробности про новую игру Васи.
//Оказывается ее действия разворачиваются на шахматных досках нестандартного размера.
//У Васи уже написан код, генерирующий стандартную шахматную доску размера 8х8.
//Помогите Васе переделать этот код так, чтобы он умел выводить доску любого заданного размера.
//Например, доска размера 5x5 должна выводиться так:
//#.#.#
//.#.#.
//#.#.#
//.#.#.
//#.#.#


#include <string>
#include <iostream>
using namespace std;
int main() {
	int size; cin >> size;
	for (int i = 1; i <= size; ++i) {
		for (int j = 1; j <= size; ++j) {
			if ((j + i) % 2 == 0) {
				cout << "#";
			}
			else cout << ".";

		}
		cout << endl;
	}
	while (1);
	return 0;
}

//Задание 4
//Напишите программу, которая принимает у пользователя натуральное число N
//и выводит в консоль ромб со стороной N.
//Примеры:
//N = 1
//#
//N = 2
// #
//###
// #
//N = 4
//   #
//  ###
// #####
//#######
// #####
//  ###
//   #


#include <string>
#include <iostream>
using namespace std;
int main() {
	int size; cin >> size;
	for (int i = 0; i < size; i++) {


		for (int j1 = 1; j1 < size - i; j1++) {
			cout << " ";
		}
		for (int j = size - i * 2; j <= size; j++) {
			cout << "#";
		}

		cout << endl;
	}
	for (int i = size - 2; i >= 0; i--) {


		for (int j1 = 1; j1 < size - i; j1++) {
			cout << " ";
		}
		for (int j = size - i * 2; j <= size; j++) {
			cout << "#";

		}
		cout << endl;
	}


//Задание 5 (дополнительно)
//Определите симметрично ли введенное пользователем число N
//Тестовые данные			Ожидаемый результат
//1				Да
//12				Нет
//565				Да
//1235321				Да
//12344321			Да
//456123				Нет
//*/