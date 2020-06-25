#include<iostream>
using namespace std;
int main()
{
    int g,h=0,l=0,a,b;
    int A[1000];
    cin>>g;
    for(int i=0;i<g;i++)
        cin>>A[i];

    a=A[0];
    b=A[0];
    for(int i=1;i<g;i++){
       if(b>A[i]){
        b=A[i];
        l=l+1;
       }

     if(a<A[i]){
       a=A[i];
      h=h+1;}
    }

cout<<h<<" "<<l;
}

