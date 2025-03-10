#pragma once

#include "Order.h"
#include <ctime>

class EMIOrder : public Order {
private:
    float due, minimumPayment;
    time_t expiryDate;

    class InvalidAmountException {};
    
public:
    EMIOrder(float due, float minimumPayment);
    bool getStatus() const;
    void payInstallment(float amount);
};