#ifndef FOOTBALLTEAM_H
#define FOOTBALLTEAM_H
#include <iostream>

class FootballTeam {
protected:
	virtual void showTeamName() = 0;
	virtual void presentCoach() = 0;
	virtual unsigned int getNumberOfPlayers() = 0;

public:
	void presentTeam() {
		sayHello();
		showTeamName();
		presentCoach();
		countPlayers();
		sayGoodBye();
	}
	
private:
	void countPlayers() {
		std::cout << "Number of our players: " << getNumberOfPlayers() << std::endl;
	}
	void sayHello() {
		std::cout << "Hello!" << std::endl;
	}
	void sayGoodBye() {
		std::cout << "Good bye!" << std::endl;
	}
};

class RealMadrid : public FootballTeam {
	void showTeamName() override {
		std::cout << "We are Real Madrid" << std::endl;
	}
	void presentCoach() override {
		std::cout << "We present you out coach Kowalski!" << std::endl;
	}
	unsigned int getNumberOfPlayers() override {
		return 24;
	}
};

class LechPoznan : public FootballTeam {
	void showTeamName() override {
		std::cout << "Our name is Lech Poznan!" << std::endl;
	}
	void presentCoach() override {
		std::cout << "Our coach is Nowak!" << std::endl;
	}
	unsigned int getNumberOfPlayers() override {
		return 22;
	}
};
#endif
