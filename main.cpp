#include <iostream>
using namespace std;
int getFact(int n){
    if(n<=1){
        return n;
    }
    return n*getFact(n-1);
    

}

int main(){
    int n;
    cout<<"Enter the input Number"<<endl;
    cin>>n;

    cout<<"The Factorial of the number "<<n<<" is "<<getFact(n)<<endl;



return 0;
}