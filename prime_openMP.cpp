#include<iostream>
#include<omp.h>
using namespace std;

bool prime(uint32_t number){
  
    bool isprime = true;
    #pragma omp parallel for num_threads(omp_get_max_threads())
    for(int i = 2; i < number/2; i++){
        if(number % i == 0){
            isprime = false;
        }
    }
    return isprime;
}
int main(){
    
    uint32_t number;
    cin >> number;
    if(number > 0 && number < 4294967295){
        if(prime(number)){
            cout << number << " IS PRIME" << endl;
        }
        else{
            cout << number << " IS NOT PRIME" << endl;
        }
    }
    else{
        cerr << "INTEGER MUST BE GREATER THAN 0 AND LESS THAN 4,294,967,295" << endl;
    }
    return 0;
}
