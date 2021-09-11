#pragma once
#include <iostream>
using namespace std;

namespace CustomString {
	class CusString
	{
		//Динамический массив символов, в котором хранится строка
		char* _string = new char[] {'\0'};

		//Размер строки, с учетом '\0'
		int _size = 0;

	public:

		//Функция, расчитывающая размер строки в массиве символов [Практическая 1]
		static int CharArrLngth(const char* const input);

		//Функция конкатенации двух массивов символов
		static CusString concat(const char* const a, const char* const b);

		//Стандартный конструктор
		CusString();

		//Конструктор копирования, входной объект - строка
		CusString(const CusString const& other);

		//Конструктор копирования, входной объект - массив символов
		CusString(const char const* other);
		
		//Деструктор. В деструкторе освобождаем динамическую память, задействованную под массив символов
		~CusString();

		//Перегрузка оператора присваивания
		CusString operator = (const CusString const& other);

		//Перегрузка оператора сложения (конкатенация) [Практическая 2]
		CusString operator + (const CusString const& other);

		//Перегрузка оператора сокращённого сложения (конкатенации) [Практическая 2]
		CusString operator += (const CusString const& other);

		//Перегрузка оператора сравнения
		bool operator == (const CusString const& other);

		//Функция, возвращающая длину строки без учёта '\0'
		int getLength();

		//Функция, возвращающая внутренний массив символов
		char* toCharArray();

		//Функция копирования части строки [Практическая 3]
		CusString copy(int start, int size);

		//Функция удаления части строки [Практическая 4]
		CusString remove(int start, int size);

		//Функция вставки подстроки в строку [Практическая 5]
		CusString insert(int start, const CusString& const other);

		//Функция поиска первого вхождения подстроки в строку [Практическая 6]
		int findFirst(const CusString& const input);

		//Функция поиска последнего вхождения подстроки в строку [Практическая 7]
		int findLast(const CusString& const input);

		//Функция замены первого вхождения подстроки в строку [Практическая 8]
		CusString replaceFirst(const CusString& const from, const CusString& const to);

		//Функция замены последнего вхождения подстроки в строку [Практическая 8]
		CusString replaceLast(const CusString& const from, const CusString& const to);

		//Функция замены всех вхождений подстроки в строку [Практическая 9]
		CusString replaceAll(const CusString& const from, const CusString& const to);

		friend ostream& operator << (ostream& os, const CusString& outStr) {

			return os << outStr._string;
		}

		friend istream& operator >> (istream& in, CusString& inStr)
		{
			char tmp[1024];
			in >> tmp;
			inStr = tmp;

			return in;
		}
	};	
}

