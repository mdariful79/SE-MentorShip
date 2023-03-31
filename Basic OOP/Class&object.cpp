#include<bits/stdc++.h>
#define ll long long
using namespace std;
class car{
    public:
    string brand;
    string model;
    int price;
};
 int main()
{
    car carOb1,carOb2;
    carOb1.brand = "Toyota";
    carOb1.model= "Crown";
    carOb1.price = 6000000;

    carOb2.brand = "Honda";
    carOb2.model= "grace";
    carOb2.price = 3500000;
    cout<<carOb1.brand<<" "<<carOb1.model<<" "<<carOb1.price<<endl;
    cout<<carOb2.brand<<" "<<carOb2.model<<" "<<carOb2.price<<endl;

}