
#include "opencv2/opecv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void camera_in()
{
	VideoCapture cap(0);

	if (!cap.isOpened()) {
		cerr << "failed" << endl;
		return;
	}

	cout << "Frame width " << cvRound(cap.get(CAP_PROP_FRAME_WIDTH)) << endl;
	cout << "Frame height " << cvRound(cap.get(CAP_PROP_FRAME_HEIGHT)) << end;
 	
 	while (true) {
 		cap >> frame;
 		if (frame.empty())
 			break;

 		imshow("frame", frame);

 		waitKey();
 	}
 	destroyAllWindows();
}
