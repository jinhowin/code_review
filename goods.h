#ifndef GOODS_H_
#define GOODS_H_

// Goods class for representing goods information with index and price
// Example:
//    Goods test;
//    test.SetGoodsInfo(1, 10000);
//    std::cout << test.GetIndex() << " - " << test.GetPrice << endl;
class Goods{
 public:
  Goods() : goods_index_(0), goods_price_(0) {};
  void SetGoodsInfo(int index, int price);
  int GetGoodsIndex();
  int GetGoodsPrice();

 private:
  int goods_index_;
  int goods_price_;
};


#endif  // GOODS_H_
