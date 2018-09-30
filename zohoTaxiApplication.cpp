#include <iostream.h>
#include <conio.h>
#include <math.h>
int numberofcustomer[4]={0};
int taxiride[4]={0};
class taxi{
	int taxi_earning;
	int isfree;
public:
	taxi(){
		isfree=1;
		taxi_earning=0;
	}
	int free(){
		return isfree;
	}
	void allocate(){
		isfree=0;
	}
	void deallocate(){
		isfree=1;
	}
}car[4];
class customer{
	int cust_id;
	char cust_statpoint;
	char cust_endpoint;
	int cust_stattime;
	int km;
	int travel_time;
	public:
		void input(){
			cout<<"Customer Id :";
			cin>>cust_id;
			cout<<"\nStarting point :";
			cin>>cust_statpoint;
			cout<<"\nEnd point :";
			cin>>cust_endpoint;
			cout<<"\nPickup Time :";
			cin>>cust_stattime;
			int temp = abs((int)cust_endpoint - (int)cust_statpoint);
			km = temp*15;
			travel_time = temp*60;
			//cout<<travel_time;
		}
		void display(int ta){
			cout<<"Taxi is allocated!!\n";
			cout<<"Taxi allocated to you is : "<<ta<<"\n";
		}
		void print(){
			cout<<cust_id<<"\t"<<cust_statpoint<<"\t"<<cust_endpoint<<"\t"<<cust_stattime;
		}
		int time(){
			return travel_time;
		}
		void change(){
			this->travel_time=0;
		}
		void changegre(int t){
				this->travel_time = this->travel_time-t;
		}

}cus[4][10];
int main() {
		clrscr();
		int t;
		cout<<"\t\t\tCall Taxi Booking\n\n";
		while(t!=3){
			cout<<"1.Booking\n2.Details\n3.Exit\n";
			cin>>t;
			switch(t){
				case 1:
						if(car[0].free()){
								cus[0][numberofcustomer[0]].input();
							//	cout<<"###"<<cus[0][numberofcustomer[0]].time()<<"\n";
								cus[0][numberofcustomer[0]].display(1);
								taxiride[0]=1;
								car[0].allocate();
								for(int i=0;i<4;i++){
									if(i==0){
										continue;
									}
											if((cus[i][numberofcustomer[i]-1].time()-cus[0][numberofcustomer[0]].time())<=0){
													cus[i][numberofcustomer[i]-1].change();
										
													car[i].deallocate();
											}else if(cus[i][numberofcustomer[i]-1].time()>cus[0][numberofcustomer[0]].time()){
													cus[i][numberofcustomer[i]-1].changegre(cus[0][numberofcustomer[0]].time());
											}
										cout<<"!!!!!"<<cus[i][numberofcustomer[i]].time()<<"!!!!!"<<cus[0][numberofcustomer[0]-1].time()<<"\n";		
								}
								numberofcustomer[0]++;
						}else if(car[1].free()){
							
								cus[1][numberofcustomer[1]].input();
								//cout<<"####"<<cus[0][numberofcustomer[0]-1].time()<<"\n";
								cus[1][numberofcustomer[1]].display(2);
								taxiride[1]=1;
								car[1].allocate();
								//cout<<"@@@@@"<<cus[1][numberofcustomer[1]].time()<<"@@@@@"<<cus[0][numberofcustomer[0]-1].time()<<"\n";
								//cus[1][numberofcustomer[1]].compare(cus[0][numberofcustomer[0]-1]);
								for(int i=0;i<4;i++){
									if(i==1){
										continue;
									}
											if((cus[i][numberofcustomer[i]-1].time()-cus[1][numberofcustomer[1]].time())<=0){
													cus[i][numberofcustomer[i]-1].change();
										//	cout<<"!!!!!"<<cus[1][numberofcustomer[1]].time()<<"!!!!!"<<cus[0][numberofcustomer[0]-1].time()<<"\n";
													car[i].deallocate();
											}else if(cus[i][numberofcustomer[i]-1].time()>cus[1][numberofcustomer[1]].time()){
													cus[i][numberofcustomer[i]-1].changegre(cus[1][numberofcustomer[1]].time());
											}
								
								cout<<"!!!!!"<<cus[i][numberofcustomer[i]].time()<<"!!!!!"<<cus[1][numberofcustomer[1]-1].time()<<"\n";
}
								numberofcustomer[1]++;

						}else if(car[2].free()){
							
								cus[2][numberofcustomer[2]].input();
								cus[2][numberofcustomer[2]].display(3);
								taxiride[2]=1;
								car[2].allocate();
								for(int i=0;i<4;i++){
									if(i==2){
										continue;
									}
											if((cus[i][numberofcustomer[i]-1].time()-cus[2][numberofcustomer[2]].time())<=0){
													cus[i][numberofcustomer[i]-1].change();
										//	cout<<"!!!!!"<<cus[1][numberofcustomer[1]].time()<<"!!!!!"<<cus[0][numberofcustomer[0]-1].time()<<"\n";
													car[i].deallocate();
											}else if(cus[i][numberofcustomer[i]-1].time()>cus[2][numberofcustomer[2]].time()){
													cus[i][numberofcustomer[i]-1].changegre(cus[2][numberofcustomer[2]].time());
											}
												cout<<"!!!!!"<<cus[i][numberofcustomer[i]].time()<<"!!!!!"<<cus[2][numberofcustomer[2]-1].time()<<"\n";
								}
								numberofcustomer[2]++;
						}else if(car[3].free()){

								cus[3][numberofcustomer[3]].input();
								cus[3][numberofcustomer[3]].display(4);
								taxiride[3]=1;
								car[3].allocate();
								for(int i=0;i<4;i++){
									if(i==3){
										continue;
									}
											if((cus[i][numberofcustomer[i]-1].time()-cus[3][numberofcustomer[3]].time())<=0){
													cus[i][numberofcustomer[i]-1].change();
										//	cout<<"!!!!!"<<cus[1][numberofcustomer[1]].time()<<"!!!!!"<<cus[0][numberofcustomer[0]-1].time()<<"\n";
													car[i].deallocate();
											}else if(cus[i][numberofcustomer[i]-1].time()>cus[3][numberofcustomer[3]].time()){
													cus[i][numberofcustomer[i]-1].changegre(cus[3][numberofcustomer[3]].time());
											}
												cout<<"!!!!!"<<cus[i][numberofcustomer[i]].time()<<"!!!!!"<<cus[3][numberofcustomer[3]-1].time()<<"\n";
								}
								numberofcustomer[3]++;
						}else{
								cout<<"All Cars Are currently Busy";
						}

						break;
				case 2:
						cout<<"Customer_Id  Starting_point  Ending_point  Pickup_time\n";
						for(int i=0;i<4;i++){
							if(taxiride[i]==1){
									cout<<"Taxi : "<<i+1<<"\n";
									for(int j=0;j<numberofcustomer[i];j++)
									{
											cus[i][j].print();
											cout<<"\n\n";
									}

							}else{
								break;
							}
						}

						break;
			}
			cout<<"\nwant to exit(press 3 else press 1)\n";
			cin>>t;
		}
		return 0;
}