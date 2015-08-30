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
	
	CvMat *mat = cvCreateMat(img->height, img->width, CV_32FC3);
	/* Convert image to CvMat object */
	cvConvert(img, mat);
	
	CvMat *mat_transpose = cvCreateMat(mat->cols, mat->rows, CV_32FC3);
	/* Find the transpose */
	cvTranspose(mat, mat_transpose);
	
	/* Convert back to IplImage and save to directory */
	img2 = cvGetImage(mat_transpose, &stub);
	cvSaveImage("transposed.jpg", img2);

	return 0;
}
