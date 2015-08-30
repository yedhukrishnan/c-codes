/* Open an image and save its transpose image as a file */

#include <stdio.h>
#include <highgui.h>
#include <cv.h>

int main()
{
	char file_name[20];
	IplImage *img = 0, *img2, stub;
	
	printf("Enter file name to open : ");
	scanf("%s", file_name);
	
	img = cvLoadImage(file_name, 1);
	
	
	cvTranspose(img2, img);
	
	cvSaveImage("transposed.jpg", img2);

	return 0;
}
