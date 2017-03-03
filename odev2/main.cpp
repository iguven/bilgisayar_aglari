#include <iostream>
using namespace std;

int main() {
	
	int bandwidth[3]={8,100,1000};
	int rtt[3]={100,500,650};

	int veriboyutu;
	float throughput[3],transfer_zamani[3];

	cout<<"\n\nVeri boyutunu giriniz(Mb): ";
	cin>>veriboyutu;
	
	for(int i=0;i<3;i++) {	
		transfer_zamani[i]= (float)rtt[i] + 1 / ( (float)veriboyutu * (float)bandwidth[i] );
		throughput[i] = (float)veriboyutu / transfer_zamani[i];
	}
	
	cout<<"\n\nBandwidth:    8 Mbit, Rtt: 100 msn"<<" Throughtput Degeri: "<<throughput[0]<<" Mbps"<<endl;
	cout<<"Bandwidth:  100 Mbit, Rtt: 500 msn"<<" Throughtput Degeri: "<<throughput[1]<<" Mbps"<<endl;
	cout<<"Bandwidth: 1000 Mbit, Rtt: 650 msn"<<" Throughtput Degeri: "<<throughput[2]<<" Mbps"<<endl;
	
	return 0;
}
