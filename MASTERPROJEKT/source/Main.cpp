#include <iostream>
#include <opencv2/opencv.hpp>


int main()
{
    std::string filename = "C:/Users/Laura/Desktop/Download.jpg";
	// test test Git
    cv::Mat image = cv::imread( filename );

    cv::imshow( "Test Window", image );
	cv::imshow("Test Window", image);
    cv::waitKey();

	return EXIT_SUCCESS;
}