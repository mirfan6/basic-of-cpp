#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"type the number of interger ";
	cin>>a;
	for (int i=1; i<=10; i++){
		cout<< a <<"*"  << i <<"=" << i*a  <<endl;
	}
	return 0;
}
