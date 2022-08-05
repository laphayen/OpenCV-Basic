
#include "opencv2/opecv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void video_in()
{
	VideoCapture cap("video name.avi");

	if (!cap.isOpened()) {
		cerr << "failed" << endl;
		return;
	} 

	Mat frame, inversed;

	while (true) {
		cap >> frame;
		if (frame.empty())
			break;

		inversed = ~frame;
		imshow("inversed", inversed);

 		waitKey();
 	}
 	
 	destroyAllWindows();
}
