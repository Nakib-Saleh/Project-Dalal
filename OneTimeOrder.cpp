#include "OneTimeOrder.h"

OneTimeOrder::OneTimeOrder() {
    status = false;
}

bool OneTimeOrder::getStatus() const {
    return status;
}

void OneTimeOrder::markAsCompleted() {
    status = true;
}
