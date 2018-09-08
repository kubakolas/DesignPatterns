#include "FootballTeamBuilder.h"
int main() {
	FootballTeamsDirector director;
	const auto weakTeamBuilder = std::make_shared<WeakTeamBuilder>();
	const auto goodTeamBuilder = std::make_shared<GoodTeamBuilder>();
	director.buildFootballTeam(weakTeamBuilder);
	const auto weakTeam = weakTeamBuilder->getFootballTeam();
	weakTeam.printTeam();
	director.buildFootballTeam(goodTeamBuilder);
	const auto goodTeam = goodTeamBuilder->getFootballTeam();
	goodTeam.printTeam();
	return 0;
}

