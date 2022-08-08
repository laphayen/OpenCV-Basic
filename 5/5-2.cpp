
#include "opencv2/openCV.hpp"
#include <iostream>

using namespace cv;
using namespace std;

Mat img;
Point ptOld;
void on_mouse(int event, int x, int y, int flags, void*);


int main(void)
{
	img = imread("lenna.jpg");

	namedWindow("img");
	setMouseCallback("img", on_mouse);

	imshow("img", img);

	waitKey();

	return 0;
}


void on_mouse(int event, int x, int y, int flags, void*)
{
	switch (event)
	{
		case EVENT_LBUTTONDOWN:
			ptOld = Point(x, y);
			cout << "EVENT_LBUTTONDOWN: " << x << ", " << y << endl;
			break;
		case EVENT_LBUTTONOP:
			cout << "EVENT_LBUTTONOP: " << x << ", " << y << endl;
			break;
		default:
			break;
	}
}