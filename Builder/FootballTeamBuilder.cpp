#include "FootballTeamBuilder.h"
#include <iostream>

void FootballTeam::setDirector(std::string director) {
	director_ = director;
}

void FootballTeam::setCoach(std::string coach) {
	coach_ = coach;
}

void FootballTeam::setPlayers(std::vector<std::string> players) {
	players_ = players;
}

void FootballTeam::printTeam() {
	std::cout << "Coach: " << coach_ << std::endl;
	std::cout << "Director: " << director_ << std::endl;
	std::cout << "Players: " << std::endl;
	for (const auto& player : players_)	{
		std::cout << player << std::endl;
	}
}

FootballTeamBuilder::FootballTeamBuilder() {
	footballTeam_ = std::make_shared<FootballTeam>();
}


FootballTeam FootballTeamBuilder::getFootballTeam() const {
	return *footballTeam_;
}

void WeakTeamBuilder::buildDirector() {
	footballTeam_->setDirector("Jan Nowak");
}

void WeakTeamBuilder::buildCoach() {
	footballTeam_->setCoach("Janusz Wojcik");
}

void WeakTeamBuilder::buildPlayers() {
	footballTeam_->setPlayers({ "Tomek Hajto", "Jan Tomaszewski", "Michal Pazdan" });
}

void GoodTeamBuilder::buildDirector() {
	footballTeam_->setDirector("Florentino Perez");
}

void GoodTeamBuilder::buildCoach() {
	footballTeam_->setCoach("Carlo Ancelotti");
}

void GoodTeamBuilder::buildPlayers() {
	footballTeam_->setPlayers({ "Leo Messi", "Ronaldo",  "Buffon" });
}

void FootballTeamsDirector::buildFootballTeam(std::shared_ptr<FootballTeamBuilder> builder) {
	builder->buildCoach();
	builder->buildDirector();
	builder->buildPlayers();
}



