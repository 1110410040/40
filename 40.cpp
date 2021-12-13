#include<iostream>
#include<cmath>

using namespace std;

int main(){
	double BMI, hight, kg;
	cout << "請輸入身高:";
	cin >> hight;
	cout << "請輸入體重:";
	cin >> kg;
	
	hight = hight / 100;
	BMI = kg / pow(hight,2);
	
	if (BMI < 18.5) {
		cout << "體重過輕";
	}
	
	if (BMI >= 18.5 && BMI < 24) {
        cout << "標準體重";
	}
	
	if (BMI >= 24 && BMI < 27) {
        cout << "體重過重";
    } 
	if (BMI >27) {
        cout << "過度肥胖";
    } 
	return 0;
    
}


