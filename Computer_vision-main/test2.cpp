#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void main()
{
	string path = "Camera Roll/db6c6228-6d50-4e.jpg";
	Mat img = imread(path);
	Mat imgGray,imgBlur,imgCanny,imgDia,imgErode;

	

	cvtColor(img, imgGray, COLOR_BGR2GRAY);
	GaussianBlur(img, imgBlur, Size(3,3),3,0);
	Canny(imgBlur, imgCanny, 50, 150);
	//erode(imgDia, imgErode, kernal);

	Mat kernal = getStructuringElement(MORPH_RECT, Size(3, 3));
	dilate(imgCanny, imgDia, kernal);
	erode(imgDia, imgErode, kernal);

	imshow("image", img);
	imshow("image Gray", imgGray);
	imshow("image Blur", imgBlur);
	imshow("image Canny", imgCanny);
	imshow("image Dilate", imgDia);
	imshow("image Erode", imgErode);

	waitKey(0);

}

