#include <iostream>

using namespace std;

int main() {

     cout << "Perfect numbers between 1 and 500 are: ";
     for(int i=0; i<=500 ; i++) {
        int sum = 0;
        for(int j=1; j<i; j++) {
            if(i % j == 0) {
                sum += j;
            }
        }
        if(sum == i && i!=0) {
            cout << i << " ";        
        }
     }
     cout << endl;
     return 0;
}