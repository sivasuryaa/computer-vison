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
	Mat imgResize,imgCrop;

	//cout << img.size() << endl;
	resize(img, imgResize, Size(),0.5,0.5);

	Rect roi(100, 100, 300, 150);
	imgCrop =img(roi);

	imshow("image", img);
	imshow("image resize", imgResize);
	imshow("imge crop", imgCrop);

	

	waitKey(0);

}
