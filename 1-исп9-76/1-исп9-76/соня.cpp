#include <iostream>
using namespace std;
int main() {

	setlocale(0, "");
	int usernumber;
	int useranswer;
	int numbercount = 1;
	int correctAnswer;
	cout << "введите число: " << endl;
	cin >> usernumber;
	while (numbercount <= 9) {
		cout << "решите пример:" << usernumber << "*" << numbercount << endl;
		cout << "ответ: ";
		cin >> useranswer;
		correctAnswer = usernumber * numbercount;
		if (useranswer == correctAnswer) {
			cout << "пример решен" << endl;
			numbercount = numbercount + 1;
		}
		else
		{
			cout << "пример решен не правильно " << "_повторите попытку" << endl;
		}
	}
	cout << "примеры решены" << endl;
	return 0;
}