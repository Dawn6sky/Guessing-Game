#include<iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int option, a, b;
	cout <<"Please select your route [ 1 or 2 ] : ";
	cin >> option;
	
	switch (option )
	{
		case 1:
			cout << "\n\nWelcome to the path of no return, Miss Shivanee A/P Kuhan. \n\n";
			cout << "Press 1 to continue. ";
			cin >> a;
			
			switch (a)
			{
				case 1:
					cout << "\n\nHere it comes. \n\n";
					cout << "1+1 = ";
					cin >>  b;
				
					switch (b)
					{
						case 2:
							cout << "\n\nCongratulations. You're right. \n\n";
							cout << "\n\nNow, using a=1, b=2, c=3 ...... z=26, solve the secret code below: \n\n\n\n";
							cout << "3 15 14 14 5 3 20 9 15 14 2 5 20 20 5 18 20 8 1 14 21 20 13 23 9 6 9 , 16 18 15 22 5 14 . \n\n";
							cout << "19 5 14 4 13 5 20 8 5 4 5 3 18 25 16 20 5 4 19 5 14 20 5 14 3 5 19 20 15 21 14 12 15 3 11 20 8 5 19 5 3 18 5 20 6 9 12 5.";
							break ;
						
						default:
							cout <<"\nOpps. Looks like I've mistaken 02 for 20. My bad.";
							break;
					}
					
					break;	
					
				default:
					cout << "\n\nMCO really took a toll on your reading. Haizz... \n";
					break;
				}
				
		case 2:
			cout << "\n\nHave a great week ahead. \n";
			break;		
		
		default:
			cout << "\nHmmm... Seems that you have forgotten the Skill: Read. Please max it out before coming here.";
			break;
	}
	
}
	



