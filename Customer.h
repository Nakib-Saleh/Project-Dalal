#pragma once

#include <vector>
#include <map>
#include "User.h"
#include "Order.h"

using namespace std;

class Customer : public User {
private:
    vector<Order*> history;
    map<Product*, int> wishlist, cart;
    string shippingAddress;
public:
    void addToCart(Product* product);
    void makeOrder();
    void setShippingAddress(string address);
    string getShippingAddress() const;
};

string Customer::getShippingAddress() const
{
    return shippingAddress;
}
