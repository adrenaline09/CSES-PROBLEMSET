/*#include <iostream>

using namespace std;

int addition( int a1,int a2){
    return a1+a2;
}
int main(){
    int z;
    z = addition(11,22);
    cout<<z;
    return 0;
}*/

#include <iostream>
using namespace std;

int main() {
	string word = "abcd";
	string x = "a";
	if(word.find(x) != string::npos){
	    cout<<"found";
}
	return 0;
}