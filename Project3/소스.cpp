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
	cout << "죽었습니다." << endl << endl;
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
			cout << "체력이" << Qdamaged << " 감소하여 " << energy << " 이 되었습니다.\n";
			energy -= Qdamaged;
			cout << "체력:" << energy << "\n";
		}
		else if (q == 'w')
		{
			cout << "체력이" << Wdamaged << " 감소하여 " << energy << " 이 되었습니다.\n";
			energy -= Wdamaged;
			cout << "체력:" << energy << "\n";
		}
		else if (q == 'e')
		{
			cout << "체력이" << Edamaged << " 감소하여 " << energy << " 이 되었습니다.\n";
			energy -= Edamaged;
			cout << "체력:" << energy << "\n";
		}
		else if (q == 'r')
		{
			cout << "체력이" << Rdamaged << " 감소하여 " << energy << " 이 되었습니다.\n";
			energy -= Rdamaged;
			cout << "체력:" << energy << "\n";
		}
		return energy;
	}
}



Game::Game()
{
	cout << "체력이" << energy << "인 캐릭터가 만들어졌습니다.\n";
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