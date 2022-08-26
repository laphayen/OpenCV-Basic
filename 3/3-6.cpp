#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void ScalarOp();

int main(void)
{ 
	ScalarOp();

	return 0;
}

void ScalarOp()
{
	Scalar gray = 88;
	cout << "gray: " << gray << endl;

	Scalar blue(255, 0, 0);
	cout << "blue: " << blue << endl;
}
