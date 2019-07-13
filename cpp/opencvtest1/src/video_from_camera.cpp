
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;

int main( int argc, char** argv )
{

	cv::namedWindow( "Camera Example", cv::WINDOW_AUTOSIZE );
	cv::VideoCapture cap;

	cap.open( 0 );

	cv::Mat frame;
	for( ; ; )
	{
		cap >> frame;
		if( frame.empty())
		{
			break;
		}

		cv::imshow( "Camera Example", frame );
		if( cv::waitKey(2) >= 0 )
		{
			break;
		}
	}

	cout << "Done" << endl;

	return 0;
}




