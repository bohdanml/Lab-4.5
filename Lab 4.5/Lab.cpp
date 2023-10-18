#include <iostream> 
#include <iomanip> 
#include <time.h> 

using namespace std;
int main()
{
	double x; 
	double y;
	srand((unsigned)time(NULL)); 
	for (int i = 0; i < 10; i++)
	{
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	if (((y > 0) && (y <= x) && (y <= (-pow(x, 2)) + 2)) ||
		((y <= (-x)) && (y <= 0) && (y <= (-pow(x, 2)) + 2)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	
}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = 4 * rand() / RAND_MAX - 2;
		y = 4 * rand() / RAND_MAX - 2;
		if (((y > 0) && (y <= x) && (y <= (-pow(x, 2)) + 2)) ||
			((y <= (-x)) && (y <= 0) && (y <= (-pow(x, 2)) + 2)))
			cout << setw(8) << setprecision(4) << x << "  "
			<< setw(8) << setprecision(4) << y << "  " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << "  "
			<< setw(8) << setprecision(4) << y << "  " << "no" << endl;
	}
	cout << "---------------------------" << endl;
	return 0;
}