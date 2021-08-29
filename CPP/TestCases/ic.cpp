#include <iostream>
#include <vector>

// C++11 lest unit testing framework
#include "lest.hpp"

using namespace std;

int getMaxProfit(const vector<int>& stockPrices)
{
    // calculate the max profit
    int maxProfit = 0;

    // go through every time
    for (size_t outerTime = 0; outerTime < stockPrices.size();
        ++outerTime) {

        // for every time, go through every other time
        for (size_t innerTime = 0; innerTime < stockPrices.size();
            ++innerTime) {

            // for each pair, find the earlier and later times
            size_t earlierTime = min(outerTime, innerTime);
            size_t laterTime   = max(outerTime, innerTime);

            // and use those to find the earlier and later prices
            int earlierPrice = stockPrices[earlierTime];
            int laterPrice   = stockPrices[laterTime];

            // see what our profit would be if we bought at the
            // min price and sold at the current price
            int potentialProfit = laterPrice - earlierPrice;

            // update maxProfit if we can do better
            maxProfit = max(maxProfit, potentialProfit);
        }
    }

    return maxProfit;
}


// tests

const lest::test tests[] = {
    {CASE("price goes up then down") {
        const int actual = getMaxProfit({1, 5, 3, 2});
        const int expected = 4;
        EXPECT(actual == expected);
    }},

    {CASE("price goes down then up") {
        const int actual = getMaxProfit({7, 2, 8, 9});
        const int expected = 7;
        EXPECT(actual == expected);
    }},

    {CASE("big increase then small increase") {
        const int actual = getMaxProfit({2, 10, 1, 4});
        const int expected = 8;
        EXPECT(actual == expected);
    }},

    {CASE("price goes up all day") {
        const int actual = getMaxProfit({1, 6, 7, 9});
        const int expected = 8;
        EXPECT(actual == expected);
    }},

    {CASE("price goes down all day") {
        const int actual = getMaxProfit({9, 7, 4, 1});
        const int expected = -2;
        EXPECT(actual == expected);
    }},

    {CASE("price stays the same all day") {
        const int actual = getMaxProfit({1, 1, 1, 1});
        const int expected = 0;
        EXPECT(actual == expected);
    }},

    {CASE("exception with empty prices") {
        EXPECT_THROWS(getMaxProfit({}));
    }},

    {CASE("exception with one price") {
        EXPECT_THROWS(getMaxProfit({1}));
    }},
};

int main(int argc, char** argv)
{
    return lest::run(tests, argc, argv);
}