#include  <iostream>		//��� ������������� ������� �����/������

int nTwin = 1;			//���������� ����������
namespace TwinSpace { int nTwin = 2; }	//���������� ��������� �
//������������ ���� - TwinSpace

#define stop do{ } while(0)	

int main()
{
	//������� 9. �����.

		//������� 9.1 �������� �������� ����, ������� ��������� � ������� for
		//��������� ������: ����� ����� ��������� ��������� ����� �����.
		//������� ������� � ������� ������ ����� ��� � ������� ������� �������.
		//������������� ������ �� ����� ������ ������� ������, ��� �������.
	{
		int low, high, sum;
		std::cout << "Enter low and high bound" << std::endl;
		std::cin >> low >> high;
		//������������ ������� ���������

		//��������� ������������ ��������
		if (low <= high)
		{
			// ��������� �����
			sum = 0;
			for (int i = low; i <= high; i++) {
				sum += i;
			}
			std::cout << "sum = " << sum << std::endl;
			stop;
		}

		// ��������� � ��������� ��������
		stop;
	}


	//������� 9.2 �������� �������� ����, ������� ��������� � ������� do-while
	//��������� ������: �� ������ �������� ����� ������ � ������� ����� ��������
	// � �������� ����, ���� �������� ������������� �������: 
	// �������� ������ ��� ����� 10 � ������.
	//���������: �������� �� �������� � �������������� �������� ������� �� �������
	//������ ���������� ����� ������������� ���. ���������� ����������� ��������������
	//�������.	
	{
		int x;
		float x1;
		do
		{
			std::cout << "Enter digit >= 10 && even for exit " << std::endl;
			std::cin >> x;
			x1 = (float)x;
		} while (x < 10 || x / 2 != x1 / 2);

		std::cout << "x = " << x << std::endl;
	}

	//������� 9.3 �������� �������� ����, ������� ��������� � ������� while
	//��������� ������: ������� int x = 0; 
	//�� ������ �������� x=x+1, sum=sum+1/x
	//����� �������� x, ��� ������� sum>1.7
	{
		int x = 0;
		double sum = 0;

		while (sum <= 1.7)
		{
			std::cout << " + ";
			x++;
			sum += 1. / x;
			std::cout << x << "  ";
		}
		std::cout << "\nsum = " << sum << "\nx = " << x << std::endl;

	}

	return 0; //��� ���������� ����������
}	// ����� ������� main()
