//#include <iostream>
//using namespace std;
//const float f = 0.5F;
//const long long ll = 123LL;
//int main() {
//	int value = 10;
//	int * ptr = &value;
//	cout << &value<<endl;
//	cout << ptr;
//	cout << endl;
//	unsigned int a = 5U;
//	double b = 0.8;
//	unsigned int * ptrA = &a;
//	double * ptrB = &b;
//	 float * ptrF =(float *) &f;
//	 long long* ptrLL = (long long*)& ll;
//	*ptrB = 0.25;
//	cout << *ptrA + 1 << endl;
//	cout << *ptrB<<endl;
//	cout << *ptrF*2 << endl;
//	cout << *ptrLL%10 << endl;
//	while (1);
//	return 0;
//}






//#include <iostream>
//using namespace std;
//int main() {
//
//	int t[4] = { 8,4,2,1 }; //§à§Ò§ì§ñ§Ó§Ý§Ö§ß§Ú§Ö §Þ§Ñ§ã§ã§Ú§Ó§Ñ §Ú§Ù 4 §ï§Ý§Ö§Þ§Ö§ß§ä§à§Ó
//
//	int* p1 = t + 2, * p2 = p1 - 1; //p1 - §å§Ü§Ñ§Ù§Ñ§ä§Ö§Ý§î §ß§Ñ §ä§â§Ö§ä§Ú§Û §ï§Ý§Ö§Þ§Ö§ß§ä §Þ§Ñ§ã§ã§Ú§Ó§Ñ (2) , §Ñ p2 - §ï§ä§à §å§Ü§Ñ§Ù§Ñ§ä§Ö§Ý§î
//	//§ß§Ñ §Ó§ä§à§â§à§Û §ï§Ý§Ö§Þ§Ö§ß§ä §Þ§Ñ§ã§ã§Ú§Ó§Ñ (4)
//
//	p1++; // §Ñ §ä§Ö§á§Ö§â§î §ï§ä§à §å§Ü§Ñ§Ù§Ñ§ä§Ö§Ý§î §ß§Ñ 4 §ï§Ý§Ö§Þ§Ö§ß§ä §Þ§Ñ§ã§ã§Ú§Ó§Ñ (1)   P.S. - §ß§å§Þ§Ö§â§Ñ§è§Ú§ñ §Þ§Ñ§ã§ã§Ú§Ó§Ñ §ß§Ñ§é§Ú§ß§Ñ§Ö§ä§ã§ñ §ã §ß§å§Ý§ñ.
//	//p1 =3
//
//	cout << *p1 - t[p1 - p2] << endl; //*p1 - §ã§Ñ§Þ §ï§Ý§Ö§Þ§Ö§ß§ä, §Ñ p1 §Ú p2 - §è§ï §å§Ü§Ñ§Ù§Ñ§ä§Ö§Ý§Ú §ß§Ñ §ï§Ý§Ö§Þ§Ö§ß§ä§í §Þ§Ñ§ã§ã§Ú§Ó§Ñ §Ú §Ó§í§Ó§à§Õ§ñ§ä §ß§à§Þ§Ö§â§Ñ §Ú§ç)
//	//*p1=1      p1=3     p2=1
//	
//	int sum = 0;
//	int data[5] = { 1,2,3,4,5};
//	int * ptrB = data;
//	for (int i = 0; i < 5; ++i) {
//		cout << *ptrB<<" ";
//		ptrB++;
//	}
//	int * ptrB2 = data;
//	for (int i = 0; i < 5; ++i) {
//		sum += *ptrB2 * 2;
//		ptrB2++;
//	}
//	cout << sum;
//	while (1);
//	return 0;
//}





//#include <iostream>
//#include "Extention.hpp"
//using namespace std;
//using namespace ext;
//int main() {
//	int arr[20];
//	for (int i = 0; i < 20; ++i) {
//		arr[i] = GetRandomValue(-100, 100);
//	}
//	int* ptr = arr;
//	for (int i = 0; i < 20; ++i) {
//		cout << *ptr << " ";
//		ptr++;
//	}
//	cout << endl;
//	int * ptr2 = arr;
//	int min=100;
//	int* min1 = &min;
//	for (int i = 0; i < 20; ++i) {
//		if (*ptr2 < *min1) {
//			*min1 = *ptr2;
//		}
//		ptr2++;
//	}
//	cout << *min1 << endl;
//	cout << min1;
//	while (1);
//	return 0;
//}





//#include <iostream>
//using namespace std;
//int main() {
//	const char data[] = "abcdefghijklmnopqrstuvwxyz";
//	int counter =0;
//	 char* ptrD = (char*)data;
//	 char value; cin >> value;
//	 for (int i = 1; i < 27;++i) {
//		 if (*ptrD == value) {
//			 counter++;
//			 cout << i;
//			 getchar();
//		 }
//		 ptrD++;
//	 }
//	 if (counter == 0) {
//		 cout << "-1";
//	}
//	 while (1);
//	return 0;
//}