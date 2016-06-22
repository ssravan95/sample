#include<iostream>
using namespace std;
class company
{
 public:
   float amount;
   string cname;
};
int main()
{
  int n,i,j,k,min_idx;int temp=0,*arr,l=0;
  cout<<endl<<"no.of companies participating";
  cin>>n;
  company c[n];
  for(i=0;i<n;i++)
  {
  cout<<"enter company name and amount "  <<endl;
  cin>>c[i].cname;
  cin>>c[i].amount;
	arr[i]=c[i].amount;
  }
  /*implement sorting algorithm here
  sort objects basing on c[i].amount
   and display last 3*/

   for (k=0;k<n-1;k++)
    {

	min_idx = i;
	for (j = i+1; j < n; j++)
	  if (arr[j] < arr[min_idx])
	    min_idx = j;

	temp = arr[min_idx];
    arr[min_idx] = *arr[i];
    arr[i] = temp;

    }

	for(l=0;l<3;l++)
	{
		out[l]=arr[l];
		cout<<out[l];
	}



 return 0;

}
