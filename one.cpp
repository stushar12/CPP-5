#include<iostream>
#include<string>
#include<map>
#include<set>
#include<algorithm>

using namespace std;

int main()
{
multiset<int> ms;
multimap<int,int> Map;

ms.insert(5);
ms.insert(10);
ms.insert(20);
ms.insert(8);
ms.insert(30);
ms.insert(8);



for( auto itr=ms.begin();itr!=ms.end();itr++)
{

    auto itr1=ms.upper_bound(*itr);
    int j=distance(itr1,ms.end());
   
    Map.insert({*itr,j});


}

for(auto itr2=Map.begin();itr2!=Map.end();itr2++)
cout<<itr2->first<<" "<<itr2->second<< endl;
}


