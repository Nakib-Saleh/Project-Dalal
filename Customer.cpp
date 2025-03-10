#include "Customer.h"

void Customer::addToCart(Product* product)
{
    cart[product]++;
}

void Customer::makeOrder()
{
    Order* newOrder = new Order();
    for(auto& [product, cnt] : cart) {
        for(int i=0; i<cnt; i++) {
            newOrder->addProduct(product);
        }
    }

    history.push_back(newOrder);
    cart.clear();
}

void Customer::setShippingAddress(string address)
{
    this->shippingAddress = address;
}
