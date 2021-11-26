#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int buyMaximumStocks(int n , int k , int price[]){
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        v.push_back(make_pair(price[i],i+1));
    }
    sort(v.begin(),v.end());
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += min(v[i].second, k / v[i].first);
        k -= v[i].first * min(v[i].second,(k / v[i].first));
    }
    return ans;
}

int main()
{
    int days = 0 ;
    cout<<"Enter the number of days : ";
    cin>>days;
    cout<<endl;
    int prices[days];
    for(int i=0;i<days;i++){
        cout<<"Enter the price of the stock on day "<<i+1<<" : ";
        cin>>prices[i];
    }
    cout<<endl;
    int amount = 0;
    cout<<"Enter the amount you want to invest : ";
    cin>>amount;
    cout<<endl;
    cout<<"Maximum number of stocks can be bought = "<<buyMaximumStocks(days,amount,prices)<<endl;

    return 0;
}
