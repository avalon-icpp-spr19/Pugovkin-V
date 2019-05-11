//#include <iostream>
//#include <cmath>
//using namespace std;
//struct point {
//public:
//	float x;
//	float y;
//	//float x2;
//	//float y2;
//	//float kx;
//	//float ky;
//};
//int main() {
//	cout << "FIRST PART" << endl;
//	cout << endl;
//	point p1;
//	point p2;
//	point p3;
//	cin>> p1.x ;
//	cin >> p1.y;
//	
//	int r; cin >> r;
//	if ( (pow(p1.x,2)) + (pow(p1.y,2)) == pow(r,2)) {
//		cout <<"true";
//	}
//	else cout << "false";
//	
//	cout << endl;
//	cout << endl;
//	cout << "SECOND PART" << endl;
//	cin >> p2.x;
//	cin >> p2.y;
//	
//
//	p3.x = (p2.x + p1.x) / 2;
//	p3.y = (p1.y + p2.y) / 2;
//
//	cout << p3.x << " " << p3.y;
//	cout << endl;
//
//
//
//
//	while (true);
//	return 0;
//}

//
//struct Point {
//
//	float x;
//	float y;
//
//};
//
//#include <iostream>
//using namespace std;
//struct Circle {
//	float r; //radius
//	Point CentreOfCircle; //centre of circle
//
//};
//
//int main() {
//	Circle p1;
//	Circle p2;
//	cin >> p1.r;
//	cin >> p2.r;
//	cin >> p1.CentreOfCircle.x >> p1.CentreOfCircle.y;
//	cin >> p2.CentreOfCircle.x >> p2.CentreOfCircle.y;
//	
//	if (sqrt(pow(p2.CentreOfCircle.x - p1.CentreOfCircle.x,2) + pow(p2.CentreOfCircle.y - p1.CentreOfCircle.y,2)) < p2.r) {
//		cout << "true";
//	}
//	else cout << "false";
//	while (true);
//	return 0;
//}
//
//
//#include <iostream>
//using namespace std;
//
//enum Color {
//	Red,
//	Orange,
//	Yellow,
//	Green,
//	Blue,
//	DarkBlue,
//	Purple
//};
//
//struct Triangle {
//	Color p1;
//	int array[3];
//	
//};
//int main() {
//	Triangle point2 = { 6,{3,5,6} };
//	for (int i = 0; i < 3; ++i) {
//		cout << point2.array[i] << endl;
//	}
//	Color p1 = point2.p1;
//	switch (p1)
//	{
//	case Red:
//		cout << "Red";
//		break;
//	case Orange:
//		cout << "Orange";
//		break;
//	case Yellow:
//		cout << "Yellow";
//		break;
//	case Green:
//		cout << "Green";
//		break;
//	case Blue:
//		cout << "Blue";
//		break;
//	case DarkBlue:
//		cout << "DarkBlue";
//		break;
//	case Purple:
//		cout << "Purple";
//		break;
//	default:
//		cout << "Ti Ne Nazval! Check ENUM";
//		break;
//	}
//
//	while (true);
//	return 0;
//}



//
//#include <iostream>
//#include "Extention.hpp"
//#include <cmath>
//using namespace std;
//using namespace ext;
//struct Point {
//	int x;
//	int y;
//};
//int main() {
//	int min = 100;
//	Point array[20];
//	for (int i = 0; i < 20; ++i) {
//		array[i].x = GetRandomValue(0, 100);
//		array[i].y = GetRandomValue(0, 100);
//	}
//	for (int i = 0; i < 20; ++i) {
//		cout << array[i].x << " " << array[i].y << endl;
//	}
//	for (int i = 0; i < 20; ++i) {
//		if (array[i].x < min) {
//			min = array[i].x;
//		}
//	}
//	cout << endl;
//	cout << min << endl;
//
//	int min2 = 142;
//	for (int i = 0; i < 20; ++i) {
//		for (int j = i + 1; j <= 20; ++j) {
//			if (sqrt(pow(array[j].x - array[i].x, 2) + pow(array[j].y - array[i].y, 2)) < min2) {
//				min2 = sqrt(pow(array[j].x - array[i].x, 2) + pow(array[j].y - array[i].y, 2));
//			}
//		}
//	}
//	cout << endl;
//	cout << min2 << endl;
//	while (1);
//	return 0;
//}

#include <iostream>
#include "Extention.hpp"
#include <cmath>
using namespace std;
using namespace ext;

struct Triangle {
	int a;
	int b;
	int c;
};
int main() {
	Triangle arr[100];
	for (int i = 0; i < 100; i++) {
		arr[i].a = GetRandomValue(1, 10);
		arr[i].b = GetRandomValue(1, 10);
		arr[i].c = GetRandomValue(1, 10);
		cout << arr[i].a << " " << arr[i].b << " " << arr[i].c << " : ";
		if (arr[i].a + arr[i].b > arr[i].c && arr[i].c + arr[i].b > arr[i].a && arr[i].c + arr[i].a > arr[i].b) {
			cout << "§Ô§à§Õ§Ö§ß" << endl;
		}
		else cout << "§ß§Ö §ã§ä§â§à§Ú§ä§ã§ñ" << endl;
	}
	cout << endl;
	cout << "§Ù§ß§Ñ§é§Ö§ß§Ú§Ö §á§Ö§â§Ú§Þ§Ö§ä§â§Ñ" << endl;
	int a;
	cin >> a;
	cout << endl;
	for (int i = 0; i < 100; i++) {
		int P = arr[i].a + arr[i].b + arr[i].c;
		if (P > a) {
			cout << P << endl;
		}
	}
	int arrk[100];
	int red = 0;
		int	orange=0;
	int	yellow=0;
	int	green=0;
	int	blue=0;
	int	darkBlue = 0;
	int	purple = 0;
	for (int j = 0; j < 100; ++j) {
		arrk[j] = GetRandomValue(0, 1);
	}
	//§è§Ú§Ü§Ý §ã §Ü§à§Ý-§Ó§à§Þ §ä§â§Ö§å§Ô§à§Ý§î§ß§Ú§Ü§à§Ó §Ü§Ñ§Ø§Õ§à§Ô§à §è§Ó§Ö§ä§Ñ
	for (int j = 0; j < 100; ++j) {
		switch (arrk[j]) {

		case 0:
			red+=1;
		case 1:
			orange+=1;
		case 2:
			yellow+=1;
		case 3:
			green+=1;
		case 4:
			blue+=1;
		case 5:
			darkBlue+=1;
		case 6:
			purple+=1;
		}

	}
	cout << "Red: " << red <<endl;
	cout << "Orange: " << orange << endl;
	cout << "Yellow: " << yellow << endl;
	cout << "Green: " << green << endl;
	cout << "Blue: " << blue << endl;
	cout << "DarkBlue: " << darkBlue << endl;
	cout << "Purple: " << purple << endl;
	while(1);
	return 0;
}