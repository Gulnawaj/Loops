#include<iostream>
using namespace std;
//total moves of bishop
int bishopMoves(int a , int b ){
    int count = 0;
    count += min(8-a , 8-b);
    count += min(8-a , b-1);
    count += min(a-1 , b-1);
    count += min(a-1 , 8-b);
    return count ;
}
int main(){
    int a , b;
    cout<<"position of the bishop is ";
    cin>>a>>b;
    int x = bishopMoves(a,b);
    cout<<"total moves of the given position is "<<x;
    
}