#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <iostream>

using namespace std;

#ifdef FOO

int main(int argc, char **argv)
{

	cv::namedWindow( "Video Example", cv::WINDOW_AUTOSIZE );
	cv::VideoCapture cap;

	// cap.open( "/home/prhodes/Videos/somefile.avi" );
	cap.open( "/home/prhodes/Videos/somefile.mp4" );

	cv::Mat frame;
	for( ; ; )
	{
		cap >> frame;
		if( frame.empty())
		{
			break;
		}

		cv::imshow( "Video Example", frame );
		if( cv::waitKey(33) >= 0 )
		{
			break;
		}
	}

	cout << "Done" << endl;

	return 0;
}
#endif
