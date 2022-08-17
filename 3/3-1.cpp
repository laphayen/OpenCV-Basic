
#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void PointOp();

int main()
{
	PointOp();
}

void PointOp()
{
	Point pt1, pt2;
	pt1.x = 8; pt1.y = 8;
	Point pt2(6, 17);
 
	cout << "pt1: " << pt1 << endl;
	cout << "pt2: " << pt2 << endl;
}
