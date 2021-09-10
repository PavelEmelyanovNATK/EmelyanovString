#include "CusString.h"
using namespace CustomString;

//������� ������� ��������� � ������ [������������ 5]
CusString CusString::insert(int start, const CusString& const other) {

	if (other._size == 0) return *this;
	//���� ��������� ������ �������������, ������������ ��� � ������ ������
	if (start < 0) start = 0;

	//���� ������ ������� ������� �� ������� ������� ������, ������������� ������ ������� � ����� ������ ������
	if (start > this->getLength()) start = this->getLength();

	//��������� ������������� ������ ��� ����������� ������
	int end = other._size + start - 1;

	//��������� ����� ������
	int newSize = this->getLength() + other._size;

	//������� ����� ������ ��������
	char* NewString = new char[newSize];

	//��������� ����� ������
	for (int i = 0, k = 0, j = 0; i < newSize; i++) {

		//���� ������ ����� ������ ��������� � ������� ������������ �����, ��������� ������� ������
		if (i >= start && i < end) {
			NewString[i] = other._string[j];
			j++;
		}
		//����� ��������� �������� �������
		else
		{
			NewString[i] = this->_string[k];
			k++;
		}
	}

	//����������� ������������ ������ �� ������� �������
	delete[] this->_string;

	//����������� ����� ������
	this->_string = NewString;

	//����������� ����� ������
	this->_size = newSize;

	return *this;
}