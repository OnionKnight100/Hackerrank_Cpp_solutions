#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    std::vector<int> parsed_integers;
    
    if(str.length() > 8*100000){
        return parsed_integers;
    }
    else{
        stringstream ss(str);
        
        int num;
        char comma;
        
        ss >> num;
        parsed_integers.push_back(num);
        
        while(ss >> comma){
            ss >> num;
            parsed_integers.push_back(num);
        }
        return parsed_integers;
    }
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}