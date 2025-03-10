#include "Vendor.h"

int Vendor::getProductCount() const
{
    return products.size();
}

vector<Product*> Vendor::getProducts() const {
    return products;
}

void Vendor::addProduct(Product* product)
{
    products.push_back(product);
}

int Vendor::getOrderCount() const
{
    return orders.size();
}

float Vendor::getAvgRating() const
{
    float totalRating = 0.0f;
    int count = 0;
    int noRating = 0;
    for(Product* product : products) {
        try {
            totalRating += getAvgRating();
            count++;
        } catch (Product::NoReviewException) {
            noRating++;
        }
    }
    if(count == 0) {
        throw NoReviewException();
    }
    return totalRating / count;
}

vector<Order*> Vendor::getOrders() const {
    return orders;
}