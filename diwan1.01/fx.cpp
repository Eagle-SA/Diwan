
#include <iostream>
#include <string>
#include<fstream>

using namespace std ;

int paraLen(fstream& x){ // Working 100%
		x.seekg(0,x.end);
		int len = x.tellg();
		x.seekg(0,x.beg);

	 return len;
}

void searchFx (fstream& file1 ,string word1, string word2, string word3 , string search , int count){

	while ( file1 >> word1 >> word2 >> word3 ){
		if (search.compare(word1) ==0 ||search.compare(word2) ==0||search.compare(word3) ==0){

			count++;

			cout <<" "<< word1 <<" "<< word2 << " "<< word3 << endl;
		}

		}
    if (count > 0 ){
    	cout << "I found "<< count << " matches!!" <<endl;
    	count =0;
    }else {
    	cout  << "!!No match was found here!!" << endl;
    	count =0;
    }
}
void searchNew (fstream& file1,fstream& file2 ){
int count = 0 ;
string x1,x2 ;
	       while (file1 >> x1){
	          file2.open("file2.txt");
						while ( file2 >> x2){

						if (x1.compare(x2) ==0) //||search.compare(word2) ==0||search.compare(word3) ==0)
							{
							count++;
	                      cout << count << endl;
							cout <<"Match !!!!!!!!!!!!!!!!!!!! :  "<< x1 <<" "<< x2 << endl;
						     file2.close();
							}
	         }
	     }
	}


