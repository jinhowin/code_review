#include "./goods.h"

// Set member variable of goods with given index and price values
void Goods::SetGoodsInfo(int index, int price) {
  goods_index_ = index;
  goods_price_ = price;
}

// Return index information
int Goods::GetGoodsIndex() {
  return goods_index_;
}

// Return price informaiton
int Goods::GetGoodsPrice() {
  return goods_price_;
}
