#include <iostream>
using namespace std;


int main()
{
	char letters[256];
	int change;


	//++
	cout<<" how to use git and github? "<<endl;
	//
	

	//modify
	cout<<"hello. this is jihyng world! welcome"<<endl;
	/////////

	cout<<"Enter the string : ";
	cin.getline(letters,256);
	
	for(int i=0; i<256; i++)
	{
		if(letters[i]>='A' && letters[i]<='Z')
		{
			change = letters[i] - 'A';
			letters[i] = 'a' + change;
		}

		else if(letters[i]>='a' && letters[i]<='z')
		{
			change = letters[i] - 'a';
			letters[i] = 'A' + change;
		}
	}

	cout<<"Result : "<<letters<<endl;

	return 0;
}

