#include <iostream>
#include <string>
#include <map>

using namespace std;

bool anagramChecker(string word1, string word2){
    map<char, int>count_1;
    map<char, int>count_2;

    for(const auto ch: word1){
        count_1[ch]++;
    }

    for(const auto ch : word2){
        count_2[ch]++;
    }

    return count_1 == count_2;

}

int main(){
    
    string w1 = "listen";
    string w2 = "silent";

    bool res = anagramChecker(w1, w2);

    if(res == true){
        cout<<"they are anograms"<<endl;
    }else{
        cout<<"No they are not"<<endl;
    }

    return 0;
}