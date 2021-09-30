#include <iostream>
using namespace std;



int main()
{
	long long n;
	cout << "Please enter a number: ";
	cin >> n;
	long long tmp = n;
	int count=0;

	while (n != 0)
	{	
		//n = n % 10;
		n=n/10;
		count++;
     }
	
	cout << "The digits are: "<<count << endl;
	return 0;
}

