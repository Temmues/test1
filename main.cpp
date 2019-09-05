#include <iostream>

using namespace std; 

int main()
{
	int userInput = 0;
	cout << "please enter a number ";
	cin >> userInput;
	if ((userInput % 2) == 0)
	{
		cout << "Your number " << userInput << " is even" << endl; 
	}
	else
	{
		cout << "Your number is odd" << endl; 
	}
}