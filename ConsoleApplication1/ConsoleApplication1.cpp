// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<opencv2/opencv.hpp>
//#include<opencv2/core.hpp>
//#include<opencv2/imgcodecs.hpp>
//#include<opencv2/highgui.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main()
{
	Mat img = imread("D:/Development/ConsoleApplication1/x64/Lenna.png",IMREAD_COLOR);
	namedWindow("image", WINDOW_AUTOSIZE);
	imshow("image", img);
	waitKey(0);
	return 0;
}