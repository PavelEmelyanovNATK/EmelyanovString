#include "CusString.h"
using namespace CustomString;

//������� ������ ������� ��������� ��������� � ������ [������������ 8]
CusString CusString::replaceFirst(const CusString& const from, const CusString& const to) {
	int beginIDX = this->findFirst(from);

	if (beginIDX != -1) {
		this->remove(beginIDX, from._size - 1);
		this->insert(beginIDX, to);
	}

	return *this;
}

//������� ������ ���������� ��������� ��������� � ������ [������������ 8]
CusString CusString::replaceLast(const CusString& const from, const CusString& const to) {
	int beginIDX = this->findLast(from);

	if (beginIDX != -1) {
		this->remove(beginIDX, from._size - 1);
		this->insert(beginIDX, to);
	}

	return *this;
}

//������� ������ ���� ��������� ��������� � ������ [������������ 9]
CusString CusString::replaceAll(const CusString& const from, const CusString& const to) {
	int currentIdx = -1;

	//�������� �� ������� �������� �������� ������
	for (int i = 0; i <= (this->_size - from._size); i++) {
		//�� ������ �������� ����� ����� ������� ������
		for (int k = 0; k < from._size - 1; k++) {
			if (this->_string[i + k] != from._string[k]) {
				currentIdx = -1;
				break;
			}
			if (currentIdx == -1) currentIdx = i;
		}

		//� ������ ����������, �������� �����
		if (currentIdx != -1) {
			this->remove(currentIdx, from._size - 1);
			this->insert(currentIdx, to);
		}
	}

	return *this;
}