#include<iostream>
#include<string>
using namespace std;
int main(){
	
	cout<<"\n\n\t\t_____________________________WELCOME TO QUIZ GAME__________________________________\n\n\n\n";
	
	int a;
	int b;
	int c;
	string aaa;
	int inc=0;
	int z;
	int e;
	int f;
	cout<<" Press 1 to view Rules of Game or Press 2 to go Directly to 1st Level : ";
	cin>>a;
	
	if(a==1){
		cout<<"\n\n 1.\tIn this Game you have 3 Levels.\n\n 2.\t10 General Knowledge Questions at each Level.\n\n 3.\tYou have to Answer 50 %  Correct Answers to go to Next Level.\n\n 4.\tGive Answers in Lower Case";
		cout<<"\n\n Press 2 to Start : ";
		
		
	    cin>>b;
	}
	
	
	if(a==2||b==2){
		cout<<"\n\n\n\t\t____________ WELCOME TO 1ST LEVEL __________\n\n\n";
		
		cout<<" Press 0 to View Questions : ";
		cin>>c;
		if(c==0){
		
		cout<<endl<<endl;
		
		cout<<" QUESTION NO 1 : Pakistan Cricket Team current all formats Captain is ______.\n\n";
		cout<<" A. Shaheen Shah Afradi.\n B. Fakher Zaman\n C. Baber Azam\n D. Shahdab Khan\n\n";
		cout<<" Answer : ";
		cin>>aaa;
		
		if(aaa=="c"||aaa=="C"){
			cout<<"\n Correct Answer\n\n\n";
			inc++;
		}
		else{
			cout<<"\n Incorret Answer\n\n\n";
		}
		
		cout<<" QUESTION NO 2 : Longest River of Pakistan is ______.\n\n";
		cout<<" A. River Indus\n B. River Jhelum\n C. River Ravi\n D. River Chenab\n\n";
		cout<<" Answer : ";
		cin>>aaa;
		
		if(aaa=="a"||aaa=="A"){
			cout<<"\n Correct Answer\n\n\n";
			inc++;
		}
		
		else{
			cout<<"\n Incorret Answer\n\n\n";
		}
		
		cout<<" QUESTION NO 3 : Printf() is used in which Language.\n\n";
		cout<<" A. Python\n B. C++\n C. Java\n D. C\n\n";
		cout<<" Answer : ";
		cin>>aaa;
		
		if(aaa=="D"||aaa=="d"){
			cout<<"\n Correct Answer\n\n\n";
			inc++;
		}
		
		else{
			cout<<"\n Incorret Answer\n\n\n";
		}
		
		
		cout<<" QUESTION NO 4 : National Animal of Pakistan is ______.\n\n";
		cout<<" A. Elephant\n B. Markhor\n C. Lion\n D. Deer\n\n";
		cout<<" Answer : ";
		cin>>aaa;
		
		if(aaa=="b"||aaa=="B"){
			cout<<"\n Correct Answer\n\n\n";
			inc++;
		}
		
		else{
			cout<<"\n Incorret Answer\n\n\n";
		}
		
		cout<<" QUESTION NO 5 : Which Country is most Populated.\n\n";
		cout<<" A. China\n B. India\n C. Russia\n D. Malaysia\n\n";
		cout<<" Answer : ";
		cin>>aaa;
		
		if(aaa=="a"||aaa=="A"){
			cout<<"\n Correct Answer\n\n\n";
			inc++;
		}
		
		else{
			cout<<"\n Incorret Answer\n\n\n";
		}
		
		
		cout<<" QUESTION NO 6 : Current ODI World Cup Champion is ______.\n\n";
		cout<<" A. Pakistan\n B. SouthAfrica\n C. England\n D. NewZealand\n\n";
		cout<<" Answer : ";
		cin>>aaa;
		
		if(aaa=="C"||aaa=="c"){
			cout<<"\n Correct Answer\n\n\n";
			inc++;
		}
		
		else{
			cout<<"\n Incorret Answer\n\n\n";
		}
		
		cout<<" QUESTION NO 7 : First Prime Minister of Pakistan was ______.\n\n";
		cout<<" A. QUAID-E-AZAM\n B. Zia-Ul-Haq\n C. Liaqat Ali Khan\n D. None of these\n\n";
		cout<<" Answer : ";
		cin>>aaa;
		
		if(aaa=="C"||aaa=="c"){
			cout<<"\n Correct Answer\n\n\n";
			inc++;
		}
		
		else{
			cout<<"\n Incorret Answer\n\n\n";
		}
		
		cout<<" QUESTION NO 8 : Health Card was Project of which Prime Minister.\n\n";
		cout<<" A. Nawaz Sharif\n B. Shebaz Sharif\n C. Asif Ali Zardari\n D. Imran Khan\n\n";
		cout<<" Answer : ";
		cin>>aaa;
		
		if(aaa=="d"||aaa=="D"){
			cout<<"\n Correct Answer\n\n\n";
			inc++;
		}
		
		else{
			cout<<"\n Incorret Answer\n\n\n";
		}
		
		cout<<" QUESTION NO 9 : Smallest Contnent in the World in terms of Area is _______.\n\n";
		cout<<" A. Asia\n B. Australia\n C. Europe\n D. North Amercia\n\n";
		cout<<" Answer : ";
		cin>>aaa;
		
		if(aaa=="b"||aaa=="B"){
			cout<<"\n Correct Answer\n\n\n";
			inc++;
		}
		
		else{
			cout<<"\n Incorret Answer\n\n\n";
		}
		
			cout<<" QUESTION NO 10 : Imran Khan was Elected as a Prime Minister of Pakistan in ________.\n\n";
		cout<<" A. August, 2018\n B. June, 2018\n C. May, 2018\n D. September, 2018\n\n";
		cout<<" Answer : ";
		cin>>aaa;
		
		if(aaa=="a"||aaa=="A"){
			cout<<"\n Correct Answer\n\n\n";
			inc++;
		}
		
		else{
			cout<<"\n Incorret Answer\n\n\n";
		}
		z=inc*100/10;
		
		if(inc>=5){
			cout<<"\n     ***** CONGRAGULATIONS! *****\n\n Your Correct Answers are "<<inc<<" and your percentage is "<<z<<" %."<<"\n\n Now Press 3 to move to Next Level : ";
		}
		
		else{
			cout<<"\n .......OOPS! (-_-).......\n\n\n Failed to Pass 1st Level\n\n Your Correct Answers are "<<inc<<" and your percentage is "<<z<<"\n\n _______T H A N K S for Playing_______\n\n";
		}
	}
	cin>>e;
	if(inc>=5&&e==3){
		cout<<"\n\n\n\t\t____________ WELCOME TO 2ND LEVEL __________\n\n\n";
		
		cout<<" Press 0 to View Questions : ";
		cin>>c;
		if(c==0){
	
	cout<<"\ncon";
	
	
	
	}















}

}


}