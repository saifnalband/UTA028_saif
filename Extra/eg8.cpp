 #include<iostream>
using namespace std;
class Tracker
{
	int PersonId;
	static int tobjects;
	public:
    int step_count;
	int stair_count;
	Tracker(int pid, int step=0, int stair=0)
	{
		PersonId=pid;
		step_count=step;
		stair_count=stair;
		tobjects++;
	}
	int incrementCount();
	//friend void convertStep(Tracker &t);	
	void displayCount()
	{
		cout<<"Total Step_count after conversion for Person" <<PersonId << " is: "<<step_count<<endl;
	}
	static void display()
	{
		cout<<"\n Total Number of objects: "<<tobjects<<endl;
	}
};
int Tracker::tobjects=0;
int Tracker::incrementCount()
	{
		int step_inc, stair_inc;
		cout<<"For Person"<<PersonId<<"\n";
		cout<<"Initial values are:\tStepCount: "<<step_count<<"\t Staircount: "<<stair_count<<endl;
		cout<<"Enter the increment value for step count: ";
		cin>>step_inc;
		cout<<"\n Enter the increment value for stair count: ";
		cin>>stair_inc;
		step_count+=step_inc;
		stair_count+=stair_inc;	
	}
void convertStep(Tracker &t)
{
/* 	int c;
	c=2*t.stair_count;
	t.step_count+=c; */
    t.stair_count
    
}
int main()
{
	Tracker c[3]={{1,10,20},{2,50,30},{3,100,40}};
	for(int i=0;i<2;i++)
	{
	c[i].incrementCount();
	convertStep(c[i]);
	c[i].displayCount();
	}
	Tracker::display();
}
