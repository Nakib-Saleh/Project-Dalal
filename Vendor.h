#pragma once;

#include "User.h"
#include "Product.h"
#include "Order.h"

class Vendor : public User {
private:
    vector<Product*> products;
    vector<Order*> orders;
public:
    class OrderNotFoundException {};
    class NoReviewException {};

    int getProductCount() const;
    vector<Product*> getProducts() const;
    void addProduct(Product* product);
    int getOrderCount() const;
    vector<Order*> getOrders() const;
    float getAvgRating() const;
};