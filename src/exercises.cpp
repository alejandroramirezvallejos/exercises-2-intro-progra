
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
  // TODO: YOUR CODE HERE
}

void exercise_2(string s1) {
  // TODO: YOUR CODE HERE
}

void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
}

void exercise_4(int n) {
  int factorial = 1;
    cin>>n;
    if (n==0){
      cout<<"1"<<endl;
    }
    else if (n>=1){
        if (n<17){
            for(int i=1; i<=n; i++){
                factorial=factorial*i;
            }
            cout<<factorial<<endl;
        }
        else{
            cout<<"El numero es muy grande. Intentelo de nuevo"<<endl;
        }
    }
    else{
        cout<<"El numero es negativo. Intentelo de nuevo"<<endl;
    }
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {
    int suma=0;
    int r;
    if (n>=0){
        while(n!=0){
          suma = suma + n%10;
          n = n/10;
        }
      r = suma;
    }
    else{
      r = 0;
    }
  return r;
}

void exercise_7(int n) {
  double suma=0;
  if (n==0){
    cout<<"0"<<endl;
  }
  else{
    for (int i=1; i<=n; i++){
        suma = suma + (pow(-1, i+1))/i;
    }
    cout<<suma<<endl;
  }
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int n, int n2) {
   while (n2 != 0) {
        int x = n2;
        n2 = n%n2;
        n = x;
    }
  return n;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
    int suma= 0;
    for (int i=1; i<=n; i++){
        suma = suma + pow(i, k);
    }
  return suma;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  int i=0;
  while (divident >= divider){
    divident = divident - divider;
    i++;
  }
  cout<<i<<" "<<divident<<endl;
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}