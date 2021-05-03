#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> arr = {"mercury", "venus", "earth", "mars","jupitor","neptune","uranus"};
    vector<string>::iterator falcon = arr.begin();
    vector<string>::iterator milano = arr.begin();

    cout<<"Ship currently at "<<*falcon<<endl;
    advance(falcon,3);
    cout<<"Ship currently at "<<*falcon<<endl;
    advance(falcon,-1);
    cout<<"Ship currently at "<<*falcon<<endl;

    cout<<"The distance between ships is: "<<distance(milano,falcon)<<" planets"<<endl;

    cout<<endl;

    vector<string>::iterator escape_pod1 = next(falcon,1);
    vector<string>::iterator escape_pod2 = prev(falcon,distance(milano,falcon));
    
    cout<<"Falcon is at "<<*falcon<<endl;
    cout<<"Escaped pod 1 is at "<<*escape_pod1<<endl;
    cout<<"Escaped pod 2 is at "<<*escape_pod2<<endl;

    return 0;
}