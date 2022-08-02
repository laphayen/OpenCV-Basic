
# 동영상 파일 저장
# VideoWriter 클래스

#include "opencv2/opecv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void camera_in_video_out()
{
	VideoCapture cap(0);

	if (!cap.isOpened())
	{
		cerr << "failed" << endl;
		return;
	}


	int w = cvRound(cap.get(CAP_PROP_FRAME_WIDTH));
	int h = cvRound(cap.get(CAP_PROP_FRAME_HEIGHT));

	int fourcc = VideoWriter::fourcc('D', 'I', 'V', 'X');

	VideoWriter outputBideo("output.avi", fourcc, fps, Size(w,h));

	if (!outputVideo.isOpened())
	{
		cout << "failed" << endl;
		return;
	}

	Mat frame;

	while (true)
	{
		cap >> frame;
		if (frame.empth())
			break;

		outputVideo << frame;

		imshow("frame", frame);

		waitKey();
	}
 	
 	destroyAllWindows();
}
