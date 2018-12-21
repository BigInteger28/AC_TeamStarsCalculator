#include <iostream>
#include <math.h>

using namespace std;

double calc(double matches, double sumtotrat, double curRating, double score, double tegenpunten) {
    double rating = (((sumtotrat / matches) + curRating) / 2) + (score - tegenpunten);
    return rating;
}

double newRat(double curRating, double rating) {
    double kFactor;
    double dif = sqrt((curRating - rating) * (curRating - rating));
    if (dif  <= 45) {
        kFactor = 1 - (dif / 50);
    } else {
        kFactor = 0.1;
    }
    return curRating + ((rating - curRating) * kFactor);
}

int main()
{
    while (1 != 2)
    {
        double matches;
        double sumtotrat;
        double score;
        double tegenpunten;
        double curRating;
        double rating;

        cout << "Total sum all ratings played against: ";
        cin >> sumtotrat;
        cout << "Total matches played: ";
        cin >> matches;
        cout << "Total score: ";
        cin >> score;
        cout << "Total enemy score: ";
        cin >> tegenpunten;
        cout << "Current rating: ";
        cin >> curRating;

        rating = calc(matches, sumtotrat, curRating, score, tegenpunten);
        cout << "\nPlay Rating: " << rating;
        cout << "\nNew Rating: " << newRat(curRating, rating);
        cout << "\n\n\n";
    }
}

