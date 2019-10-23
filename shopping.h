#ifndef SHOPPING_H_
#define SHOPPING_H_

#include <vector>
#include "./goods.h"

// Shopping class presents List of shopping.
// Example:
//     Shopping tobuylist;
//     Goods obj1;
//     Goods obj2;
//     ...
//     tobuylist.PushList(obj1);
//     tobuylist.PushList(obj2);
//     tobuylist.PrintList();
class ShoppingList {
 public:
  void AddGoodsToList(Goods object);
  Goods GetLastGoods();
  void PrintShoppingGoodsList();
  void SortByPrice();
  void SortByIndex();

 private:
  std::vector<Goods> shopping_list_;
};

#endif  // SHOPPING_H_
