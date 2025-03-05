#include "Product.h"

int Product::getPrice() const {
    return price;
}

void Product::setPrice(int price) {
    if(price < 0) {
        throw InvalidPriceException();
    }
    
    this->price = price;
}

Vendor* Product::getVendor() const {
    return vendor;
}

void Product::setVendor(Vendor* vendor) {
    this->vendor = vendor;
}

int Product::getReviewCount() const {
    return reviews.size();
}

void Product::addReview(Review* review) {
    reviews.push_back(review);
}

int Product::getAvgRating() const {
    if(getReviewCount()) {
        throw NoReviewException();
    }

    float totalRating = 0;
    for(auto& review : reviews) {
        totalRating += review->getRating();
    }

    return totalRating /= getReviewCount();
}