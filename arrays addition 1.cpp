#include <iostream>
 using namespace std;
 int main(){
    int i,j;
   int a[3][2]={{20,2}, {30,2}, {40,2}};
   int b[3][2]={{20,2}, {30,2}, {40,2}};
   int c[3][2];
 for(i=0; i<3; ++i){
    for(j=0; i<2; ++j){
        c[i][j]=a[i][j]+b[i][j];

    }
 }
  for(i=0; i<3; ++i){
    for(j=0; i<2; ++j){
        cout<<c[i][j]<<" ";
        
    }cout<<endl;
 }
 }
