
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

	cout << "Frame count" << cvRound(cap.get(CAP_PROP_FRAME_COUNT)) << endl;
	cout << "Frame width " << cvRound(cap.get(CAP_PROP_FRAME_WIDTH)) << endl;
	cout << "Frame height " << cvRound(cap.get(CAP_PROP_FRAME_HEIGHT)) << end;
	cout << "Frame height " << cvRound(cap.get(CAP_PROP_FPS)) << end;

	Mat frame;
	while (true) {
		cap >> frame;
		if (frame.empty())
			break;

		imshow("frame", frame);

 		waitKey();
 	}
 	
 	destroyAllWindows();
}
