// P07 Brute Force Equation Solver
//		Use brute force to find an integer solution for x and y in the range -10 to 10
// Samantha Roldan
//

#include <iostream>  
using namespace std;

int main() {
	int a1;
	int b1;
	int c1;
	int a2;
	int b2;
	int c2;
	int equation1;
	int equation2;
	int isSolution = false;
	int x;
	int y;

	cout << "*** Brute Force Equation Solver ***" << endl;

	cout << endl;
	cout << "Enter coefficients (a, b, c) for first equation separated by spaces: ";
	cin >> a1;
	cin >> b1;
	cin >> c1;

	cout << "Enter coefficients (a, b, c) for second equation separated by spaces: ";
	cin >> a2;
	cin >> b2;
	cin >> c2;

	//plugs in x's and y's from -10 to 10 into equations to get the answer of x and y to make the equations true
	for (x = -10; x < 11; ++x) {
		for (y = -10; y < 11; ++y) {
			equation1 = (a1 * x) + (b1 * y);
			equation2 = (a2 * x) + (b2 * y);

			if ((equation1 == c1) && (equation2 == c2)) { // if the x and y are equal to c1 and c2, set isSolution to true
				isSolution = true;
				break;
			}
		}
		if (isSolution) { // once x and y are found, break out of for loop
			break;
		}
	}

	if (isSolution) { // if solution is found output the x and y
		cout << "x = " << x << ", y = " << y << endl;
	}
	else { // if false output no solution
		cout << "There is no solution" << endl;
	}

	return 0;
}