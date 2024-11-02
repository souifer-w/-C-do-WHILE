#include<iostream>
#include<string>

using namespace std;

int readdo(string message)
{

	int number = 0;
	cout << message<< endl;
	cin >> number;


	return number;




}
int sumdo()
{
	int sum = 0, number = 0, i = 1;

	do
	{
		number = readdo("please enter your number " + to_string(i));

		if (number == -99)
		{
			break;
		}
		sum += number;
		i++;
	} while (number!=-99);

	return sum;
}
int main()
{

	cout << "thr Result " << sumdo() << endl;

	return 0;
}