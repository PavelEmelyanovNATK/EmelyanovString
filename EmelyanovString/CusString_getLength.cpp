#include "CusString.h"
using namespace CustomString;

int CusString::CharArrLngth(const char* const input) {
	int ctr = 0;

	//���������� ������� ���� �� ������ �� ������� ��������� ������
	while (input[ctr] != '\0') {
		ctr++;
	}

	return ctr;
}

//�������, ������������ ����� ������ ��� ����� '\0'
int CusString::getLength() {
	return _size - 1;
}