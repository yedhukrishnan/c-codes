/* Load and display an image using C program (OpenCV) */

#include <stdio.h>
#include <highgui.h>
#include <cv.h>

int main()
{
	char file_name[20];
	IplImage *img = 0;
	
	printf("Enter file name to open : ");
	scanf("%s", file_name);
	
	/* Loads the image into the program */
	img = cvLoadImage(file_name, 1);
	
	/* Create a window and display the image using that window */
	cvNamedWindow("Image", CV_WINDOW_AUTOSIZE);
	cvShowImage("Image", img);
	cvWaitKey(0);
	cvReleaseImage(&img);
	cvDestroyWindow("Image");
	
	return 0;
}
