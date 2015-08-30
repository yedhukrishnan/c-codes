#include <cv.h>
#include <highgui.h>
#include <stdio.h>

// A Simple Camera Capture Framework
int main()
{
	CvCapture* capture = cvCaptureFromCAM(0);
	IplImage* frame;
	if (!capture)
	{
		fprintf( stderr, "ERROR: capture is NULL \n" );
		getchar();
		return -1;
	}
	
	// Create a window in which the captured images will be presented
	cvNamedWindow( "mywindow", CV_WINDOW_AUTOSIZE );
	
	// Show the image captured from the camera in the window and repeat
	while(1)
	{
		// Get one frame
		frame = cvQueryFrame( capture );
		if ( !frame )
		{
			fprintf( stderr, "ERROR: frame is null...\n" );
			getchar();
			break;
		}
		cvShowImage( "mywindow", frame );
		
		//If space key is pressed, capture frame, if esc is pressed, exit
		if ((cvWaitKey(10) & 255) == 27 )
			break;
	}
	while(1)
	{
		cvShowImage( "mywindow", frame );
		if ( (cvWaitKey(10) & 255) == 27 ) break;
	}
	cvSaveImage("captured.jpg", frame);
	// Release the capture device housekeeping
	cvReleaseCapture( &capture );
	cvDestroyWindow( "mywindow" );
	return 0;
}
