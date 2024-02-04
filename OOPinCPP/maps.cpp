// Map question:
// Are there any erros in this code -- logic or syntax?
// will it compile?
// will it run?
// if so, what is the output?

#include <iostream>
#include <map>
#include <string>


int main(){
    std::map <std::string, int> mymap;
    mymap.emplace("c", 1);
    mymap.emplace("a", 2);
    mymap.insert(std::pair<std::string, int>("b",3));
    mymap["string3"] = 4;
    for (auto it = mymap.rbegin(); it != mymap.rend(); ++it){
        std::cout << it->first << " => " << it->second << "\n";
    }
    return 0;
}