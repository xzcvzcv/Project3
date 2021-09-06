#include <iostream>
#include<cstdlib>
#include<ctime>
#include <conio.h>

using namespace std;

class Game {
private:
	double energy = 100;

public:
	Game();
	double Qdamaged();
	double Wdamaged();
	double Edamaged();
	double Rdamaged();
	static void Die();
	double Damage();
	char q, w, e, r;
};

void Game::Die() {
	cout << "�׾����ϴ�." << endl << endl;
}
double Game::Damage() {
	double Qdamaged = 10;
	double Wdamaged = 15;
	double Edamaged = 20;
	double Rdamaged = 30;

	if (energy > 0) {
		q = _getch();
		if (q == 'q')
		{
			cout << "ü����" << Qdamaged << " �����Ͽ� " << energy << " �� �Ǿ����ϴ�.\n";
			energy -= Qdamaged;
			cout << "ü��:" << energy << "\n";
		}
		else if (q == 'w')
		{
			cout << "ü����" << Wdamaged << " �����Ͽ� " << energy << " �� �Ǿ����ϴ�.\n";
			energy -= Wdamaged;
			cout << "ü��:" << energy << "\n";
		}
		else if (q == 'e')
		{
			cout << "ü����" << Edamaged << " �����Ͽ� " << energy << " �� �Ǿ����ϴ�.\n";
			energy -= Edamaged;
			cout << "ü��:" << energy << "\n";
		}
		else if (q == 'r')
		{
			cout << "ü����" << Rdamaged << " �����Ͽ� " << energy << " �� �Ǿ����ϴ�.\n";
			energy -= Rdamaged;
			cout << "ü��:" << energy << "\n";
		}
		return energy;
	}
}



Game::Game()
{
	cout << "ü����" << energy << "�� ĳ���Ͱ� ����������ϴ�.\n";
	Damage();
	Damage();
	Damage();
	Damage();
	Damage();
	Damage();
	Damage();
	Damage();
	Damage();
	Damage();
	Damage();
	Damage();
	Damage();
	Damage();
	Damage();
	Damage();
}

int main()
{
	srand((unsigned int)time(NULL));
	Game c1;
	Game::Die();
	Game c2;
	c2.Damage();
	c2.Damage();
	c2.Damage();
	c2.Die();
	return 0;
}