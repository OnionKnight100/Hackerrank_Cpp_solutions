#include <cmath>
#include <cstdio>
#include <vector>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num_arrays, queries;
    
    std::scanf("%d %d\n", &num_arrays, &queries);
    if(num_arrays < 1 || num_arrays > 100000 || queries < 1 || queries > 100000){
        return 1;
    }
    std::vector<std::vector<int>> arr(num_arrays);
    
    for(int i=0; i<num_arrays; i++){
        int element_count;
        std::scanf("%d", &element_count);
        if(element_count < 1 || element_count > 300000){
            return 1;
        }
        
        std::vector<int> sub_arr(element_count);
        
        for(int j=0; j<element_count; j++){
            std::scanf("%d", &sub_arr[j]);    
        }
        arr[i] = sub_arr; 
    }
    
    int output[queries];
    
    for(int k=0; k<queries; k++){
        int i,j;
        scanf("%d %d", &i, &j);
        
        output[k] = arr[i][j];  // segmentation fault ?    
    }
    
    for(int q : output){
        printf("%d\n", q);
    }
    
    return 0;
}
