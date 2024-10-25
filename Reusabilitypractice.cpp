#include <iostream>
#include <string>
#include <vector>
using namespace std;

//predicate
bool checkStringStartWithNCL(const string& item){
		return  !item.empty() && (item.substr(0, 1) == "N" || item.substr(0, 1) == "C" || item.substr(0, 1) == "L") ;
}

vector<string> filter(vector<string> source,bool(*predicate)(const string&)){
       std::vector<std::string> filteredStrings;
		for (const string& item : source) {
        // Check if the city starts with "New"
			if (predicate(item)) {
            filteredStrings.push_back(item);
		}
    }
    return filteredStrings;
}


int main() {
    // Create an array of cities
    vector<std::string> cities = {"New York", "Los Angeles", "Chicago", "New Jersey"};

    // Create a vector to hold cities that start with "New"
  vector<string> newCities=filter(cities,&checkStringStartWithNCL);
  std::cout << "Cities that start with 'New':" << std::endl;
    for (const string& newCity : newCities) {
        std::cout << newCity << std::endl;
    }

    return 0;
}
