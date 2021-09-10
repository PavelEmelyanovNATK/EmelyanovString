#include "CusString.h"
using namespace CustomString;

//Функция удаления части строки [Практическая 4]
CusString CusString::remove(int start, int size) {

	//Если начальный индекс отрицательный, переставляем его в начало строки
	if (start < 0) start = 0;

	//Если начальный индекс выходит за границы строки, возвращаем текущую строку
	if (start >= this->getLength()) return *this;

	//Если область удаления выходит за рамки массива, ограничиваем размер удаления
	if (start + size > getLength()) size = getLength() - start;

	//Если размер удалени 0, возвращаем текущую строку.
	if (size == 0) return *this;

	//Вычисляем конечный индекс
	int end = start + size;

	//Вычисляем новый размер массива
	int newSize = this->_size - size;

	//Создаем новый массив символов
	char* NewString = new char[newSize];

	//Заполняем новый массив
	for (int i = 0, k = 0; k < this->_size; k++) {
		//Если индекс исходной строки находится в удаленной обоасти, пропускаем
		if (k >= start && k < end) continue;
		NewString[i] = this->_string[k];
		i++;
	}

	//Освобождаем динамическую память от старого массива
	delete[] this->_string;

	//Присваиваем новый массив
	this->_string = NewString;

	//Присваиваем новый размер
	this->_size = newSize;

	return *this;
}