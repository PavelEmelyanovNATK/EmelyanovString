#include "CusString.h"
using namespace CustomString;

//Функция копирования части строки [Практическая 3]
CusString CusString::copy(int start, int size) {

	//Если начальный индекс отрицательный, переставляем его в начало строки
	if (start < 0) start = 0;

	//Если начальный индекс выходит за границы строки, возвращаем пустую строку
	if (start >= this->getLength()) return "";

	//Если область копирования выходит за рамки массива, ограничиваем размер копирования
	if (start + size > this->getLength()) size = this->getLength() - start;

	//Если размер копирования 0, возвращаем пустую строку.
	if (size == 0) return  "";

	//Вычисляем конечный индекс
	int end = start + size;

	//Создаем выходной массив
	char* OutCopy = new char[size + 1];

	//Заполняем выходной массив
	for (int i = start, k = 0; i < end; i++, k++) {
		OutCopy[k] = this->_string[i];
	}

	//Устанавливаем символ окончания строки в конец массива
	OutCopy[size] = '\0';

	//Создаем выходную строку
	CusString OutStrCopy = OutCopy;

	//Очищаем динамическую память от временного массива символов
	delete[] OutCopy;

	return OutStrCopy;
}