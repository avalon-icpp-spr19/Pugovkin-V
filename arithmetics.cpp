//№1
//#include <iostream>      
//using namespace std;
//
//int main() {
//	int sum,a; cin >> a;
//	cout << a / 100 + (a / 10) % 10 + a % 10; //noiia oeo? ?enea
//	while (1);
//	return 0;
//}	  



//№2
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int hours1, minuts1, seconds1, hours2, seconds2, minuts2, SizeBetweenDaten;
//	cin >> hours1 >> minuts1 >> seconds1;
//	cin >> hours2 >> minuts2 >> seconds2;
//	SizeBetweenDaten = (hours2 * 3600 + minuts2 * 60 + seconds2) -
//		(hours1 * 3600 + minuts1 * 60 + seconds1);
//
//	cout << SizeBetweenDaten << endl;
//
//	while (1);
//	return 0;
//}	



//№3
//#include <iostream>   
//#include <cmath>
//using namespace std;
//
//int main() {
//	int year, day, month, JDateInt,a,y,m;
//	cin >> day >> month >> year;
//	a = (14 - month) / 12;
//	y = year + 4800 - a;
//	m = month + 12 * a - 3;
//	JDateInt = day + ((153 * m + 2) / 5) + (365 * y) + (y / 4) - (y / 100) + (y / 400) - 32045;
//
//	cout << JDateInt;
//
//	while (1);
//	return 0;
//}	 



//№4
//#include <iostream>
//using namespace std;
//
//int main() {
//	int a, hours, minutes1, minutes2, seconds1, seconds2, seconds;
//	cin >> a;
//	hours = a / 3600;
//	minutes1 = (a - ((a / 3600) * 3600)) / 600;
//	minutes2 = (a - ((a / 3600) * 3600)) / 60;
//	seconds = a - (((a - ((a / 3600) * 3600)) / 60) * 60);
//	seconds1 = seconds/10;
//	seconds2 = seconds % 10;
//		cout << hours << ":" << minutes1 << minutes2 << ":" << seconds1 << seconds2 << endl;
//	while (1);
//	return 0;
//}



//№5
//#include <iostream>
//using namespace std;
//
//int main() {
//	int a,chetch;
//	cin >> a;
//	chetch = (a / 2) * 2 + 2;
//	cout << chetch;
//
//	while (1);
//	return 0;
//}



//№6
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int a, PartOfc1, PartOfc2; cin >> a;
//	PartOfc1 = a / 1000 + (a / 100) % 10;
//	PartOfc2 = a % 10 + ((a / 10) % 10);
//	cout << PartOfc1 - PartOfc2 + 1 << endl;
//	while (1);
//	return 0;
//}



//№6-дополнительное задание, на отдельную оценку.
//#include <iostream>                            
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "rus");
//	int hight, up, down, result; cin >> hight >> up >> down;
//	result = 1 + (hight - down - 1) / (up - down);
//	cout << "Улитка дойдет до высоты " << hight << " за вот это количество дней :)   : " << result;
//	while (1);
//	return 0;
//}