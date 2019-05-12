#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
int main()
{
	int arr[10], n, i, small, large, sum = 0;
	float average;
	n = 10;

	for(i = 0; i < n; i++)
	{
	cout << "Enter number " << i + 1 << " : ";
	cin >> arr[i];
	}

	small = arr[0];
	large = arr[0];

	for(i = 1; i < n; i++)
	{
		if (arr[i] < small)
			small = arr[i];
		if (arr[i] > large)
			large = arr[i];
	}
	
	for (i = 0; i < n; i++)
	{
	sum += arr[i];
	}
	
	average = (float)sum /n;

	cout << "\nLargest integer is: " << large;
	cout << "\nSmallest integer is: " << small;
    cout << "\nSum: " << sum << endl;
    cout << "Average: " << average;

getch();
return 0;
}