#include "FootballTeam.h"
#include <memory>
#include <vector>

int main()
{
	std::vector<std::shared_ptr<FootballTeam>> teams{ std::make_shared<RealMadrid>(),
													  std::make_shared<LechPoznan>() };
	for (auto team : teams) {
		team->presentTeam();
	}
	return 0;
}

