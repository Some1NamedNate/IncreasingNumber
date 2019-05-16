// IncreasingNumber.cpp

/*

Copyright (c) 2019 Nathan Umali <some1namednate at gmail dot com>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int increment, number;
	char incYOrN, againYOrN;
	bool incYes, again = true;

	cout << "Increasing Number\n\nCopyright (c) 2019 Nathan Umali <some1namednate at gmail dot com>\n\nLicensed under the MIT License. See License.txt.\n\n";

	while (again) {
		incYes = false;

		// Asks for number
		cout << "Enter a number (to exit, type 0): ";
		cin >> number;

		// When 0 is entered, the program exits.
		if (number == 0) {
			return 0;
		}

		// Asks whether an increment is needed or not
		cout << "Increment? (Y/N): ";
		cin >> incYOrN;

		if (incYOrN == 'y' || incYOrN == 'Y') {
			incYes = true;
		}

		// When "yes" is answered, a prompt to specify the incremental value.
		if (incYes) {
			cout << "By how much?: ";
			cin >> increment;
		}

		int i = -1;
		for (i = 0; i < number;) {
			if (incYes) {
				i = i + increment;
			}
			else {
				i = i + 1;
			}
			cout << i << endl;
		}

		cout << "Again? (Y/N): ";
		cin >> againYOrN;

		if (againYOrN == 'n' || againYOrN == 'N') {
			again = false;
		}
	}
	return 0;

}
