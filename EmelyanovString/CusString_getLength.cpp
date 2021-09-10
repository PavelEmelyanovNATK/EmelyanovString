#include "CusString.h"
using namespace CustomString;

int CusString::CharArrLngth(const char* const input) {
	int ctr = 0;

	//Прибавляем счётчик пока не дойдем до символа окончания строки
	while (input[ctr] != '\0') {
		ctr++;
	}

	return ctr;
}

//Функция, возвращающая длину строки без учёта '\0'
int CusString::getLength() {
	return _size - 1;
}