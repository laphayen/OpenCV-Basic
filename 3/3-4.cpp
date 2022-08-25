
#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void RotatedRectOp();

int main()
{
	RotatedRectOp();
}

void RotatedRectOp()
{
	RotatedRect r1(Point2f(50, 50), Size2f(40, 40), 30.f);

	Point2f pts[4];
	r1.points(pts);

	Rect br = r1.boundingRect();
}
