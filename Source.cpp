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


#include <iostream>
using namespace std;

enum Color {
	Red,
	Orange,
	Yellow,
	Green,
	Blue,
	DarkBlue,
	Purple
};

struct Triangle {
	Color p1;
	int array[3];
	
};
int main() {
	Triangle point2 = { 6,{3,5,6} };
	for (int i = 0; i < 3; ++i) {
		cout << point2.array[i] << endl;
	}
	Color p1 = point2.p1;
	switch (p1)
	{
	case Red:
		cout << "Red";
		break;
	case Orange:
		cout << "Orange";
		break;
	case Yellow:
		cout << "Yellow";
		break;
	case Green:
		cout << "Green";
		break;
	case Blue:
		cout << "Blue";
		break;
	case DarkBlue:
		cout << "DarkBlue";
		break;
	case Purple:
		cout << "Purple";
		break;
	default:
		cout << "Ti Ne Nazval! Check ENUM";
		break;
	}

	while (true);
	return 0;
}