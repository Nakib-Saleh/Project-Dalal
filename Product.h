#pragma once

#include <string>
#include <vector>

#include "Review.h"

using namespace std;

class Product {
private:
    int price;
    vector<Review*> reviews;
public:
    string name;
    string description;

    class InvalidPriceException {};
    class NoReviewException {};

    int getPrice() const;
    void setPrice(int price);
    //Vendor* getVendor() const;
    //void setVendor(Vendor* vendor);
    int getReviewCount() const;
    void addReview(Review* review);
    float getAvgRating() const;
};