#include<iostream>
#include<cmath>

using namespace std;

int main(){
	double BMI, hight, kg;
	cout << "�п�J����:";
	cin >> hight;
	cout << "�п�J�魫:";
	cin >> kg;
	
	hight = hight / 100;
	BMI = kg / pow(hight,2);
	
	if (BMI < 18.5) {
		cout << "�魫�L��";
	}
	
	if (BMI >= 18.5 && BMI < 24) {
        cout << "�з��魫";
	}
	
	if (BMI >= 24 && BMI < 27) {
        cout << "�魫�L��";
    } 
	if (BMI >27) {
        cout << "�L�תέD";
    } 
	return 0;
    
}


