#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class var
{
  public:
	int value;
	char s[100];
};

int main()
{
	var v, v1;
	v.value = 10;
	strcpy(v.s, "This is just a new string to check whether the object is getting written in to the specified file");
	fstream inFile;
	inFile.open("new.dat", ios::binary | ios::out | ios::app);
	inFile.write((char*)(&v), sizeof(v));
	inFile.close();
	
	//inFile.open("new.dat", ios::out);
	return 0;
}
