//#include <iostream>
//#include  <array>
//#include "nvector.h"
//using namespace std;
//
//
//int main()
//{
//	
//	nList<double> myVec = { 1, 2, 3, 4 };
//	myVec.push_back(54);
//
//	//for(int i = 0; i < myVec.size(); i++)
//	//{
//	//	cout << myVec[i] << endl;
//	//}
//
//	myVec.pop_back();
//
//	//for (int i = 0; i < myVec.size(); i++)
//	//{
//	//	cout << myVec[i] << endl;
//	//}
//	nList<nList<double>> myVectOfVec =
//	{
//	{1, 2, 3 ,3 ,4},
//	{1, 2 ,3 ,4 ,5},
//	{2, 3, 2, 1, 2}
//	};
//
//	nList<nList<double>> myVectOfVec2 = {};
//
//	for(int i = 0; i < 3; i++)
//	{
//		myVectOfVec2.push_back(nList<double>());
//	}
//
//	cout <<	myVectOfVec[1][2];
//}


//#include <thread>
//#include <chrono>
//#include "windows.h"
//#include <iostream>
//#include <cmath>
//using namespace std;
//#define PI 3.14
//int main() {
//	HWND myconsole = GetConsoleWindow();
//	HDC mydc = GetDC(myconsole);
//	int pixel = 0;
//	int pixel_1 = 0;
//	COLORREF COLOR = RGB(255, 255, 255);
//
//	//Draw pixels
//	for (double i = 0; i < PI * 10000; i += 0.001)
//	{
//		/*SetPixel(mydc, pixel, (double)(100 + 25 * cos(10 * sin(i))*tan(10 * i)*sin(69 * (-i + 10)) - sin(i)*-i - tan(i) + 30 / i + 69 / i * 2 + sin(tan(cos(pow(i / sin(i), 1 / 3)))) / 40), COLOR);
//		SetPixel(mydc, pixel, 0.2*(double)(80 + 25 * cos(10 * sin(i))*tan(10 * i)*sin(69 * (-i + 10)) - sin(i)*-i - tan(i) + 30 / i -10 / i * 3 + sin(tan(tan(pow(i / sin(i/pow(i, 1/3)), 1 / 3)))) / 40), COLOR);
//		SetPixel(mydc, pixel, 1.65 * (double)(90 + 25 * cos(10 * sin(i))*tan(10 * i)*sin(69 * (-i + 10)) - sin(i)/i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel, 0.2 * (double)(110 * sin(20*i/2*i) * cos(10 * sin(i))*tan(10 * i)*sin(69 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel, 0.2 * (double)(120 - sin(300 * i / 2 * i) * cos(10 * sin(i))*tan(10 * i)*sin(69 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel, 0.2 * (double)(130 + sin(20 * i / 2 * i) * cos(10 * sin(i))*tan(10 * i)*sin(69 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel, i * (double)(50 + 2 * tan(10 * sin(i/PI))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i / 30 / i * 2 + sin(cos(sin(pow(i / sin(i/13*i), 1 / 3)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel, i * (double)(30 + 2 * tan(10 * sin(i / PI*i))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i*sin(i/2*i) / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel, i * (double)(40 + 2 * sin(10 / sin(i / PI*sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//*/
//		SetPixel(mydc, pixel,  (double)(5 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel,  (double)(10 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel,  (double)(15 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel,  (double)(20 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel,  (double)(25 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel,  (double)(30 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel,  (double)(35 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel,  (double)(40 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel,  (double)(45 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel,  (double)(50 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel,  (double)(55 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel,  (double)(60 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel,  (double)(65 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel,  (double)(70 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel,  (double)(75 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel,  (double)(80 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel,  (double)(85 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel,  (double)(90 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel,  (double)(95 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel,  (double)(100 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel,  (double)(100 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel,  (double)(110 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel, (double)(115 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel, (double)(120 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel, (double)(125 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel, (double)(130 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel,  (double)(135 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel, (double)(140 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel, (double)(145 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel, (double)(150 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel, (double)(155 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel, (double)(160 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel, (double)(165 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel, (double)(170 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel, (double)(175 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel, (double)(180 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel, (double)(185 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel, (double)(190 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel, (double)(195 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel, (double)(200 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel, (double)(205 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel, (double)(210 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel, (double)(215 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel, (double)(220 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel, (double)(225 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel, (double)(230 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel, (double)(235 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel, (double)(240 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel, (double)(245 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel, (double)(250 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel, (double)(255 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel, (double)(260 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel, (double)(265 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel, (double)(270 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel, (double)(275 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel, (double)(280 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel, (double)(285 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel, (double)(290 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel, (double)(295 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		SetPixel(mydc, pixel, (double)(300 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//		SetPixel(mydc, pixel, (double)(305 + 2 * sin(10 / sin(i / PI * sin(i)))*tan(10 * i)*sin(62 * (-i + 10)) - sin(i) / i - tan(i) + 30 / i + 30 / i * 2 + tan(tan(cos(pow(i / sin(i), 1 / 99)))) / 10), COLOR);
//
//		
//		
//		std::this_thread::sleep_for(std::chrono::milliseconds(1));
//
//
//		SetPixel(mydc, pixel_1, (double)(20 + 25 * tan(1/3 * sin(pow(2, 2 / 69))) / (1 / 13*i) / tan(pow(i, 1/133) * (-i + 10)) - sin(i)*-i - pow(i, 1 / 3) / 40), COLOR);
//		std::this_thread::sleep_for(std::chrono::milliseconds(2));
//
//		SetPixel(mydc, pixel, (double)(sin(pow(i, (1/20*i)+10/i))), COLOR);
//
//		pixel += 1 * pow(i, 0.1);
//		pixel_1 += 1;
//	}
//
//
//
//	ReleaseDC(myconsole, mydc);
//	cin.ignore();
//	return 0;
//}

//Грозьо Станиев?? Геом