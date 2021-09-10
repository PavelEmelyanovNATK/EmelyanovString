#include "CusString.h"
using namespace CustomString;

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