#ifndef FOOTBALLTEAMBUILDER_H
#define FOOTBALLTEAMBUILDER_H
#include <string>
#include <vector>
#include <memory>

class FootballTeam {
private:
	std::string director_;
	std::string coach_;
	std::vector<std::string> players_;

public:
	void setDirector(std::string director);
	void setCoach(std::string coach);
	void setPlayers(std::vector<std::string> players);
	void printTeam();
};

class FootballTeamBuilder {
protected:
	std::shared_ptr<FootballTeam> footballTeam_;

public:
	FootballTeamBuilder();
	virtual void buildDirector() = 0;
	virtual void buildCoach() = 0;
	virtual void buildPlayers() = 0;
	FootballTeam getFootballTeam() const;
};

class WeakTeamBuilder : public FootballTeamBuilder {
public:
	void buildDirector() override;
	void buildCoach() override;
	void buildPlayers() override;
};

class GoodTeamBuilder : public FootballTeamBuilder {
public:
	void buildDirector() override;
	void buildCoach() override;
	void buildPlayers() override;
};

class FootballTeamsDirector {
public:
	void buildFootballTeam(std::shared_ptr<FootballTeamBuilder> builder);
};
#endif
