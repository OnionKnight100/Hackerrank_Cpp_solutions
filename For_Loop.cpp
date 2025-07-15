#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    string arr[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    std::scanf("%d\n%d", &a, &b);
    
    for(int i = a; i < b+1; i++){
        if(i < 10 && i >= 1){
            std::cout<<arr[i-1]<<std::endl;
        }
        else{
            if(i%2 == 0) std::cout<<"even \n";
            else std::cout<<"odd \n";
        }
    }
    return 0;
}