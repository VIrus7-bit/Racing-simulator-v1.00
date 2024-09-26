#include "Choice.h"
#include <iostream>
#include <string>

using namespace std;

void Choice(int a, int d, int b, int u,string ptr, string temp, int j)
{
	class Transport
	{
	public:
		virtual float time() = 0;
	};


	class LandTransport : public Transport
	{
	};
	class AirTransport : public Transport
	{
	};

	//�������� ���������� 
	class Camel : public LandTransport {

	private:
		string name = "�������";
		int distance{};
		float Time{};

	public:Camel(int distance_ptr) : distance{ distance_ptr } {}

		float time() override
		{
			cout << name << "\t"; // Time = ... Code �������...;
			return Time;
		}
	};
	class Camel_Fast : public LandTransport
	{
	private:
		string name = "�������-���������";
		int distance{};
		float Time{};

	public:Camel_Fast(int distance_ptr) : distance{ distance_ptr } {}
		float time() override
		{
			cout << name << "\t"; // Time = ... Code �������...;
			return Time;
		}
	};
	class Centaur : public LandTransport
	{
	private:
		string name = "�������";
		int distance{};
		float Time{};

	public:Centaur(int distance_ptr) : distance{ distance_ptr } {}
		float time() override
		{
			cout << name << "\t"; // Time = ... Code �������...;
			return Time;
		}
	};
	class All_terrain_boots : public LandTransport
	{
	private:
		string name = "�������-���������";
		int distance{};
		float Time{};

	public:All_terrain_boots(int distance_ptr) : distance{ distance_ptr } {}
		float time() override
		{
			cout << name << "\t"; // Time = ... Code �������...;
			return Time;
		}
	};

	//��������� ����������
	class Magic_Carpet : public AirTransport
	{
	private:
		string name = "����-������";
		int distance{};
		float Time{};

	public:Magic_Carpet(int distance_ptr) : distance{ distance_ptr } {}
		float time() override
		{
			cout << name << "\t"; // Time = ... Code �������...;
			return Time;
		}
	};
	class Broomstick : public AirTransport
	{
	private:
		string name = "�����";
		int distance{};
		float Time{};

	public:Broomstick(int distance_ptr) : distance{ distance_ptr } {}
		float time() override
		{
			cout << name << "\t"; // Time = ... Code �������...;
			return Time;
		}
	};
	class Eagle : public AirTransport
	{
	private:
		string name = "���";
		int distance{};
		float Time{};

	public:Eagle(int distance_ptr) : distance{ distance_ptr } {}
		float time() override
		{
			cout << name << "\t"; // Time = ... Code �������...;
			return Time;
		}
	};


	class Play_Game
	{
	public:
		void time(Transport* Transport)
		{
			Transport->time();
		}
	};

	Play_Game			Play_Game;
	Camel				Camel(b);
	Camel_Fast			Camel_Fast(b);
	Centaur				Centaur(b);
	All_terrain_boots	All_terrain_boots(b);
	Magic_Carpet		Magic_Carpet(b);
	Broomstick			Broomstick(b);
	Eagle				Eagle(b);

	do {
		do {
			if (a == 1){

				switch (d) {
				case 0:cout << "";																																			break;
				case 1:cout << "�������-��������� ������� ����������������! "								<< endl; u++; temp = "�������-��������� ";	ptr = ptr + temp;  	break;
				case 2:cout << ">>> ������� ���������������� ������������ ��� ������������� ��������! <<<"	<< endl; 														break;
				case 3:cout << "������� ������� ���������������!"											<< endl; u++; temp = "������� ";			ptr = ptr + temp; 	break;
				case 4:cout << "������� ������� ���������������!"											<< endl; u++; temp = "������� ";			ptr = ptr + temp; 	break;
				case 5:cout << ">>> ������� ���������������� ������������ ��� ������������� ��������! <<<"	<< endl;														break;
				case 6:cout << "�������-��������� ������� ���������������!"									<< endl; u++; temp = "�������-��������� ";	ptr = ptr + temp; 	break;
				case 7:cout << ">>> ������� ���������������� ������������ ��� ������������� ��������! <<<"	<< endl;														break;
				default:cout << "���������� ��� ����� ���������� �� ����������!"							<< endl;														break;
				}
			}
			if (a == 2){

				switch (d) {
				case 0:cout << "";																																			break;
				case 1:cout << ">>> ������� ���������������� ������������ ��� ������������� ��������! <<<"	<< endl;														break;
				case 2:cout << "����� ������� ����������������!"											<< endl; u++; temp = "����� ";				ptr = ptr + temp; 	break;
				case 3:cout << ">>> ������� ���������������� ������������ ��� ������������� ��������! <<<"	<< endl; 														break;
				case 4:cout << ">>> ������� ���������������� ������������ ��� ������������� ��������! <<<"	<< endl; 														break;
				case 5:cout << "��� ������� ���������������!"												<< endl; u++; temp = "��� ";				ptr = ptr + temp; 	break;
				case 6:cout << ">>> ������� ���������������� ������������ ��� ������������� ��������! <<<"	<< endl; 														break;
				case 7:cout << "����-������ ������� ���������������!"										<< endl; u++; temp = "����-������ ";		ptr = ptr + temp; 	break;
				default:cout << "���������� ��� ����� ���������� �� ����������!"							<< endl; 														break;
				}
			}
			if (a == 3){

				switch (d) {
				case 0:cout << "";																																			break;
				case 1:cout << "�������-��������� ������� ����������������! "								<< endl; u++; temp = "�������-��������� ";  ptr = ptr + temp;	break;
				case 2:cout << "����� ������� ����������������!"											<< endl; u++; temp = "����� ";				ptr = ptr + temp; 	break;
				case 3:cout << "������� ������� ���������������!"											<< endl; u++; temp = "������� ";			ptr = ptr + temp; 	break;
				case 4:cout << "������� ������� ���������������!"											<< endl; u++; temp = "������� ";			ptr = ptr + temp; 	break;
				case 5:cout << "��� ������� ���������������!"												<< endl; u++; temp = "��� ";				ptr = ptr + temp; 	break;
				case 6:cout << "�������-��������� ������� ���������������!"									<< endl; u++; temp = "�������-��������� ";  ptr = ptr + temp; 	break;
				case 7:cout << "����-������ ������� ���������������!"										<< endl; u++; temp = "����-������ ";		ptr = ptr + temp; 	break;
				default:cout << "���������� ��� ����� ���������� �� ����������!"							<< endl;														break;
				}
			}

			switch (a) {

				case 1: cout << "����� ��� ��������� ����������. ����������: ";				cout << b << endl; break;
				case 2: cout << "����� ��� ���������� ����������. ����������: ";			cout << b << endl; break;
				case 3: cout << "����� ��� ��������� � ���������� ����������.����������: "; cout << b << endl; break;
			}

			cout << "������������������ ������������ ��������: " << ptr << endl;
			cout << "1. �������-���������"	<< endl;
			cout << "2. �����"			<< endl;
			cout << "3. �������"		<< endl;
			cout << "4. �������"		<< endl;
			cout << "5. ���"			<< endl;
			cout << "6. �������-���������"	<< endl;
			cout << "7. ����-������"		<< endl;
			cout << "0. ��������� �����������" << endl;
			cout << "�������� ��������� ��� 0 ��� ��������� �������� �����������: "; cin >> d;
			std::system("cls");

		} while (d != 0);

		if (u >= 2)

			continue; cout << ">>> ������ ���� ���������������� ���� �� 2 ������������ �������� <<<" << endl;

	} while (u < 2);

	do {

		cout << "1. ���������������� ���������" << endl;
		cout << "2. ������ �����" << endl;
		cout << "�������� ��������: "; cin >> j;
		system("cls");

	} while (j != 1 && j != 2);

	if (j == 1)
	{
		Choice(a, d, b, u, ptr, temp, j);
	}

	if (j == 2)
	{
		cout << "���������� �����: " << endl;
		//???...Code...
	}
}