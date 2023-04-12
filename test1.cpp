#include<iostream>
#include <string>
using namespace std;
int main(){
	       const int balance=1000;
	       int select;
	       string old_pin;
	       string letter;
	         start:
	       cout<<"1.reset pin\n";
	       cout<<"2.check balance\n";
	       cout<<"3.send money\n";
	       cout<<"4.Exit\n";
	       cout<<"select Your choose from the above options: ";
		   cin>>select;  
		   
		switch (select){
			 //reseting pin//
			 case 1:
			 	restart:
			 		
			 //entering default momo pin//
			 	cout<<"Enter old momo pin: ";
			 	cin>>old_pin;	 	
			 	if(old_pin=="0000"){
			 		back:
			 		string new_pin;
			 		string com_pin;
			 		
			 		//entering new momo pin//
			 		  cout<<"Enter New PIN: ";
			 		  cin>>new_pin; 
			 		   
			 		 // checking if the new pin is the same as old pin 
			 		   if(new_pin=="0000"){
		cout<<"New pin cannot be the same as the previous pin.Try again"<<endl;goto back;
					   }
			 		  cout<<"Confirm new PIN: ";
			 		  cin>> com_pin;		 		 
			 		  
			 		  
			 		  if(new_pin!=com_pin){
			 cout<<"Please the pin donot match so try again"<<endl; goto back;
					   } 
					    
					   else{   
					   	 cout<<"you have change pin code to "<<new_pin<<"\n"<<endl;
					   	   goto start;
					   	   
					   	  break;	
					   	
					   }
					   	}	
					  //checking if pin is coorect 	
			 	    if(old_pin!="0000"){ 
			        cout<<"Incorrect momo PIN.Please try again: "; 
			       cin>>old_pin;   
			       if(old_pin=="0000"){
			       	   goto back; 			       	
				   }
							   
				   else if(old_pin!="0000"){ 
				  cout<<"Incorrect momo PIN.Please try again: "; 
                     cin >>old_pin; 
                     if(old_pin=="0000"){
                     	goto back;               
				}
				   
				
				else{				
                  cout<<"You are block call 100 for more information"; 	
					 return 0;	 	   	    
                 }				                     			  				      			     		  			   				   			      			   			   			        		   		   			   
			   		   	 			   
		}
	
	}
	 //checking balance//
	         case 2:
	         	
        	 	cout<<"Enter your momo pin: ";
        	 	cin>>old_pin;
	         	 	   re_turn:
	         	 	  if(old_pin=="0000"){
	         	 	  	  cout<<"Current balance: "<<balance<<endl<<endl;
	         	 	  	   goto start;
						}
						   if(old_pin!="0000"){
					  	  cout<<"wrong pin try again: "; 
					   	   cin>>old_pin;
					  	   if(old_pin=="0000"){
					 	   goto re_turn;
												  }						   	    
						   
					   else if(old_pin!="0000"){
				   	  cout<<"wrong pin try again: ";
				  	   cin>>old_pin;
					  	 if(old_pin=="0000"){
						 	goto re_turn;
								 }
						 						
						  
					   	 else{
						   	 cout<<"you are block call 100 for more infomation: ";
						   	 return 0;
						   	 
						   	  
								   }
						}
							}
							// sending money//
								case 3:
								string monumber;
								string co_number;
								float amount;
								 re_enter:
								 
								string mopin;
								 string reference;
								 //recieving momo pin
								cout<<"Enter mobile number: \n";
								cin >>monumber;
                                   
								  cout<<"confirm number: \n";
								  cin>>co_number;
								  
							//comfirming momo number	 
								  if(monumber!=co_number){
								  	 cout<<"Number Mismatch\n"; goto re_enter;
								  }
								    
								    if(monumber==co_number){
								    	avaliable_amount:
								    	cout<<"enter amount: ";	
											cin>>amount;
								        cout<<"Enter reference: ";
						        cin>>reference;
						      if(amount>balance){
			       	cout<<"Not enough Fund for this transaction\n"; goto avaliable_amount;
									
								}
									else{ 
										 
							cout<<"Enter momo PIN: ";
								 cin>>mopin;
								 }
							  if(mopin=="0000"){
								  	mobile_pin:
	cout<<"Payment made for GHS "<<""<<amount<<"to "<<monumber<<" current balance: "<<endl<<balance-amount<<""<<" Reference: "<<reference<<endl<<endl;
			                     goto start;
							}
								
					   if(mopin!="0000"){ 
						cout<<"Wrong PIN. Try again: "; 
							  	  cin>>mopin;
								  	  if(mopin=="0000"){
	   				  	  	 goto mobile_pin; 
												}
								else if(mopin!="0000"){
									cout<<"Wrong PIN.Try again: ";
									cin>>mopin;
									if(mopin=="0000"){
										goto mobile_pin;
										}
										
											  else{
										  
							 cout<<"your account is blocked call 100 for more information";
									  
									     break;
	   							  	  return 0;
											 }													
													}
										}											  
											  }
									      
						
									 
									//end //  
									  if(select==4){
									  	  return 0;
									  }
									 }
									 return 0;	     
										}
										

