#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void mytest() {
	VideoCapture cap(0);
	Mat img;

	while (true)
	{
		cap.read(img);

		imshow("Image", img);
		waitKey(0);
	}
}
void mytest2()
{
	string path = "Camera Roll/db6c6228-6d50-4e.jpg";
	Mat img = imread(path);
	imshow("image", img);
	waitKey(0);

}

void mytest3() {

	string path = "Camera Roll/WhatsApp Video 2021-03-12 at 12.40.50 PM.mp4";
	VideoCapture cap(path);
	Mat img;

		while (true)
		{
			cap.read(img);
			
			imshow("Image", img);
			waitKey(1);
		}
}

void main() {

	int x;
	cout << "Type a number: "; // Type a number and press enter
	cin >> x;

	int y = x;
	switch (y) {
	case 1:
		mytest();
		break;
	case 2:
		mytest2();
		break;
	case 3:
		mytest3();
		break;
	}
}
