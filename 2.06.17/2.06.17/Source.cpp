# include <iostream>
using namespace std;
int main() {
	int input;
	cout << "How many cookies do you want?" << endl;
	cin >> input;
	if (input < 5)
		cout << "Are you sure?" << endl;
	else if (input >5 && input < 10)
		cout << "Thats enough cookies." << endl;
	else if (input > 10)
		cout << "That is too much!" << endl;
}
