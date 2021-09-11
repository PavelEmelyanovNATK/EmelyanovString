#pragma once
#include <iostream>
using namespace std;

namespace CustomString {
	class CusString
	{
		//������������ ������ ��������, � ������� �������� ������
		char* _string = new char[] {'\0'};

		//������ ������, � ������ '\0'
		int _size = 0;

	public:

		//�������, ������������� ������ ������ � ������� �������� [������������ 1]
		static int CharArrLngth(const char* const input);

		//������� ������������ ���� �������� ��������
		static CusString concat(const char* const a, const char* const b);

		//����������� �����������
		CusString();

		//����������� �����������, ������� ������ - ������
		CusString(const CusString const& other);

		//����������� �����������, ������� ������ - ������ ��������
		CusString(const char const* other);
		
		//����������. � ����������� ����������� ������������ ������, ��������������� ��� ������ ��������
		~CusString();

		//���������� ��������� ������������
		CusString operator = (const CusString const& other);

		//���������� ��������� �������� (������������) [������������ 2]
		CusString operator + (const CusString const& other);

		//���������� ��������� ������������ �������� (������������) [������������ 2]
		CusString operator += (const CusString const& other);

		//���������� ��������� ���������
		bool operator == (const CusString const& other);

		//�������, ������������ ����� ������ ��� ����� '\0'
		int getLength();

		//�������, ������������ ���������� ������ ��������
		char* toCharArray();

		//������� ����������� ����� ������ [������������ 3]
		CusString copy(int start, int size);

		//������� �������� ����� ������ [������������ 4]
		CusString remove(int start, int size);

		//������� ������� ��������� � ������ [������������ 5]
		CusString insert(int start, const CusString& const other);

		//������� ������ ������� ��������� ��������� � ������ [������������ 6]
		int findFirst(const CusString& const input);

		//������� ������ ���������� ��������� ��������� � ������ [������������ 7]
		int findLast(const CusString& const input);

		//������� ������ ������� ��������� ��������� � ������ [������������ 8]
		CusString replaceFirst(const CusString& const from, const CusString& const to);

		//������� ������ ���������� ��������� ��������� � ������ [������������ 8]
		CusString replaceLast(const CusString& const from, const CusString& const to);

		//������� ������ ���� ��������� ��������� � ������ [������������ 9]
		CusString replaceAll(const CusString& const from, const CusString& const to);

		friend ostream& operator << (ostream& os, const CusString& outStr) {

			return os << outStr._string;
		}

		friend istream& operator >> (istream& in, CusString& inStr)
		{
			char tmp[1024];
			in >> tmp;
			inStr = tmp;

			return in;
		}
	};	
}

