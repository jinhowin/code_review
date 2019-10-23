#include <iostream>
#include <algorithm>
#include "./shopping.h"

// Push Goods object to shopping_list_ vector
void ShoppingList::AddGoodsToList(Goods object) {
  shopping_list_.push_back(object);
}

// Get Goods object from end of shopping_list_ vector
Goods ShoppingList::GetLastGoods() {
  return shopping_list_.back();
}

// Print shopping_list_ Elements
void ShoppingList::PrintShoppingGoodsList() {
  for (std::vector<Goods>::iterator i = shopping_list_.begin();
      i != shopping_list_.end(); i++) {
    std::cout << "Goods #" << i->GetGoodsIndex() << " - Price : " <<
    i->GetGoodsIndex() << std::endl;
  }
}

bool compareByPrice(const std::vector<Goods>& a, const std::vector<Goods>& b) {
	return a->goods_price_ < b->goods_price_;
}

// Sort shopping_list_ Elements by Price
// Apply Selection Sort algorithm
void ShoppingList::SortByPrice() {
  std::sort(shopping_list_.begin(), shopping_list_.end(), compareByPrice);
}

bool compareByIndex(const std::vector<Goods>& a, const std::vector<Goods>& b) {
	return a->goods_index_ < b->goods_index_;
}

// Sort shopping_list_ Elements by Index
// Apply Selection Sort algorithm
void ShoppingList::SortByIndex() {
  std::sort(shopping_list_.begin(), shopping_list_.end(), compareByIndex);
}
