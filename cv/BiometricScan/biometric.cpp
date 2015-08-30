/* Biometric Scanning System */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <cv.h>
#include <highgui.h>
#include <fftw3.h>

using namespace std;

//User Information
class UserData
{
	char username[30], password[30], photo[30];
  public:
  	void adduser(char* usrname, char* pswd, char* ph)
  	{
  		strcpy(username, usrname);
  		strcpy(password, pswd);
  		strcpy(photo, ph);
  	}
  	char* getusername()
  	{
  		return username;
  	}
  	char* getpassword()
  	{
  		return password;
  	}
  	char* getphoto()
  	{
  		return photo;
  	}
}user[10];

void add_userinfo();
void scan_user();

int main()
{
	int choice;
	while(1)
	{
		cout<<"1. Add User\n2. Scan\n5. Exit\n  : ";
		cin>>choice;
		if(choice == 5)
			break;
		switch(choice)
		{
			case 1:
				add_userinfo();
				break;
			case 2:
				scan_user();
				break;
			default:
				cout<<"Wrong choice!"<<endl;
		}	
	}
	return 0;
}

void add_userinfo()
{
	UserData new_user;
	char usr[30], pswd[30], ph[30];
	fstream outFile;
	cout<<"Please input details\n";
	cout<<"Username		: ";
	cin>>usr;
	cout<<"Password		: ";
	cin>>pswd;
	sprintf(ph, "%s.jpg", usr);
	//-------------------Capture Frame-------------------------
	CvCapture* capture = cvCaptureFromCAM(0);
	IplImage *frame, *origImg=0, *subImg=0,*grayImg=0,*blackImg=0;
	int depth;
	cvNamedWindow("CaptureImage", CV_WINDOW_AUTOSIZE);
	while(1)
	{
		frame = cvQueryFrame(capture);
		if(!frame) 
			break;
		cvShowImage( "CaptureImage", frame );
		if ((cvWaitKey(10) & 255) == 27 )
			break;
	}
	//cvSaveImage(ph, frame);
	cvReleaseCapture(&capture);
	cvDestroyWindow("CaptureImage");
	//---------------------------------------------------------
	/*---------------------------------------------------------
	origImg=cvCloneImage(frame);
    grayImg=cvCreateImage(cvGetSize(origImg),depth,1);

    cvCvtColor(origImg,grayImg,CV_RGB2GRAY);
    CvRect r=
    {

        180,140,280,300
    };
    cvSetImageROI(grayImg,r);
    subImg = cvCreateImage(cvSize(280,300),depth,1);
    cvCopy(grayImg,subImg,NULL);
    cvResetImageROI(grayImg);
    blackImg=cvCreateImage(cvGetSize(grayImg),depth,1);
    CvRect rect = cvRect(180, 140, subImg->width, subImg->height);
    cvSetImageROI(blackImg, rect);
    //Add both images cvAdd(subImg, blackImg, blackImg, NULL);
    cvResetImageROI(blackImg);
    cvSaveImage("roiimg.jpg",blackImg);
    ---------------------------------------------------------*/
	new_user.adduser(usr, pswd, ph);
	outFile.open("Users.dat", ios::binary | ios::out | ios::app);
	outFile.write((char*)&new_user, sizeof(new_user));
	outFile.close();
}

void scan_user()
{
}
