#include <iostream>
#include <string>
using namespace std;

int main() {
    int words=0;
    string arr[]= {"test","fight","win","tigers","this","telephone","history","shock","eat","fire","antidisestablishmentarianism"};
    for(int i=0; i<11; i++){
        if(arr[i].size() == 4){
            words++;
        }
    }
    cout<<words;
	return 0;
}
