/*************************************************************
	������������ ������� �2. ��������� ���������.
							��������� �������������.
							���������.
*************************************************************/

#include <iostream>
#include <tchar.h>
#include <cmath>
#include <string>

//#define	  stop __asm nop	//� ������� ��������� ������������� ������
							//����������������

#define stop do{ } while(0)

/***************************************************************
�������, ���������� * , �� �������� �������������!
***************************************************************/

int main()
{
// ********************************************************

	//������� 4. ���������
	//�������� ������� ������ ����� � ������������������ ��.
	//�������� ��������� ��������������� ����� � ������������������ ��
	//�������� �������� ��������. 
	//�������� �������, � ������� ��������� ����������, ����� ��������
	//����� ��������� ����������-���������� � �� ��� ��� ���������
	//"���������"
	{
		bool b = true;
		char c = 'q';
		short s = 12000;
		int i = 100000;
		float f = 17.0;
		double d = 18.12343434;

		bool* pB = &b;
		char* pC = &c;
		short* pS = &s;
		int* pI = &i;
		float* pf = &f;
		double* pD = &d;

		stop;
	}


	//������� 4�. �������� ��������� �� ��� char � ������������������
	//��� ������� ���������� ��������. ��������� ���������� ���� char ��������
	//������ �������� ������.
	//��������� - �������� �� ��������� �����-���� �������� �� ������,
	//����������� ����������?
	{
		const char* str = "Hello";
		char c = str[1];
		//str[2] = 'A'; ������ �������� �������� ��������� ���������, �.�. ��������� ������� ��������� �
						//������ ��������� ������ ��� ������
		stop;
	}

	//������� 5. ���������� ����������. �������� ������������� ���������.
	//�������� �������, ������� �� ���������� ��������
	//���������� � �������� ��������, �� ������� ��� ���������.
	//�������������� ����������� ����������
	{
		int nAr[3] = { 1,3 };
		int* pn = &nAr[0];
		(*pn)++;	//0-� ������� ������� nAr ���������� �� 1, �.�. ��������� pn �������� ����� 0-�� ��������
		pn++;	//��������� ��������� �� ��������� ������� (1-�, ���� ������� � 0-�� ��������)

		char cAr[] = { 'A','B','C','D' };
		char* pc = &cAr[0]; //pc �������� ����� 0-�� �������� ������� cAr
		(*pc) = (*pc) + 5;	//������ �������� �� ������ pc 'A' (65) � ���������� ��� �� 5, 
		//� ���������� ���������� �������� 'F' (70), ������� ����� �������� 
		//�� ������ pc ������ 0-�� ��������
		pc = pc + 3;	//��������� ��������� �� 3-� ������� ������� cAr (���� � 0-��)

		double dAr[3] = { 1.0,2.0 };
		double* pd1 = &dAr[0];
		double* pd2 = pd1;
		(*pd2) += 2; //pd2 - ��������� �� 0-� �������. ����� ������������� � ����������� 2,
		//�������� 0-�� �������� ��������� �� 3.0. 
		pd2 += 2; //��������� pd2, ������ ��������� �� 2-� ������� (���� � 0-��)

		//��������� ��������� ���������� ��������
		//��������� ���� ����������
		pd1 = &dAr[0];
		pd2 = &dAr[1];
		int nNumber = pd2 - pd1; //�������� ��������� ���������� ����� ����� ��� ����������� 
		//���������� ��������� ����� ����� ����������� � ������ ������ �������
		//nNumber = 1

//�������� ��������� pd2 � pd1 � � ������� cout
//�������� ���������� ���������.
		std::cout << "5. Compare result is: " << (pd2 > pd1 ? "true" : "false") << std::endl;

		stop;
	}

	return 0;
}