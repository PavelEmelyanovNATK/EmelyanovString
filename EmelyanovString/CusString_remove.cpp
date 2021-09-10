#include "CusString.h"
using namespace CustomString;

//������� �������� ����� ������ [������������ 4]
CusString CusString::remove(int start, int size) {

	//���� ��������� ������ �������������, ������������ ��� � ������ ������
	if (start < 0) start = 0;

	//���� ��������� ������ ������� �� ������� ������, ���������� ������� ������
	if (start >= this->getLength()) return *this;

	//���� ������� �������� ������� �� ����� �������, ������������ ������ ��������
	if (start + size > getLength()) size = getLength() - start;

	//���� ������ ������� 0, ���������� ������� ������.
	if (size == 0) return *this;

	//��������� �������� ������
	int end = start + size;

	//��������� ����� ������ �������
	int newSize = this->_size - size;

	//������� ����� ������ ��������
	char* NewString = new char[newSize];

	//��������� ����� ������
	for (int i = 0, k = 0; k < this->_size; k++) {
		//���� ������ �������� ������ ��������� � ��������� �������, ����������
		if (k >= start && k < end) continue;
		NewString[i] = this->_string[k];
		i++;
	}

	//����������� ������������ ������ �� ������� �������
	delete[] this->_string;

	//����������� ����� ������
	this->_string = NewString;

	//����������� ����� ������
	this->_size = newSize;

	return *this;
}