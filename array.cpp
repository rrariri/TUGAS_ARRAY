#include <iostream> 
using namespace std; 
 
 
int main(){ 
 
//KAMUS 
 	 
 char huruf[10];  
 char b;  
 int x=0, sum=0; 

//ALGORITMA 
 	 
 while(x<= 3){ 

 	cout<<"+---+" << endl; 
 	cout<<"> ";cin>>huruf[x];   
 	x++; 
 	} 
 	 
 	for(int x=0; x<=3; x++ ){ 
 	cout<<"huruf masukan ke-"<<x<<": "<<huruf[x]<< endl; 
 	} 
 	 
 	cout<<"Masukan Huruf"; 
 	cin>>b; 
 	 
 	for(int x=0; x<=3; x++ ){ 
 	if(b == huruf[x]){int v=1; sum+=v; } 
 	}  	 
 	 
 	cout<<"jumlah huruf "<<b<<" : sebanyak: "<<sum; 
 	 
} 
