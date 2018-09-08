#ifndef FOOTBALLTEAMFACADE_H
#define FOOTBALLTEAMFACADE_H
#include <iostream>
#include <vector>

class Coach {
public:
	void presentCoach() {
		std::cout << "Presenting coach" << std::endl;
	}
};

class Director {
public:
	void getClubInfo() {
		std::cout << "The club's budget is 2 million dollars" << std::endl;
	}
};

class Players {
public:
	void getPlayersNames() {
		for (const auto& name : { "Kowalski", "Ronaldo", "Messi" }) {
			std::cout << name << std::endl;
		}
	}
};

class FootballTeamFacade {
private:
	Coach coach_;
	Director director_;
	Players players_;

public:
	void presentCoach() {
		coach_.presentCoach();
	}
	void getClubInfo() {
		director_.getClubInfo();
	}
	void getPlayersNames() {
		players_.getPlayersNames();
	}
};
#endif

