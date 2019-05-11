//#include <iostream>
//#include <cmath>
//using namespace std;
//void func(int n) {
//	for (int i = 0; i < n; ++i) {
//		cout << pow(i, 3) << endl;
//	}
//}
//int main() {
//	int a; cin >> a;
//	func(a);
//	while (1);
//	return 0;
//}




//#include <iostream>
//#include <cmath>
//using namespace std;
//int func(int h, int r) {
//	int S = h * pow(r, 2);
//	return S;
//}
//int main() {
//	int a, b; cin >> a>> b;
//	cout<<func(a, b);
//	while (1);
//	return 0;
//}


#include <iostream>
#include <cmath>
using namespace std;
int min(int k, int e) {
	if (k > e) {
		return e;
	}
	else return k;
}
void min4(int a, int b, int c, int d) {
	cout<<min(min(a, b), min(c, d));
}
int main() {
	int a, b, c, d; cin >> a >> b >> c >> d;
	min4(a, b, c, d);



	while (1);
	return 0;
}