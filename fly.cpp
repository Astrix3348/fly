#include<iostream>
#include<numeric>
using namespace std;

int gcd(int n, int k){
	int result = min(n, k);

	while(result>0){
		if(n%result==0 and k%result==0){
			break;
		}
		result--;
	}
	return result;
}

bool isVisit(int n){
	for(int k=2; k<n; k++){
       if(gcd(n,k)==1){
       	  return false;
       }
	}
	return true;
}

int main(){
    int n;
    cin >> n;

    if(isVisit(n)){
    	cout << "YES" << endl;
    }
    else{
    	cout << "NO" << endl;
    }



	return 0;
}