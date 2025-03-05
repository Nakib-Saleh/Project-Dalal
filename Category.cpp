#include "Category.h"

set<Category*> CategoryManager::getCategories() const {
    return categories;
}

int CategoryManager::getCount() {
    return categories.size();
}

int CategoryManager::addCategory(Category* category) {
    if(categories.find(category) == categories.end()) {
        throw DuplicateCategoryException();
    }
    categories.insert(category);
}

bool CategoryManager::removeCategory(Category* category) {
    if(categories.find(category) == categories.end()) {
        return false;
    }

    categories.erase(category);
    return true;
}