#include "CusString.h"
using namespace CustomString;

//Стандартный конструктор
CusString::CusString() {}

//Конструктор копирования, входной объект - строка
CusString::CusString(const CusString const& other) {
	delete[] _string;

	//Устанавливаем размер как у входной строки
	_size = other._size;

	//Создаем новый массив символов
	_string = new char[_size];

	//копируем каждый символ из входной строки
	for (int i = 0; i < _size; i++) {
		_string[i] = other._string[i];
	}
}

//Конструктор копирования, входной объект - массив символов
CusString::CusString(const char const* other) {
	delete[] _string;

	_size = CharArrLngth(other) + 1;

	_string = new char[_size];

	for (int i = 0; i < _size; i++) {
		_string[i] = other[i];
	}
}

//Деструктор. В деструкторе освобождаем динамическую память, задействованную под массив символов
CusString::~CusString() {
	delete[] _string;
}

//Перегрузка оператора присваивания
CusString CusString::operator = (const CusString const& other) {
	//Освобождаем динамическую память от старых данных
	delete[] this->_string;

	//Устанавливаем новый размер
	_size = other._size;;

	//Создаем новый массив символов
	_string = new char[_size];

	//Заполняем новый массив входными данными
	for (int i = 0; i < _size; i++) {
		_string[i] = other._string[i];
	}

	return *this;
}

bool CusString::operator == (const CusString const& other) {

	//Если размеры строк не совпадают, возвращаем false
	if (this->_size != other._size) return false;

	//Если хотя бы один символ попарно не совпадает, возвращаем false
	for (int i = 0; i < this->getLength(); i++) {
		if (this->_string[i] != other._string[i]) return false;
	}

	return true;
}

char* CusString::toCharArray()
{
	return _string;
}