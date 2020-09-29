#include <iostream>
#include <string>
using namespace std;

int main() {
    int a = 0, b = 0, c = 0, d = 0,e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0;
    cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k;
    int arr[11] = {a,b,c,d,e,f,g,h,i,j,k};
    for(int i=0; i<11; i++){
        if(arr[i] % 2 == 0){
            cout << arr[i] << endl;
        }
    }
    return 0;
}
