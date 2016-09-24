#include<bits/stdc++.h>
using namespace std;
class invoice{
	private:
		int id;
		string product;
		long long int price,total;
	public:
		void addInvoice(int i,string p,long long int pr,int count){
			id=i;
			product=p;
			price=pr;
			total=pr*count;
		}
		void show(){
			cout<<id<<"\t"<<product<<"\t"<<total/price<<"\t"<<total<<endl;
		}
};
class customer{
	private:
		int id;
		string name;
		long long int mobile;
		int invoiceIndex;
		string mail;
		invoice inv[100];
	public:
		customer(){
			invoiceIndex=0;
		}
		void addCustomer(int i,string n,long long int m,string ma){
			id=i;
			name=n;
			mobile=m;
			mail=ma;
		}
		void show(){
			cout<<id<<"\t"<<name<<"\t"<<mobile<<"\t"<<mail<<"\t"<<invoiceIndex<<endl;
		}
		void addInvoice(){
			int id;
			string product;
			long long int price,count;
			cout<<"______________________Add an Invoice______________________"<<endl<<endl;
			cout<<"Enter invoice id:";
			cin>>id;
			cout<<"Enter product name:";
			cin>>product;
			cout<<"Enter price:";
			cin>>price;
			cout<<"Enter no of such items:";
			cin>>count;
			inv[invoiceIndex++].addInvoice(id,product,price,count);
		}
		string getName(){
			return name;
		}
		void showInvoices(){
			cout<<"Id\tProduct\tCount\tTotal"<<endl<<endl;
			for(int i=0;i<invoiceIndex;i++){
				inv[i].show();
			}
		}
};
int main(){
	customer cus[100];
	int cIndex=0;
	while(true){
		int choice;
		cout<<endl<<endl;
		cout<<"______________________Welcome to Bharath's CRM______________________"<<endl;
		cout<<"\t\t\t\t1.Add a customer"<<endl;
		cout<<"\t\t\t\t2.Add an invoice"<<endl;
		cout<<"\t\t\t\t3.List all invoices"<<endl;
		cout<<"\t\t\t\t4.Exit"<<endl;
		cout<<"Enter your choice:";
		cin>>choice;
		switch(choice){
			case 1:
				{
					int id;
					string name;
					long long int mobile;
					string mail;
					cout<<"______________________Add a customer______________________"<<endl<<endl;
					cout<<"Enter customer id:";
					cin>>id;
					cout<<"Enter customer name:";
					cin>>name;
					cout<<"Enter customer mobile:";
					cin>>mobile;
					cout<<"Enter mail id:";
					cin>>mail;
					cus[cIndex++].addCustomer(id,name,mobile,mail);
				}
				break;
			case 2:
				{
					while(true)
					{
						int cChoice;
						cout<<"______________________Add an invoice______________________"<<endl;
						cout<<"Id\tName\tMobile\tMail\tInvoices"<<endl<<endl;
						for(int i=0;i<cIndex;i++){
							cus[i].show();
						}
						cout<<"Choose a customer:";
						cin>>cChoice;
						if(cChoice==-1) break;
						cus[cChoice-1].addInvoice();
					}
				}
				break;
			case 3:
				{
					for(int i=0;i<cIndex;i++){
						cout<<"______________________Invoices for "<<cus[i].getName()<<"______________________"<<endl;
						cus[i].showInvoices();
					}
				}
				break;
			case 4:
				exit(1);
				break;
			deafult:
				{
					cout<<"Enter a valid choice"<<endl;
				}
				continue;
		}
	}
	return 0;
}
