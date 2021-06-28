#include<iostream>
#include<list>
#include<vector>
using namespace std;

int main(){
   int N;
   cin>>N;
   for(int X = 0; X<N;X++){
       int N;
       cin>>N;

       int test_case[N];
       //cin>>test_case;
       
       for(int tc = 0; tc<N; tc++){
           cin>>test_case[tc];
       }
       if(test_case[0] != test_case[1] && test_case[1]==test_case[2]){
           cout<<1<<"\n";
       }
       else{
           int x = test_case[0];
           for(int i =1; i<N; i++){
               if(x != test_case[i]){
                   cout<<i+1<<"\n";
                   break;
               }
           }
       }
   }

}