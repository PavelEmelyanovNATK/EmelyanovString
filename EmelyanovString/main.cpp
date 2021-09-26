#include <iostream>
#include <windows.h>
#include "CusString.h"

using namespace std;
using namespace CustomString;

bool ReadNumber(int &variable) {
	int temp;
	cin >> temp;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(1024, '\n');
		return false;
	}
	variable = temp;
	return true;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	CusString string = "тестовая строка";
	CusString string2 = "дополнительная строка";

	//cout << string << endl;
	//cout << string.getLength() << endl;
	//cout << CusString::CharArrLngth("тестовая строка");



	//cout << string + " " + string2 << endl;



	//int from = 0;
	//int to = 0;
	//cout << "Исходная строка: " << string << endl;
	//cout << "Введите откуда начинать копировать: ";
	//while(!ReadNumber(from));
	//	cout << "Введите сколько копировать: ";
	//while (!ReadNumber(to));
	//	cout << endl;
	//cout << "Результат копирования: " << string.copy(from, to) << endl;


	//int from = 0;
	//int to = 0;
	//CusString string_for_removing = string2;
	//cout << "Исходная строка: " << string_for_removing << endl;
	//cout << "Введите откуда начинать удалять: ";
	//cin >> from;
	//cout << "Введите сколько удалять: ";
	//cin >> to;
	//cout << endl;
	//cout << "Результат удаления: " << string_for_removing.remove(from, to) << endl;



	//int from = 0;
	//CusString what;
	//CusString string_for_inserting = string2;
	//cout << "Исходная строка: " << string_for_inserting << endl;
	//cout << "Введите куда вставлять: ";
	//cin >> from;
	//cout << "Введите что вставлять: ";
	//cin >> what;
	//cout << endl;
	//cout << "Результат вставки: " << string_for_inserting.insert(from, what) << endl;



	//cout << "Введите строку: " << endl;
	//cin >> string;
	//cout << endl;
	//cout << "Введите искомый элемент: " << endl;
	//cin >> string2;
	//cout << endl;
	//cout << "Первое вхождение: " << string.findFirst(string2) << endl;
	//cout << "Последнее вхождение: " << string.findLast(string2) << endl;



	//CusString FromStr;
	//CusString ToStr;
	//CusString globalInsertingString = "это тестовая строка";
	//cout << "Исходная строка: " << globalInsertingString << endl;
	//cout << "Введите что заменять: " << endl;
	//cin >> FromStr;
	//cout << endl;
	//cout << "Введите НА что заменять: " << endl;
	//cin >> ToStr;
	//cout << "Замена первого вхождения: " << globalInsertingString.replaceFirst(FromStr, ToStr) << endl;
	//cout << "Замена последнего вхождения: " << globalInsertingString.replaceLast(FromStr, ToStr) << endl;



    //CusString FromStr;
    //CusString ToStr;
    //CusString globalInsertingString = "Это ещё одна тестовая строка";
    //cout << "Исходная строка: " << globalInsertingString << endl;
    //cout << "Введите что заменять: " << endl;
    //cin >> FromStr;
    //cout << endl;
    //cout << "Введите НА что заменять: " << endl;
    //cin >> ToStr;
    //cout << "Результат: " << globalInsertingString.replaceAll(FromStr, ToStr) << endl;

	//cout << CusString::concat("one", "two");

	CusString str1;
	CusString str2;
	CusString str3;
	CusString::ReadLine(str1);
	CusString::ReadLine(str2);
	CusString::ReadLine(str3);

		//cin >> str1 >> str2;
		//cout << str1 << endl;
		//cout << str2 << endl;

	cout << str1.replaceAll(str2, str3);

}