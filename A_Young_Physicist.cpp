#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N ; 
    cin>>N;

    

    int sumx = 0;
    int sumy = 0;
    int sumz = 0;

    vector<vector<int>> vect; 
	for(int i=0;i<N;++i) { 
		vector<int> row; 
		for(int j=0;j<3;++j)
        { 
			int value; 
			cin >> value;
            //sum+=value; 
			row.push_back(value); 
		}
        sumx+=row[0];
        sumy+=row[1];
        sumz+=row[2];

		vect.push_back(row);
    } 


    if(sumx ==0 && sumy ==0 && sumz==0)
     {
         cout<<"YES"<<"\n";
     }
     else
     {
         cout<<"NO"<<"\n";
     }
}