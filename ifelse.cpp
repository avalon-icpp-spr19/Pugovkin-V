/* Задание 1
	Даны три натуральных числа A, B, C. Определите, существует ли треугольник с такими сторонами.
	Если треугольник существует, выведите строку Да, иначе выведите строку Нет.
	Треугольник — это три точки, не лежащие на одной прямой.
	Тестовые данные				Ожидаемый результат
	1 1 1						Да
	1 2 4						Нет
	12 7 5						Нет
	7 10 3						Нет
	4 5 8						Да
//*/




//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	setlocale(lc_all, "rus");
//	int a, b, c, temp; cin >> a >> b >> c;
//	if (a + b > c && b + c > a && a + c > b) {
//		cout << "да ";
//	}
//	else cout << "нет ";
//	system("pause");
//	return 0;
//}




/* Задание 2
	Напишите код, правильно склоняющий существительное «рублей» следующее за указанным числительным.
	Например, для 10, следует напечатать «рублей», для 1 — «рубль», для 2 — «рубля».
	Использовать конструкцию switch.
	Тестовые данные			Ожидаемый результат
	1					рубль
	2					рубля
	10					рублей
	101					рубль
	1255					рублей
*/

//#include <iostream>
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "rus");
//	int a; cin >> a;
//	switch (a%10) {
//
//	case 1: cout << "рубля "; break;
//	case 2: cout << "рубля "; break;
//	case 3: cout << "рубля "; break;
//	case 4: cout << "рубля "; break;
//	case 5: cout << "рублей "; break;
//	case 6: cout << "рублей "; break;
//	case 7: cout << "рублей "; break;
//	case 8: cout << "рублей "; break;
//	case 9: cout << "рублей "; break;
//	case 0: cout << "рублей "; break;
//
//	}
//	system("pause");
//	return 0;
//}
//


/* Задание 3
В воскресенье Вася пошел в кружок робототехники и увидел там такой код управления боевым роботом:
	// исходные данные, вводятся с клавиатуры.
	// true это 1, false это 0
	bool enemyInFront;
	bool isBoss;
	int robotHealth;
	// Код Васи
	bool shouldFire = true;
	if (enemyInFront == true)
	{
		if (isBoss == true)
		{
			if (robotHealth < 50) shouldFire = false;
			if (robotHealth > 100) shouldFire = true;
		}
	}
	else
	{
		shouldFire = false;
	}
	if(shouldFire)
	{
		cout << "Fire" << endl;
	}
Упростите код Васи, удалив избыточные условные операторы.
Тестовые данные		Ожидаемый результат
false false 10
false true 60
true false 10			Fire
true true 10
true true 60			Fire
*/



//#include <iostream>
//using namespace std;
//
//int main() {
//	bool enemyInFront;
//	bool isBoss;
//	int robotHealth;
//	cin >> enemyInFront >> isBoss >> robotHealth;
//	bool shouldFire = true;
//	if (enemyInFront == 1 && isBoss)
//	{
//		if (robotHealth > 100) shouldFire = 1;
//		if (robotHealth < 50)shouldFire = 0;
//	}
//	else
//	{
//		if (enemyInFront==false) shouldFire=false;
//		else {
//			shouldFire = true;
//			cout << "Fire" << endl;
//		}
//	}
//	while (1);
//	return 0;
//}



/* Задание 4
	Вы с Васей и Петей решили выбрать самые лучшие фотографии котиков в интернете.
	Для этого каждую фотографию каждый из вас оценил по стобалльной шкале.
	Естественно, тут же встал вопрос о том, как из трех оценок получить одну финальную.
	Вы опасаетесь, что каждый из вас сильно завысит оценку фотографиям своего котика.
	Поэтому было решено в качестве финальной оценки брать не среднее арифметическое, а медиану, то есть просто откинуть максимальную и минимальную оценки.
	Вася начал писать код выбора средней оценки из трех, но запутался в if - ах, и поэтому перепоручил эту задачу вам.
	Попробуйте не просто решить задачу, но и минимизировать количество проверок и максимально упростить условия проверок.
	Тестовые данные		Ожидаемый результат
	1 2 3				2
	5 5 5				5
	2 2 9				2
	1 5 5				5
	4 5 6				5
	*/



