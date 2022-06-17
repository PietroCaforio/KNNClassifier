#include <map>
#include <iostream>

int main(){
  std::multimap<int,int> map;
  map.insert(std::make_pair(1,1));
  map.insert(std::make_pair(1,2));
  map.insert(std::make_pair(1,3));
  map.insert(std::make_pair(3,1));
  map.insert(std::make_pair(3,4));

  for(auto el : map){
    std::cout << el.first << " " << el.second << std::endl;
  }
  return 0;
}
