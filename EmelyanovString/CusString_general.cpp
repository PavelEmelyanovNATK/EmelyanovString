#include "CusString.h"
using namespace CustomString;

//����������� �����������
CusString::CusString() {}

//����������� �����������, ������� ������ - ������
CusString::CusString(const CusString const& other) {
	delete[] _string;

	//������������� ������ ��� � ������� ������
	_size = other._size;

	//������� ����� ������ ��������
	_string = new char[_size];

	//�������� ������ ������ �� ������� ������
	for (int i = 0; i < _size; i++) {
		_string[i] = other._string[i];
	}
}

//����������� �����������, ������� ������ - ������ ��������
CusString::CusString(const char const* other) {
	delete[] _string;

	_size = CharArrLngth(other) + 1;

	_string = new char[_size];

	for (int i = 0; i < _size; i++) {
		_string[i] = other[i];
	}
}

//����������. � ����������� ����������� ������������ ������, ��������������� ��� ������ ��������
CusString::~CusString() {
	delete[] _string;
}

//���������� ��������� ������������
CusString CusString::operator = (const CusString const& other) {
	//����������� ������������ ������ �� ������ ������
	delete[] this->_string;

	//������������� ����� ������
	_size = other._size;;

	//������� ����� ������ ��������
	_string = new char[_size];

	//��������� ����� ������ �������� �������
	for (int i = 0; i < _size; i++) {
		_string[i] = other._string[i];
	}

	return *this;
}

bool CusString::operator == (const CusString const& other) {

	//���� ������� ����� �� ���������, ���������� false
	if (this->_size != other._size) return false;

	//���� ���� �� ���� ������ ������� �� ���������, ���������� false
	for (int i = 0; i < this->getLength(); i++) {
		if (this->_string[i] != other._string[i]) return false;
	}

	return true;
}

char* CusString::toCharArray()
{
	return _string;
}