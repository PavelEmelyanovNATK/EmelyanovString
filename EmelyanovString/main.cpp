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
		cin.ignore(32767, '\n');
		return false;
	}
	variable = temp;
	cin.ignore(32767, '\n');
	return true;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/* ----Практическая 1---- */
	/*
	char CheckLengthString[1024];
	cout << "Ведите строку: " << endl;
	cin >> CheckLengthString;
	cout << CusString::CharArrLngth(CheckLengthString) << endl;

	/* ----Практическая 2---- */
	/*
	char ch_arr1[100];
	char ch_arr2[100];

	cout << "Ведите строку 1: " << endl;
	cin >> ch_arr1;

	cout << "Ведите строку 2: " << endl;
	cin >> ch_arr2;

	cout << CusString::concat(ch_arr1, ch_arr2) << endl;
	CusString string1 = ch_arr1;
	CusString string2 = ch_arr2;
	cout << string1 + string2 << endl;
	
	/* ----Практическая 3---- */
	/*
	CusString string3;

	cout << "Введите строку: " << endl;
	CusString::ReadLine(string3);
	int ind1, lngth1;

	cout << "Откуда копировать: " << endl;
	while (!ReadNumber(ind1)) {
		cout << "Откуда копировать: " << endl;
	}

	cout << "Сколько копировать: " << endl;
	while (!ReadNumber(lngth1)) {
		cout << "Сколько копировать: " << endl;
	}

	cout << string3.copy(ind1, lngth1) << endl;

	/* ----Практическая 4---- */
	/*
	CusString string4;
	cout << "Введите строку: " << endl;
	CusString::ReadLine(string4);
	int ind2, lngth2;

	cout << "Откуда удалять: " << endl;
	while (!ReadNumber(ind2)) {
		cout << "Откуда удалять: " << endl;
	}

	cout << "Сколько удалять: " << endl;
	while (!ReadNumber(lngth2)) {
		cout << "Сколько удалять: " << endl;
	}

	cout << string4.remove(ind2, lngth2) << endl;

	/* ----Практическая 5---- */
	/*
	CusString string5;
	CusString string6;
	int ind3;

	cout << "Введите строку: " << endl;
	CusString::ReadLine(string5);

	cout << "Откуда вставлять: " << endl;
	while (!ReadNumber(ind3)) {
		cout << "Откуда вставлять: " << endl;
	}

	cout << "Введите строку: " << endl;
	CusString::ReadLine(string6);

	cout << string5.insert(ind3, string6) << endl;

	/* ----Практическая 6-7---- */
	/*
	CusString string7;
	CusString string8;

	cout << "Введите строку: " << endl;
	CusString::ReadLine(string7);

	cout << "Введите искомую часть: " << endl;
	CusString::ReadLine(string8);

	cout << "Первое вхождение: " << string7.findFirst(string8) << endl;
	cout << "Последнее вхождение: " << string7.findLast(string8) << endl;

	/* ----Практическая 8-9---- */
	
	CusString string9;
	CusString string10;
	CusString string11;

	cout << "Введите строку: " << endl;
	CusString::ReadLine(string9);

	cout << "Введите ЧТО заменить: " << endl;
	CusString::ReadLine(string10);

	cout << "Введите ЧЕМ заменить: " << endl;
	CusString::ReadLine(string11);

	CusString temp1 = string9;
	CusString temp2 = string9;
	CusString temp3 = string9;
	cout << "Первое вхождение: " << temp1.replaceFirst(string10,string11) << endl << endl;
	cout << "Последнее вхождение: " << temp2.replaceLast(string10,string11) << endl << endl;
	cout << "Все вхождения: " << temp3.replaceAll(string10, string11) << endl << endl;

	/**/
	system("pause");
	return 0;

	
}