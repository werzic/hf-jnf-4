#include <iostream>
using namespace std;
int main() {

	setlocale(0, "");
	int usernumber;
	int useranswer;
	int numbercount = 1;
	int correctAnswer;
	cout << "������� �����: " << endl;
	cin >> usernumber;
	while (numbercount <= 9) {
		cout << "������ ������:" << usernumber << "*" << numbercount << endl;
		cout << "�����: ";
		cin >> useranswer;
		correctAnswer = usernumber * numbercount;
		if (useranswer == correctAnswer) {
			cout << "������ �����" << endl;
			numbercount = numbercount + 1;
		}
		else
		{
			cout << "������ ����� �� ��������� " << "_��������� �������" << endl;
		}
	}
	cout << "������� ������" << endl;
	return 0;
}