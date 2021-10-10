#include<iostream>
#include<vector>
using namespace std;

void disVector(vector<int> A){
    vector<int>::iterator it;
    for(it=A.begin();it!=A.end();it++){
        cout<<*it<<" ";
        cout<<"\n";
    }
}
int main(){
    vector<int> A(4,0);
    for(int i=0;i<4;i++){
        cin>>A[i];
    }
    disVector(A);

    cout<<"Adding 5 in the end\n";
    A.push_back(5);
    disVector(A);

    cout<<"Size:"<<A.size()<<"\n";

 //Deleting last element from the vector
 cout<<"Deleting last element\n";
 A.pop_back();
 disVector(A);
 cout<<"Size:"<<A.size()<<"\n";

 //Inserting 8 at index 2
 cout<<"inserting 8 at index 2\n";
 A.insert(A.begin()+2,8);
 disVector(A);

 //Deleting element at index 3
 cout<<"Deleting element at index 3\n";
 A.erase(A.begin()+3);
 disVector(A);

 return 0;
}