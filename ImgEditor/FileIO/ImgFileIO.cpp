#include "stdafx.h"
#include "ImgFileIO.h"
#include "opencv2/opencv.hpp"
#include <opencv2\highgui\highgui.hpp>  
#include <opencv2\imgproc\imgproc.hpp>  
#include <opencv2\core\core.hpp>  
using namespace cv;


CImgFileIO::CImgFileIO(void)
{
}

CImgFileIO::~CImgFileIO(void)
{
}

CImgFileIO::CImgFileIO(char* fp)
{
	ASSERT(NULL != fp);
	Mat img = imread(fp);
	for( int i = 0; i < img.rows; ++i)
	{
		//获取第 i 行首像素指针
		Vec3b * p = img.ptr<Vec3b>(i);
		for( int j = 0; j < img.cols; ++j )
		{
			p[j][0] = i%255; //Blue
			p[j][1] = j%255; //Green
			p[j][2] = 0; //Red
		}
	}
	imshow("mypic", img); 
	waitKey();  
}
