#include <iostream>
#include<bits/stdc++.h>
using namespace std;

using namespace std;

int main()
{
    
    //Declaring a map of pair(string) and a vector;
    // map<pair<string,string>,vector<int> > m;
    // int n=2,i,j;
    // set<int> s1 = {1,2,3};
    // set<int> s2 = {1,2,2};
    
    // cout<<(s1<s2);
    
    // for(i=0;i<n;i++){
    //     string fn,ln;
    //     int ct; //Size of vector
    //     cin>>fn>>ln>>ct; //Accepting two strings as input
        
    //     for(j=0;j<ct;j++){ // Pushing elements of vector
    //         int x;
    //         cin>>x;
    //         m[{fn,ln}].push_back(x); //Pushing elements for a particular pair{fn,ln}
    //     }
    // }
    
    // for(auto pr: m){
    //     auto full_name = pr.first; //fn1 contains the pair{fn,ln}
    //     auto list = pr.second; //fn2 contains the vector
        
    //     cout<<full_name.first<<" "<<full_name.second<<endl;
    //     cout<<"Size of list: "<<list.size()<<endl;
        
    //     for(auto key: list){
    //         cout<<key<<" "; //Prints the elements pf vector.
    //     }
    //     cout<<endl;
    // }
    
    set<pair<int,string> > marks_set;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int marks;
        string name;
        cin>>name>>marks;
        marks_set.insert({marks,name});
    }
    
    cout << "Marks \t Name: \n";
    
    for(auto itr: marks_set){
        cout<<itr.first<<"\t"<<itr.second<<endl;
    }
    
    auto it1 = (--marks_set.end());
    auto it2 = it1;
    it2--;
    
    while(it1!=marks_set.begin()){
        m1 = it1->first;
        m2=it2->first;
        s1 = it1->second;
        s2 = it2->second;
        
        
        
        if(it1->first>it2->first){
            cout<<it1->second<<" "<<it1->first<<endl;
        }
        else if(it1->first==it2->first){
            if(it1->second<it2->second){
                cout<<it1->second
            }
        }
    }
    
    
}
