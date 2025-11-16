#include<bits/stdc++.h>
using namespace std;
int main(){
    int g,c,l;
    cin>>g>>c>>l;
    int mi=min({g,c,l});
    int ma=max({g,c,l});
    int mid=(g+c+l)-(mi+ma);
    if((ma-mi)>=10) cout<<"check again"<<endl;
    else cout<<"final "<<mid<<endl;
}