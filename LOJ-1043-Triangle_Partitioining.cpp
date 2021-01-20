#include <iostream>
#include <math.h>
#define scan(x) cin>>x;
#define println(x) cout<<x<<"\n";

#include <iomanip>

using namespace std;

int main() {

    double t,ab,ac,bc,r,ad;
    int c = 0;
    cin>>t;

    while(t--){
        cin>>ab;
        cin>>ac;
        cin>>bc;

        cin>>r;

        c++;

        r = r/(r+1);
        ad = ab*sqrt(r);

        cout<<"Case "<<setprecision(9)<<c<<": "<<ad<<"\n";
    }
    return 0;
}