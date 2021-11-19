 
#include <iostream>
using namespace std;
   
int main(){
    int input[4]= {8,4,9,5};
    int count, i, min;     
    min = input[0];
    // search num in inputArray from index 0 to elementCount-1 
    for(i = 0; i < 4; i++){
        if(input[i]==0)
        continue;
        if(input[i] < min || min ==0){
            min = input[i];
        }
    }
    cout  << "Minimum Element\n" << min;
 
    return 0;
}