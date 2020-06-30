#include <stdio.h>

int main()
{
	while (1)
	{
		int choice;

		printf("1. ZERO Placement Round Robin");
		printf("\n2. MID rating calculator\n");
		printf("\nChoice: ");
		scanf(" %d", &choice);

		if (choice == 1) {
			float midrat;
			float maxrat;
			float maxmatches;
			float score;

			printf("Maximum amount of matches: ");
			scanf(" %f", &maxmatches);
			printf("Mid rating: ");
			scanf(" %f", &midrat);
			printf("Max rating: ");
			scanf(" %f", &maxrat);
			printf("Score: ");
			scanf(" %f", &score);

			float mid = maxmatches / 2;
			if (score <= mid) score *= midrat / mid;
			else score = (score - mid) * (maxrat / mid);
			printf("\nNew rating is %.0f", score);
		}

		if (choice == 2) {
			float totalTeams;
			float matchesPerTeam;
			float starsPerWonMatch;

			printf("Total teams: ");
			scanf(" %f", &totalTeams);
			printf("Matches per team: ");
			scanf(" %f", &matchesPerTeam);
			printf("Stars per WIN single match: ");
			scanf(" %f", &starsPerWonMatch);

			float maxmatches = (totalTeams - 1) * matchesPerTeam;
			float midrating = (maxmatches * starsPerWonMatch) / 2;
			printf("\nMax amount of matches is %.0f", maxmatches);
			printf("\nMID rating is %.0f", midrating);
		}
		printf("\n\n");
	}
}
