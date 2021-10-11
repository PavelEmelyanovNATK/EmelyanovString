#include "CusString.h"

using namespace CustomString;

//Перегрузка оператора сложения (конкатенация) [Практическая 2]
CusString CusString::operator + (const CusString const& other) {

	//Старый размер строки, без учета '\0'
	int oldLght = this->getLength();

	//Новый размер массива, с учётом '\0'
	int newSize = other._size + oldLght;

	//Создаем новый массив символов
	char* tmp_NewString = new char[newSize];

	//Заполням массив исходной строкой
	for (int i = 0; i < oldLght; i++) {
		tmp_NewString[i] = this->_string[i];
	}

	//Дополняем массив входной строкой
	for (int i = 0; i < other._size; i++) {
		tmp_NewString[i + oldLght] = other._string[i];
	}

	//Создаем выходную строку
	CusString OutString = tmp_NewString;

	//Освобождаем память от временного массива символов
	delete[] tmp_NewString;

	return OutString;
}

//Перегрузка оператора сокращённого сложения (конкатенации) [Практическая 2]
CusString CusString::operator += (const CusString const& other) {

	//Старый размер строки, без учета '\0'
	int oldLght = this->getLength();

	//Новый размер массива, с учётом '\0'
	int newSize = other._size + oldLght;

	//Создаем новый массив символов
	char* tmp_NewString = new char[newSize];

	//Заполням массив исходной строкой
	for (int i = 0; i < oldLght; i++) {
		tmp_NewString[i] = this->_string[i];
	}

	//Дополняем массив входной строкой
	for (int i = 0; i < other._size; i++) {
		tmp_NewString[i + oldLght] = other._string[i];
	}

	//Освобождаем динамическую память от старого массива
	delete[] this->_string;

	//Присваиваем новый массив
	this->_string = tmp_NewString;

	//Присваиваем новый размер
	this->_size = newSize;

	return *this;
}

//Функция конкатенации двух массивов символов [Практическая 2]
CusString CusString::concat(const char* const a, const char* const b) {

	//Старый размер строки, без учета '\0'
	int oldLght = CharArrLngth(a);

	//Новый размер массива, с учётом '\0'
	int newSize = CharArrLngth(b) + oldLght + 1;

	//Создаем новый массив символов
	char* tmp_NewString = new char[newSize];

	//Заполням массив исходной строкой
	for (int i = 0; i < oldLght; i++) {
		tmp_NewString[i] = a[i];
	}

	//Дополняем массив входной строкой
	for (int i = 0; i < CharArrLngth(b); i++) {
		tmp_NewString[i + oldLght] = b[i];
	}
	
	tmp_NewString[newSize-1] = '\0';
	CusString OutString = tmp_NewString;

	return OutString;
}