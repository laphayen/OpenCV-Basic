
#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void RectOp();

int main()
{
	RectOp();
}

void RectOp()
{
	Rect rc1(10, 10, 200, 200); 

	Rect rc2 = rc1 + Size(100, 200);
	Rect rc3 = rc2 + Point(10, 10);

	cout << "rc1: " << rc1 << endl;
	cout << "rc2: " << rc2 << endl;
	cout << "rc2: " << rc2 << endl;
}