//#include <iostream>
//using namespace std;
//
//int main() {
//
//	int a, b, c; cin >> a >> b >> c;
//	if (a > b && a > c) {
//		if (b > c) cout << b << endl;
//		else cout << c << endl;
//	}
//	if (b > a && b > c) {
//		if (a > c) cout << a << endl;
//		else cout << c << endl;
//	}
//	if (c > a && c > b) {
//		if (a > b) cout << a << endl;
//		else cout << b << endl;
//	}
//while (1);
//return 0;
//}




/* Задание 5
	Написать логику, которая проверяет возможность существования даты по введенным пользователем данных.
	Пользователь вводит данные в формате день, месяц, год.
	Тестовые данные				Ожидаемый результат
	1 1 1992					true
	30 6 1992					true
	31 7 1992					true
	31 9 1994					false
	32 1 1992					false
	1 13 1992					false
	29 2 1993					false
	29 2 2004					true
	29 2 1900					false
	29 2 2000					true
*/




//#include <iostream>
//using namespace std;
//int main() {
//	int a, b, c; cin >> a >> b >> c;
//	if (b == 1 && a > 0 && a < 32) {
//		cout << "true ";
//		system("pause");
//	}
//	else {
//
//		if (b == 2 && (c == 1700 || c == 1800 || c == 1900) && a > 28) {
//			cout << "false ";
//			system("pause");
//		}
//		else {
//			if (b == 2 && c % 4 == 0) {
//				cout << "true ";
//				system("pause");
//			}
//			else {
//				if (b == 3 && a > 0 && a < 32) {
//					cout << "true ";
//					system("pause");
//				}
//				else {
//					if (b == 4 && a > 0 && a < 31) {
//						cout << "true ";
//						system("pause");
//					}
//					else {
//						if (b == 5 && a > 0 && a < 32) {
//							cout << "true ";
//							system("pause");
//						}
//						else {
//							if (b == 6 && a > 0 && a < 31) {
//								cout << "true ";
//								system("pause");
//							}
//							else {
//								if (b == 7 && a > 0 && a < 32) {
//									cout << "true ";
//									system("pause");
//								}
//								else {
//									if (b == 8 && a > 0 && a < 32) {
//										cout << "true ";
//										system("pause");
//									}
//									else {
//										if (b == 9 && a > 0 && a < 31) {
//											cout << "true ";
//											system("pause");
//										}
//										else {
//											if (b == 10 && a > 0 && a < 32) {
//												cout << "true ";
//												system("pause");
//											}
//											else {
//												if (b == 11 && a > 0 && a < 31) {
//													cout << "true ";
//													system("pause");
//												}
//												else {
//													if (b == 12 && a > 0 && a < 32) {
//														cout << "true ";
//														system("pause");
//													}
//													else {
//														cout << "false ";
//														system("pause");
//													}
//												}
//											}
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	while (1);
//	return 0;
//}



/* Задание 6
	Шахматный ферзь ходит по диагонали, горизонтали или вертикали.
	Даны две различные клетки шахматной доски, Написать логику, которая определяет
	может ли ферзь попасть с первой клетки на вторую одним ходом.
	Клетки нумеруются с 1. Пользователь вводит координаты начальной и конечной клетки в формате x1x2.
	x1 - номер клетки по горизонтали, x2 - номер клетки по вертикали
	Тестовые данные				Ожидаемый результат
	54 14						true
	11 88						true
	36 61						false
	18 71						false
	23 67						true
*/


#include <iostream>

using namespace std;

int main() {
	int xy, x2y2; cin >> xy >> x2y2;
	//если нужно корректность данных проверять, то могу потом подкорректировать..., пока делать этого не буду.
	if ((x2y2 % 10 == xy % 10) || (x2y2 / 10 == xy / 10)) {
		cout << "true";
	}
	else if (((x2y2 % 10 - xy % 10) == (x2y2 / 10 - xy / 10)) || ((x2y2 % 10 - xy %10) == (xy / 10 - x2y2 / 10))) {
		cout << "true";
	}
	else cout << "false";
	while (1);
	return 0;
}