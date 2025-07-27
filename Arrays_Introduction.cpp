#include <cmath>
#include <cstdio>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size = 1;
    scanf("%d",&size);
    
    if(size<1 || size>1000) return 1;
    
    // VLAs (Variable Length Arrays) are not part of the C++ standard,
    // compilers like gcc and clang support them as extension, but MSVC does not
    // use vector or heap allocation to be safe, passed the testcases in hackkerank tho
    // int *arr = new int[size]; and delete[] arr; // heap allocation and deallocation
    // 
    int arr[size];
    
    for(int i=0; i<size; i++){
        int element;
        scanf("%d", &element);
        
        if(element < 1 || element > 10000) return 1;
        arr[i] = element;
          
    }
    for(int i = size-1; i >= 0; i--){
        printf("%d ", arr[i]);
    } 

    return 0;
}
