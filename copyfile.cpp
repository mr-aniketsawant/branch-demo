#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main( int argc,char *argv[])
{
	string str;
	if(argc<3)
	{
		cout<<"enter source file and destination file !!"<<endl;
	}



	ifstream read(argv[1]);
	ofstream write(argv[2]);

	if(!read)
	{
		cout<<"unable to read!"<<endl;
		return -1;
	}
	if(!write)
	{
		cout<<"unable to write!!"<<endl;
		return -1;
	}





	char ch ;
	while(getline(read,str))
	{
		write<<str;
//	        write<<endl;
	}


	write.close();
	read.close();



	return 0;
}

