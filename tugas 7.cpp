#include<iostream>
#include<conio.h>
/*Fahmi Fahqur Rozi*/
/*20051397060*/
/*2020B*/

using namespace std;
int main()
{
	system ("color 0A");
      int nilai;
      cout << "Masukkan jumlah baris: ";cin>>nilai;
      cout << "-----------------------" <<endl;
      
      for (int a=1; a <= (nilai*2)-1; a++)
      {
        if (a <= nilai){
        for(int b = 1; b <= a; b++)
        cout<<b;
		}else{
		for(int c = 1; c <=nilai*2-a; c++)
		 cout<<c;
		}
		cout<<endl;
      }
      
      return 0;
}
