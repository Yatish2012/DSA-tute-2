//4(a)
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "World";
    cout << "Concatenated: " << s1 + s2;
    return 0;
}

//4(b)
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "hello world";

    int n = str.size();
    int i = 0;
    while(i<=n/2){
        swap(str[i],str[n-i-1]);
        i++;
    }

//4(c)
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello World";
    string result = "";
    for (char c : s) {
        if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
              c=='A'||c=='E'||c=='I'||c=='O'||c=='U'))
            result += c;
    }
    cout << "Without vowels: " << result;
    return 0;
}

//4(d)
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter string ";

    getline(cin , str);
    int n=str.size();

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);
            }
        }
    }
    cout<<str;

}
//4(e)
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter string ";

    getline(cin , str);
    int n=str.size();

    for(int i=0;i<n;i++){ 
        if(str[i]>=65 && str[i]<=90){
            str[i]+=32;
        }
    }
    cout<<str;

}
