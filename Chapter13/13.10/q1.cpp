#include <iostream>

struct AdRevenue
{
    int adsWatched {};
    double usersAdsRatio {};
    double earningsPerAd {};
};

void calcAdRevenue(AdRevenue& dailyAds)
{
    std::cout << dailyAds.adsWatched * dailyAds.usersAdsRatio * dailyAds.earningsPerAd << '\n';
    return;
}

int main()
{
    AdRevenue day1;
    AdRevenue day2 {20, 0.4, 2.50};

    calcAdRevenue(day1);
    calcAdRevenue(day2);

    return 0;
}