#pragma once

#include <string>
#include <vector>

#include "Vendor.h"
#include "Review.h"

using namespace std;

class Product {
private:
    int price;
    class InvalidPriceException {};
    class NoReviewException {};
    Vendor* vendor;
    vector<Review*> reviews;
public:
    string name;
    string description;

    int getPrice() const;
    void setPrice(int price);
    Vendor* getVendor() const;
    void setVendor(Vendor* vendor);
    int getReviewCount() const;
    void addReview(Review* review);
    int getAvgRating() const;
};