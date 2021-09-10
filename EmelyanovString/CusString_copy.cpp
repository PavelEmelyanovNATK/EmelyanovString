#include "CusString.h"
using namespace CustomString;

//������� ����������� ����� ������ [������������ 3]
CusString CusString::copy(int start, int size) {

	//���� ��������� ������ �������������, ������������ ��� � ������ ������
	if (start < 0) start = 0;

	//���� ��������� ������ ������� �� ������� ������, ���������� ������ ������
	if (start >= this->getLength()) return "";

	//���� ������� ����������� ������� �� ����� �������, ������������ ������ �����������
	if (start + size > this->getLength()) size = this->getLength() - start;

	//���� ������ ����������� 0, ���������� ������ ������.
	if (size == 0) return  "";

	//��������� �������� ������
	int end = start + size;

	//������� �������� ������
	char* OutCopy = new char[size + 1];

	//��������� �������� ������
	for (int i = start, k = 0; i < end; i++, k++) {
		OutCopy[k] = this->_string[i];
	}

	//������������� ������ ��������� ������ � ����� �������
	OutCopy[size] = '\0';

	//������� �������� ������
	CusString OutStrCopy = OutCopy;

	//������� ������������ ������ �� ���������� ������� ��������
	delete[] OutCopy;

	return OutStrCopy;
}