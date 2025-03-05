#include "Review.h"

int Review::getTime() const {
    return time;
}

void Review::setTime(int time) {
    this->time = time;
}

int Review::getRating() const {
    return rating;
}

int Review::setRating(int rating) {
    if(rating < 0 || rating > 5) {
        throw OutOfBoundException();
    }

    this->rating = rating;
}