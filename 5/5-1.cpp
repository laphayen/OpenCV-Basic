
# 키보드 이벤트 처리
# waitKey() 함수 사용

#include "opencv2/openCV.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(void)
{
	Mat img = imread("lenna.jpg")

	nameWindow("img");
	imshow("img", img);

	while (true)
	{
		int keycode = waitKey();

		if (keycode = 'Q' || keycode == 'q')
		{
			break;
		}
	}

	return 0;
}
