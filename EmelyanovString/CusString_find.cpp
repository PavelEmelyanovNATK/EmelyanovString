#include "CusString.h"
using namespace CustomString;

//������� ������ ������� ��������� ��������� � ������ [������������ 6]
int CusString::findFirst(const CusString& const input) {
	int start = -1;

	//�������� �� ������� �������� �������� ������
	for (int i = 0; i <= (this->_size - input._size) && start == -1; i++) {
		//�� ������ �������� ����� ����� ������� ������
		for (int k = 0; k < input._size - 1; k++) {
			if (this->_string[i + k] != input._string[k]) {
				start = -1;
				break;
			}
			if (start == -1) start = i;
		}
	}

	return start;
}

//������� ������ ���������� ��������� ��������� � ������ [������������ 7]
int CusString::findLast(const CusString& const input) {
	int start = -1;

	//�������� �� ������� �������� �������� ������
	for (int i = this->getLength() - 1; i >= input._size - 2 && start == -1; i--) {
		//�� ������ �������� ����� ����� ������� ������
		for (int k = input._size - 2; k >= 0; k--) {
			if (this->_string[i - (input._size - 2 - k)] != input._string[k]) {
				start = -1;
				break;
			}
			else start = i - (input._size - 2 - k);
		}
	}

	return start;
}