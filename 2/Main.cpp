
#include "opencv2/opencv.hpp"
#include "iostream"

using namespace cv;
using namespace std;

int main()
{
	Mat img;
	img = imread("lenna.png");

	if (img.empty())
	{
		cerr << "Image load failed!" << endl;
		return -1;
	}

	namedWindow("image");
	imshow("image", img);
	
	waitKey();

	return 0;
}
