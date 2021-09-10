#include "CusString.h"
using namespace CustomString;

//‘ункци€ вставки подстроки в строку [ѕрактическа€ 5]
CusString CusString::insert(int start, const CusString& const other) {

	if (other._size == 0) return *this;
	//≈сли начальный индекс отрицательный, переставл€ем его в начало строки
	if (start < 0) start = 0;

	//≈сли индекс вставки выходит за границы текущей строки, устанавливаем индекс вставки в конец данной строки
	if (start > this->getLength()) start = this->getLength();

	//¬ычисл€ем окончательный индекс дл€ вставл€емой строки
	int end = other._size + start - 1;

	//¬ычисл€ем новый размер
	int newSize = this->getLength() + other._size;

	//—оздаем новый массив символов
	char* NewString = new char[newSize];

	//«аполн€ем новый массив
	for (int i = 0, k = 0, j = 0; i < newSize; i++) {

		//≈сли индекс новой строки находитс€ в области вставл€емого слова, заполн€ем входным словом
		if (i >= start && i < end) {
			NewString[i] = other._string[j];
			j++;
		}
		//»наче заполн€ем исходной строкой
		else
		{
			NewString[i] = this->_string[k];
			k++;
		}
	}

	//ќсвобождаем динамическую пам€ть от старого массива
	delete[] this->_string;

	//ѕрисваиваем новый массив
	this->_string = NewString;

	//ѕрисваиваем новый размер
	this->_size = newSize;

	return *this;
}