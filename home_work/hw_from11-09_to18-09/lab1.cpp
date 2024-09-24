#include  <iostream>		//��� ������������� ������� �����/������
//#include  <intrin.h> //��� NOP
using namespace std;

int nTwin=1;			//���������� ����������
namespace TwinSpace{ int nTwin=2;}	//���������� ��������� �
						//������������ ���� - TwinSpace

int main()
{

 //**********************************************************
	//������� 1. ������ � ����������. ������� ���� ������. �������� ��������� �� �����, 
	//������� �� ���������� ���������� � ��������������� ��������� (�������, ��� 
	//���������� ����, ��������� ��� int, �������-��������).
	//�������� �������� �� ������ ������������� ���������� signed � unsigned ����� ����� 
	//������, � ����� �� ���������� ������������� ������������� ����� �����.

	
	char cByte = 'A'; // ����������� ������ '�', ��� ASCII 65
	cByte    = 0x42; // ����������� ������ 'B' �� ������������������ ����, ��� ASCII 66 
	cByte    = 66; // ����������� ������ 'B' �� ASCII-����
	cByte    = -1; // ����� ��������, �� �������� ���������� ��������� ��������� ������   

	unsigned char ucByte = 0x41; // ����������� ������ 'A' �� ������������������ ���� ��� ASCII 65
	ucByte   = 'B'; // ����������� ������ 'B'
	ucByte   =	-1; // �������� ������ ������ ��������������� �����, ������� -1 �������� �� 255 � ������������� ������ �� ASCII-����

	int iInt =  0xffffffff; // ������������� -1 ��-�� �������� ��������� ������������� �����

	unsigned int uiInt = 0xffffffff; // ������������� 4294967295

	float fFloat = 1.f;  // ������������� 1, ��� float
	double dDouble = 1.; // ������������� 1, ��� double

	// ��������� ��������, ����������� �����. � ������������ ��������,
	// ��� ������� ��������� � ����������. ��������� ������� ����� ���� 
	// ��������� � ���������������.

	double d = 0.1234567890123456789123456789; // ��������� 0.12345678901234568, �.�. �������� ���� double ���������� 15-17
	// ������ ����� �������. ���������� �������� ��������
	float  f = 0.1234567890123456789123456789; // ��������� 0.123456791, �.�. �������� ���� float ���������� 6-9 ����

	d	=	1.; // ��������� 1, �.�. ����� . �������� 0
	d	=	0.999999999999999999999999999999999; // ��������� 1, �.�. ���������� ������ ����� ������� ���������
	// ���������� ��� ���� double ��������. ���������� �������� ��������

	
	// � ������������ �������� ���������, ������������ ���������� sizeof ���
	// ���������� ���� wchar_t (�� ������)
	wchar_t cw = L'�';
	size_t n = sizeof(cw); // 2 �����


// **************************************************************
	//������� 2a. ������� ���������� ����� ������.
	//��������� ������� ���������� ��� ���������� (1) � (2):
	//�������� ���� (�������� � ����) ��������������, ������� ������ ��������� ����������

	iInt=1;
	double dDouble1=iInt/3;		// (1) � ���������� 0
	// double dDouble2 = static_cast<double>(iInt / 3.);
	// ������ �� ����� ������������ ��������� ��������� ����� ��� int, � �������� �� ����� ���� ����� ����� �������,
	// ������� ��, ��� ����� ���� �� ������, ��������.
	double dDouble2=iInt/3.;	// (2) � ���������� 0.33333333333333331
	// double dDouble2 = static_cast<double>(iInt) / 3.;
	// �������� (3.) ����� ��� double, ������� �� ��������� (1/3.) ���������� � ����� ����.


	// ��������������� ����������.
	// ��������� ����� C ��������� "����������" ������������
	// (��� � ������� (1) � (2)). ��������� ���������� ���������� ����� (1) � (2)
	// (�������� ���������� dDouble, fFloat, nInt, sShort, cByte), ���������� ������� 
	// ��������� ������������ ��� ���������� ������ � ��������� ���������.
	// ��������� ������, ���� ������������ ������� ����������, ��� ��� ������ �� ����������.
	// ��������� (� ������������) �������������� (warnings) �����������.

	short sShort;
	(dDouble=(fFloat=(iInt=(sShort=(cByte=(3.3/3))))));			// (1)
	// warning C4244 : '=' : conversion from 'double' to 'char', possible loss of data
	// ������������� � ���, ��� ��� ������������ double � char �������� ������ ������
	// warning C4244: '=' : conversion from 'int' to 'float', possible loss of data
	// �.�. � 64-� ������ �������� ��� int ����� ��������� ������ ���� ������, � ������� �� float,
	// ����������� ������������� � ��������� ������ ������
	
	(cByte=(sShort=(iInt=(fFloat=(dDouble=(3.3/3))))));			// (2)
	// warning C4244: '=' : conversion from 'double' to 'float', possible loss of data
	// ���������� ���� float � ���� double ����� �������� � ������ ������, 
	// �.�. ��� double ����� ������ 8 ����, � float - 4.
	// warning C4244: '=' : conversion from 'float' to 'int', possible loss of data
	// ���������� ���� float � ���� int ����� �������� � ������ ������, �.�.
	// ��� float ����� ����� ����� ����� �������, � ������� �� int
	// warning C4244: '=' : conversion from 'short' to 'char', possible loss of data
	// ��� short ����� ������ 2 �����, � ��� char - 1 ����, 
	// �������������, �������� ������ ������

	//���� ��� ��� ������ "����������" ������������� �������� ���������� �����, ��� ����� 
	// �������� � ������������� ����������� - ��������� (� ������������), � �����?
	// �������� ���� ��������������, ������� ������ ��������� ����������

	iInt	=	257;
	cByte	=	iInt; // 257 - ��� 000100000001 � �������� ��. ����� ����� ���������� � ���� char,
	// ������� ����� ������� ������ 1 ����, �.�. 0001 "����������" � �������� 00000001

	unsigned char cN1=255, cN2=2, cSum;
	cSum = cN1 + cN2; // ������������ �������� ��� unsigned char � ���������� �� - 255
	// ��� �������� ���������� 257, � �������� ������� ��� 000100000001
	// 0001 "����������", � ������� 00000001

	//�������� ���������� ������� � ����������� ����. ��������� (� ������������),
	//������ � ��������� ������ �� ���������� ����� �� ��������� �����
	// �������� ���� ��������������, ������� ������ ��������� ����������
	int iSum = cN1+cN2; // ����� cN1 � cN2 ���������� � �������� int

	//��������, ������ ��� �������� ���������� �������� (���������� � �������� �������) 
	// � ������� (1) � (2) ���������� ������ ����������
	// �������� ���� ��������������, ������� ������ ��������� ���������� � ���������,
	// ��� ��� ���� ����������
	char c1=0xff, c2=2;
	unsigned char uc1=0xff, uc2=2;
	int iSum1= c1 + c2;   //(1) ��������� 1, ������ ��� ���������� ���� char �����
	// �������� c1 = -1 � c2 = 2, � �� ����� ����� 1
	int iSum2= uc1 + uc2; //(2) ����� uc1 = 255 (�.�. ����������� ���). 255 + 2 = 257


	
// ***********************************************************
	//������� 2b. ����� ���������� ����� ������.
	//������������������ ��������� (�������� ���������� dDouble) � ������ (3)
	// �������� ���� ��������������, ������� ������ ��������� ����������
	int nTmp=100, nn=3;
	dDouble=3.3 + nTmp / nn; // (3) ���������� ������� ������� nTmp / nn, ������ 33.
	// nTmp, nn - ���������� ���� int, ������� ������� ����� �������������.
	// ����� ���������� ������� 3.3 + 33, ��������� ���������� � ���� double. � ���������� ���������� 36.3

	//�������� ��������� ��� ������ �������� � ������� ��������� ������
	//���������� ����
//	double dDouble3=...		// (4)
	double dDouble3 = static_cast<double>(nTmp) / nn + 3.3;



	return 0;
}
