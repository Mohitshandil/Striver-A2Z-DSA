#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char alpha;
	cin>>alpha;
	if(alpha>='A' && alpha<='Z')
	{
		cout<<1;

	}
	else if(alpha>='a' && alpha<='z')
	{
		cout<<0;
	}
	else{ cout<<-1;
	}


	
}
