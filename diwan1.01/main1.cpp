#include <iostream>
#include <string>
#include<fstream>
#include <vector>
#include<algorithm>
#include<iterator>

using namespace std;

int main() {

	fstream file1("file1.txt");// get file streams
	fstream file2("file2.txt");
	fstream file3("file3.txt");

// std::size_t found = str.find(str2);
//	  if (found!=std::string::npos)


	string word1,word2;
	string match ,buffer;
 vector<string>FL1 ;
 vector<string>FL2;
 vector<string>output;
 vector<string>::iterator out;
 vector<string>::iterator nm1 ;
 vector<string>::iterator nm2;
 file3.clear();
 while (file1 >> word1){
	 FL1.push_back(word1);
 }
 while ( file2 >> word2){
	 FL2.push_back(word2);
 }
// for(myIntVectorIterator = myIntVector.begin(); myIntVectorIterator != myIntVector.end();myIntVectorIterator++)
for (nm1 = FL1.begin(); nm1 != FL1.end();nm1++){
	match = *nm1 ;
 cout << "match = " << match <<endl;
	  for (nm2 = FL2.begin(); nm2 != FL2.end() ; nm2++){
		    if (match.compare(*nm2)==0){

		    	output.push_back(match);
//		    	file3 << match <<endl;
		    	match.clear();
		         }
	     	}
	  }
sort(output.begin(),output.end());
int size = output.size();
int wordCount = 1;
string words = output[0];
for ( int i=1; i < size;i++){
	if(words!= output[i]){
		cout << words << " appered " << wordCount << " times!" <<endl;
		if (wordCount < 6){
			file3 << words << endl;
		}
      wordCount=0;
	 words = output[i];
	}
	wordCount++;

}
}



















//       cout << " no matches!" <<endl;

//
//		}
//		cout <<"word1 : "<< word1 << endl;
//			if (word1.compare(x) ==0) //||search.compare(word2) ==0||search.compare(word3) ==0)
//				{
//
//				count++;
//
//				cout <<" "<< word1 <<" "<< word2 << " "<< word3 << endl;
//			}
//
//			}
//	    if (count > 0 ){
//	    	cout << "I found "<< count << " matches!!" <<endl;
//	    	count =0;
//	    }else {
//	    	cout  << "!!No match was found here!!" << endl;
//	    	count =0;
//	    }















//cout << "___________________ 1st paragraph___________________ "<< endl;
//				searchFx(file1,word1,word2,word3,search,count);
//		cout << "___________________ 2nd paragraph___________________ "<< endl;
//				searchFx(file2,word1,word2,word3,search,count);
//		cout << "___________________ 3rd paragraph___________________ "<< endl;
//				searchFx(file3,word1,word2,word3,search,count);
//







