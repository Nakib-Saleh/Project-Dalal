#pragma once

#include <string>
using namespace std;

class Review {
private:
    int time;
    int rating;
public:
    Review() {
        rating = 5;
    }
    
    string description;

    class OutOfBoundException {};

    int getTime() const;

    void setTime(int time);

    int getRating() const;

    int setRating(int rating);
};