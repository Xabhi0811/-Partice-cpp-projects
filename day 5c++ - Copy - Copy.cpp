/*#include<iostream>
using namespace std;
int main( ){
	int a,i,n;
	cout<<"enter any num";
	cin>>n;
	for(i=1;i<=10;i++)
	{
		a=n*i;
	
	cout<<n<<"*"<<i<<"="<<a<<endl;}
	return 0;
}
#include<iostream>
using namespace std;
int main(){

  int i=1,n,sum;
cout<<"enter any num";
cin>>n;
for(i=1;i<=n;i++)
{
  

}
cout<<"sum of your natural no is "<<sum;
return 0;}*/

/*#include<iostream>
using namespace std;
int main(){

  int i=1,n,sum;
cout<<"enter any num";
cin>>n;

	for(i=1;i<=n;i++){
	if(n/2==0){
	sum=n*(n+1)/2;}
	cout<<"sum of natural no is"<<sum;
      }


//cout<<"sum of your natural no is "<<sum;
return 0;}*/
/*#include <iostream>
using namespace std;

int sumOfEvenNumbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += 2 * i;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the number of even numbers to sum: ";
    cin >> n;

    int result = sumOfEvenNumbers(n);
    cout << "The sum of the first " << n << " even numbers is: " << result << endl;

    return 0;
}*/

#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return true;
            else
                return false;
        } else
            return true;
    } else
        return false;
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (isLeapYear(year))
        cout << year << " is a leap year." << endl;
    else
        cout << year << " is not a leap year." << endl;

    return 0;
}





























