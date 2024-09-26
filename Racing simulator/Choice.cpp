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

	//Наземные транспорты 
	class Camel : public LandTransport {

	private:
		string name = "Верблюд";
		int distance{};
		float Time{};

	public:Camel(int distance_ptr) : distance{ distance_ptr } {}

		float time() override
		{
			cout << name << "\t"; // Time = ... Code формула...;
			return Time;
		}
	};
	class Camel_Fast : public LandTransport
	{
	private:
		string name = "Верблюд-быстроход";
		int distance{};
		float Time{};

	public:Camel_Fast(int distance_ptr) : distance{ distance_ptr } {}
		float time() override
		{
			cout << name << "\t"; // Time = ... Code формула...;
			return Time;
		}
	};
	class Centaur : public LandTransport
	{
	private:
		string name = "Кентавр";
		int distance{};
		float Time{};

	public:Centaur(int distance_ptr) : distance{ distance_ptr } {}
		float time() override
		{
			cout << name << "\t"; // Time = ... Code формула...;
			return Time;
		}
	};
	class All_terrain_boots : public LandTransport
	{
	private:
		string name = "Ботинки-вездеходы";
		int distance{};
		float Time{};

	public:All_terrain_boots(int distance_ptr) : distance{ distance_ptr } {}
		float time() override
		{
			cout << name << "\t"; // Time = ... Code формула...;
			return Time;
		}
	};

	//Воздушные транспорты
	class Magic_Carpet : public AirTransport
	{
	private:
		string name = "Ковёр-самолёт";
		int distance{};
		float Time{};

	public:Magic_Carpet(int distance_ptr) : distance{ distance_ptr } {}
		float time() override
		{
			cout << name << "\t"; // Time = ... Code формула...;
			return Time;
		}
	};
	class Broomstick : public AirTransport
	{
	private:
		string name = "Метла";
		int distance{};
		float Time{};

	public:Broomstick(int distance_ptr) : distance{ distance_ptr } {}
		float time() override
		{
			cout << name << "\t"; // Time = ... Code формула...;
			return Time;
		}
	};
	class Eagle : public AirTransport
	{
	private:
		string name = "Орёл";
		int distance{};
		float Time{};

	public:Eagle(int distance_ptr) : distance{ distance_ptr } {}
		float time() override
		{
			cout << name << "\t"; // Time = ... Code формула...;
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
				case 1:cout << "Ботинки-вездеходы успешно зарегестрированы! "								<< endl; u++; temp = "Ботинки-вездеходы ";	ptr = ptr + temp;  	break;
				case 2:cout << ">>> Попытка зарегестрировать неправильный тип транспортного средства! <<<"	<< endl; 														break;
				case 3:cout << "Верблюд успешно зарегестрирован!"											<< endl; u++; temp = "Верблюд ";			ptr = ptr + temp; 	break;
				case 4:cout << "Кентавр успешно зарегестрирован!"											<< endl; u++; temp = "Кентавр ";			ptr = ptr + temp; 	break;
				case 5:cout << ">>> Попытка зарегестрировать неправильный тип транспортного средства! <<<"	<< endl;														break;
				case 6:cout << "Верблюд-быстроход успешно зарегестрирован!"									<< endl; u++; temp = "Верблюд-быстроход ";	ptr = ptr + temp; 	break;
				case 7:cout << ">>> Попытка зарегестрировать неправильный тип транспортного средства! <<<"	<< endl;														break;
				default:cout << "Транспорта под такой нумерацией не существует!"							<< endl;														break;
				}
			}
			if (a == 2){

				switch (d) {
				case 0:cout << "";																																			break;
				case 1:cout << ">>> Попытка зарегестрировать неправильный тип транспортного средства! <<<"	<< endl;														break;
				case 2:cout << "Метла успешно зарегестрирована!"											<< endl; u++; temp = "Метла ";				ptr = ptr + temp; 	break;
				case 3:cout << ">>> Попытка зарегестрировать неправильный тип транспортного средства! <<<"	<< endl; 														break;
				case 4:cout << ">>> Попытка зарегестрировать неправильный тип транспортного средства! <<<"	<< endl; 														break;
				case 5:cout << "Орёл успешно зарегестрирован!"												<< endl; u++; temp = "Орёл ";				ptr = ptr + temp; 	break;
				case 6:cout << ">>> Попытка зарегестрировать неправильный тип транспортного средства! <<<"	<< endl; 														break;
				case 7:cout << "Ковёр-самолёт успешно зарегестрирован!"										<< endl; u++; temp = "Ковёр-самолёт ";		ptr = ptr + temp; 	break;
				default:cout << "Транспорта под такой нумерацией не существует!"							<< endl; 														break;
				}
			}
			if (a == 3){

				switch (d) {
				case 0:cout << "";																																			break;
				case 1:cout << "Ботинки-вездеходы успешно зарегестрированы! "								<< endl; u++; temp = "Ботинки-вездеходы ";  ptr = ptr + temp;	break;
				case 2:cout << "Метла успешно зарегестрирована!"											<< endl; u++; temp = "Метла ";				ptr = ptr + temp; 	break;
				case 3:cout << "Верблюд успешно зарегестрирован!"											<< endl; u++; temp = "Верблюд ";			ptr = ptr + temp; 	break;
				case 4:cout << "Кентавр успешно зарегестрирован!"											<< endl; u++; temp = "Кентавр ";			ptr = ptr + temp; 	break;
				case 5:cout << "Орёл успешно зарегестрирован!"												<< endl; u++; temp = "Орёл ";				ptr = ptr + temp; 	break;
				case 6:cout << "Верблюд-быстроход успешно зарегестрирован!"									<< endl; u++; temp = "Верблюд-быстроход ";  ptr = ptr + temp; 	break;
				case 7:cout << "Ковёр-самолёт успешно зарегестрирован!"										<< endl; u++; temp = "Ковёр-самолёт ";		ptr = ptr + temp; 	break;
				default:cout << "Транспорта под такой нумерацией не существует!"							<< endl;														break;
				}
			}

			switch (a) {

				case 1: cout << "Гонка для наземного транспорта. Расстояние: ";				cout << b << endl; break;
				case 2: cout << "Гонка для воздушного транспорта. Расстояние: ";			cout << b << endl; break;
				case 3: cout << "Гонка для наземного и воздушного транспорта.Расстояние: "; cout << b << endl; break;
			}

			cout << "Зарегестрированные транспортные средства: " << ptr << endl;
			cout << "1. Ботинки-вездеходы"	<< endl;
			cout << "2. Метла"			<< endl;
			cout << "3. Верблюд"		<< endl;
			cout << "4. Кентавр"		<< endl;
			cout << "5. Орёл"			<< endl;
			cout << "6. Верблюд-быстроход"	<< endl;
			cout << "7. Ковёр-самолёт"		<< endl;
			cout << "0. Закончить регистрацию" << endl;
			cout << "Выберите транспорт или 0 для окончания процесса регистрации: "; cin >> d;
			std::system("cls");

		} while (d != 0);

		if (u >= 2)

			continue; cout << ">>> Должно быть зарегестрировано хотя бы 2 транспортных стедства <<<" << endl;

	} while (u < 2);

	do {

		cout << "1. Зарегестрировать транспорт" << endl;
		cout << "2. Начать гонку" << endl;
		cout << "Выберите действие: "; cin >> j;
		system("cls");

	} while (j != 1 && j != 2);

	if (j == 1)
	{
		Choice(a, d, b, u, ptr, temp, j);
	}

	if (j == 2)
	{
		cout << "Результыты гонки: " << endl;
		//???...Code...
	}
}