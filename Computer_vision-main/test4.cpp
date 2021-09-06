#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void main()
{
	
	Mat img (512,512, CV_8UC3,Scalar(255,255,255));
	circle(img, Point(256, 256), 155, Scalar(0, 69, 255),FILLED);
	rectangle(img, Point(136, 230), Point(382, 280), Scalar(255, 255, 255),FILLED);
	line(img, Point(138, 290), Point(382, 290), Scalar(255, 255, 255), 2);

	putText(img, "Dhuruvasan Surya", Point(140, 270), FONT_HERSHEY_DUPLEX, 0.75, Scalar(0, 69, 255), 2);


	imshow("image", img);
	


	waitKey(0);

}
