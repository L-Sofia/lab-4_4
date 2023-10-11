#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double x, y, R, xp, xk, dx;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	
	x = xp;
	while (x <= xk)
	{
		if (x < -R)
			y = x - R;
		else
			if (x > -R && x <= 0)
				y = sqrt(pow(R, 2) - pow(x, 2));
			else
				if (x > 0 && x <= 6)
					y = R - ((R * x) / 6);
				else
					if (x > 6)
						y = x - 6;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}