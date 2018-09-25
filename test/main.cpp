#include <gtest/gtest.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


class Price {
 public:
    int price_of_item ;
    void setPrice(int priceOfItem) {
        price_of_item = priceOfItem;
    }

    int getPrice() {
        return price_of_item;
    }
} ;

