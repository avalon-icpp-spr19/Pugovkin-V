/* ������� 1
	���� ��� ����������� ����� A, B, C. ����������, ���������� �� ����������� � ������ ���������.
	���� ����������� ����������, �������� ������ ��, ����� �������� ������ ���.
	����������� � ��� ��� �����, �� ������� �� ����� ������.
	�������� ������				��������� ���������
	1 1 1						��
	1 2 4						���
	12 7 5						���
	7 10 3						���
	4 5 8						��
//*/




//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	setlocale(lc_all, "rus");
//	int a, b, c, temp; cin >> a >> b >> c;
//	if (a + b > c && b + c > a && a + c > b) {
//		cout << "�� ";
//	}
//	else cout << "��� ";
//	system("pause");
//	return 0;
//}




/* ������� 2
	�������� ���, ��������� ���������� ��������������� ������� ��������� �� ��������� ������������.
	��������, ��� 10, ������� ���������� �������, ��� 1 � �������, ��� 2 � �������.
	������������ ����������� switch.
	�������� ������			��������� ���������
	1					�����
	2					�����
	10					������
	101					�����
	1255					������
*/

//#include <iostream>
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "rus");
//	int a; cin >> a;
//	switch (a%10) {
//
//	case 1: cout << "����� "; break;
//	case 2: cout << "����� "; break;
//	case 3: cout << "����� "; break;
//	case 4: cout << "����� "; break;
//	case 5: cout << "������ "; break;
//	case 6: cout << "������ "; break;
//	case 7: cout << "������ "; break;
//	case 8: cout << "������ "; break;
//	case 9: cout << "������ "; break;
//	case 0: cout << "������ "; break;
//
//	}
//	system("pause");
//	return 0;
//}
//


/* ������� 3
� ����������� ���� ����� � ������ ������������� � ������ ��� ����� ��� ���������� ������ �������:
	// �������� ������, �������� � ����������.
	// true ��� 1, false ��� 0
	bool enemyInFront;
	bool isBoss;
	int robotHealth;

	// ��� ����
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
��������� ��� ����, ������ ���������� �������� ���������.
�������� ������		��������� ���������
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



/* ������� 4
	�� � ����� � ����� ������ ������� ����� ������ ���������� ������� � ���������.
	��� ����� ������ ���������� ������ �� ��� ������ �� ����������� �����.
	�����������, ��� �� ����� ������ � ���, ��� �� ���� ������ �������� ���� ���������.
	�� ����������, ��� ������ �� ��� ������ ������� ������ ����������� ������ ������.
	������� ���� ������ � �������� ��������� ������ ����� �� ������� ��������������, � �������, �� ���� ������ �������� ������������ � ����������� ������.
	���� ����� ������ ��� ������ ������� ������ �� ����, �� ��������� � if - ��, � ������� ����������� ��� ������ ���.
	���������� �� ������ ������ ������, �� � �������������� ���������� �������� � ����������� ��������� ������� ��������.
	�������� ������		��������� ���������
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




/* ������� 5
	�������� ������, ������� ��������� ����������� ������������� ���� �� ��������� ������������� ������.
	������������ ������ ������ � ������� ����, �����, ���.

	�������� ������				��������� ���������
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



/* ������� 6
	��������� ����� ����� �� ���������, ����������� ��� ���������.
	���� ��� ��������� ������ ��������� �����, �������� ������, ������� ����������
	����� �� ����� ������� � ������ ������ �� ������ ����� �����.
	������ ���������� � 1. ������������ ������ ���������� ��������� � �������� ������ � ������� x1x2.
	x1 - ����� ������ �� �����������, x2 - ����� ������ �� ���������

	�������� ������				��������� ���������
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
	//���� ����� ������������ ������ ���������, �� ���� ����� �����������������..., ���� ������ ����� �� ����.
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
