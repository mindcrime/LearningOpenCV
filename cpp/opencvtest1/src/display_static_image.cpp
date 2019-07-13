#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace std;

#ifdef FOO

int main(int argc, char **argv)
{
	cv::Mat image = cv::imread("/home/prhodes/Pictures/Arduino-Uno.jpg", -1 );

	if( !image.data )                              // Check for invalid input
	{
		cout << "Could not open or find the image" << std::endl;
		return -1;
	}

	cv::namedWindow("Display window", cv::WINDOW_AUTOSIZE); // Create a window for display.
	cv::imshow("Display window", image);                // Show our image inside it.

	cv::waitKey(0);                            // Wait for a keystroke in the window

	cout << "Done" << endl;

	return 0;
}
#endif
