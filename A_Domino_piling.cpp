#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int N,M;
    cin>>N>>M;
    
    int AOD = 2;
    int area_of_board = N*M;
    if(area_of_board%AOD==0){cout<<area_of_board/AOD;}
    else{cout<<floor(area_of_board/AOD);}
    return 0;
   
}
//accepted 