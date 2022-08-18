
#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void SizeOp();

int main()
{
	SizeOp();
}

void SizeOp()
{
	Size sz1, sz2;
	sz1.width = 10; sz1.height = 20;
	sz2(100, 200);
	int area1 = sz1.area();

	cout << "sz1: " << sz1 << endl;
	cout << "sz2: " << sz2 << endl;
}
