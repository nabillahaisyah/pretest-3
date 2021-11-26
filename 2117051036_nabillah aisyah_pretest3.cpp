#include <iostream>
#include <cmath>
using namespace std;
int main (){
	
	/*  Nama  : Nabillah Aisyah
	    NPM   : 2117051036
	   Kelas  : D
   */
   
   // Deklarasi Variabel
   double beratbadan;
   double tinggibadan;
   double BMI;
   
   cout <<"----------Program Menghitung BMI----------"<<endl;
   
   // input //
   cout << "Silakan Isi Data di bawah ini!"<<endl;
   cout << "Berat Badan (kg)\t :";
   cin >> beratbadan;
   cout << "Tinggi Badan (m)\t :";
   cin >> tinggibadan;
   
   // output //
   cout <<endl;
   cout << "Berikut Hasil BMI Anda!"<<endl;
   BMI = beratbadan/(tinggibadan*tinggibadan);
   cout <<"BMI\t\t\t : "<<BMI<<endl;
   cout <<"Weight Status\t\t :";
   
   if (BMI<18.5){
   	cout <<"Underweight"<<endl;
   }
   else if (BMI>=18.5 && BMI<=24.9){
   	cout <<"Normal Weight"<<endl;
   }
   else if (BMI>=25.0 && BMI<=29.9){
   	cout <<"Overweight"<<endl;
   }
   else if (BMI>=30.0 && BMI<=34.9){
   	cout <<"Obesity class 1"<<endl;
   }
   else if (BMI>=35.0 && BMI<=39.9){
   	cout <<"Obesity class 2"<<endl;
   }
   else if (BMI>40.0){
   	cout <<"Obesity class 3"<<endl;
   }
   
   return 0;
}
