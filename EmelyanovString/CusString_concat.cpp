#include "CusString.h"

using namespace CustomString;

//���������� ��������� �������� (������������) [������������ 2]
CusString CusString::operator + (const CusString const& other) {

	//������ ������ ������, ��� ����� '\0'
	int oldLght = this->getLength();

	//����� ������ �������, � ������ '\0'
	int newSize = other._size + oldLght;

	//������� ����� ������ ��������
	char* tmp_NewString = new char[newSize];

	//�������� ������ �������� �������
	for (int i = 0; i < oldLght; i++) {
		tmp_NewString[i] = this->_string[i];
	}

	//��������� ������ ������� �������
	for (int i = 0; i < other._size; i++) {
		tmp_NewString[i + oldLght] = other._string[i];
	}

	//������� �������� ������
	CusString OutString = tmp_NewString;

	//����������� ������ �� ���������� ������� ��������
	delete[] tmp_NewString;

	return OutString;
}

//���������� ��������� ������������ �������� (������������) [������������ 2]
CusString CusString::operator += (const CusString const& other) {

	//������ ������ ������, ��� ����� '\0'
	int oldLght = this->getLength();

	//����� ������ �������, � ������ '\0'
	int newSize = other._size + oldLght;

	//������� ����� ������ ��������
	char* tmp_NewString = new char[newSize];

	//�������� ������ �������� �������
	for (int i = 0; i < oldLght; i++) {
		tmp_NewString[i] = this->_string[i];
	}

	//��������� ������ ������� �������
	for (int i = 0; i < other._size; i++) {
		tmp_NewString[i + oldLght] = other._string[i];
	}

	//����������� ������������ ������ �� ������� �������
	delete[] this->_string;

	//����������� ����� ������
	this->_string = tmp_NewString;

	//����������� ����� ������
	this->_size = newSize;

	return *this;
}

//������� ������������ ���� �������� �������� [������������ 2]
CusString CusString::concat(const char* const a, const char* const b) {

	//������ ������ ������, ��� ����� '\0'
	int oldLght = CharArrLngth(a);

	//����� ������ �������, � ������ '\0'
	int newSize = CharArrLngth(b) + oldLght + 1;

	//������� ����� ������ ��������
	char* tmp_NewString = new char[newSize];

	//�������� ������ �������� �������
	for (int i = 0; i < oldLght; i++) {
		tmp_NewString[i] = a[i];
	}

	//��������� ������ ������� �������
	for (int i = 0; i < CharArrLngth(b); i++) {
		tmp_NewString[i + oldLght] = b[i];
	}
	
	tmp_NewString[newSize-1] = '\0';
	CusString OutString = tmp_NewString;

	return OutString;
}