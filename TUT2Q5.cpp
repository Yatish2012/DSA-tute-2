//(a) diagonal metrix

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of non zero elements  : ";
    cin>>n;
    int arr[n] = {1,2,3,4};
    int index=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<arr[index];
                index++;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
}

//(b)->Tri-diagonal Matrix
#include <iostream>
using namespace std;

int main() {
    cout << "Enter size of array: ";
    int n;
    cin >> n;

    int nonZero = 3 * n - 2; 
    int arr[100];
    if (nonZero > 100) {
        cout << "Array size too big!" << endl;
        return 0;
    }

    cout << "Enter " << nonZero << " non-zero elements: ";
    for (int i = 0; i < nonZero; i++) {
        cin >> arr[i];
    }

    int index = 0;
    cout << "\nGenerated Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i == j + 1 || i == j - 1) {
                cout << arr[index] << " ";
                index++;
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

//(c)->lower triangle matrix 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int nonZero = (n * (n + 1)) / 2; 
    int *arr = new int[nonZero];

    for (int i = 0; i < nonZero; i++) {
        cin >> arr[i];
    }

    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) {
                cout << arr[index] << " ";
                index++;
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }

    delete[] arr; 
    return 0;
}



//(d)-> Upper triangle matrix
//(c)->lower triangle matrix 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nonZero = (n*(n+1))/2;
    int arr[nonZero];
    for(int i=0;i<nonZero;i++){ 
        cin>>arr[i];
    }
    int index=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
                cout<<arr[index];
                index++; 
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
}

//(e)-> Symmetric Matrix
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int unique = (n * (n + 1)) / 2; 

    int *arr = new int[unique]; 
    cout << "Enter upper or lower triangle elements: ";
    for (int i = 0; i < unique; i++) {
        cin >> arr[i];
    }

    int **crr = new int*[n];
    for (int i = 0; i < n; i++) {
        crr[i] = new int[n];
    }

    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            crr[i][j] = arr[index];
            crr[j][i] = arr[index]; 
            index++;
        }
    }

    cout << "\nSymmetric Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << crr[i][j] << " ";
        }
        cout << endl;
    }

    
    delete[] arr;
    for (int i = 0; i < n; i++) {
        delete[] crr[i];
    }
    delete[] crr;

    return 0;
}
