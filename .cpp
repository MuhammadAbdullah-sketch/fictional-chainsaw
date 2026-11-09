#include <iostream>
using namespace std;

 float cal(int v, int d){
    return (v * d) / 60;
 }
int main(){
    int v, d;

    cout << "Enter the videos (v) and durations (d): ";
    cin >> v >> d;
    cout << cal(v, d) << endl;
    return 0;

}