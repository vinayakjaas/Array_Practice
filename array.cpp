//Write a C++ program to find the largest element of a given array of integers
/*#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
   int array[]={1,2,9,6,5};
   int result=array[0];
   for (int i = 0; i < 5; i++)
   {
      if (array[i]>result)
      {
         result=array[i];
      }
      
   }
   cout<<result<<endl;
   return 0;
}*/
//Write a C++ program to find the largest three elements in an array
/*#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
   int array[]={1,2,8,9,7};
   int result1=array[0];
   int result2=array[0];
   int result3=array[0];
   int index;
   for (int i = 0; i <5; i++)
   {
      if (array[i]>result1)
      {
         
         result1=array[i];
         index=i;
      }  
   }
   array[index]=-1;
   for (int i = 0; i < 5; i++)
   {
      if (array[i]>result2)
      {
         result2=array[i];
         index=i;
      }
      
   }
   array[index]=-2;
   
   for (int i = 0; i < 5; i++)
   {
      if (array[i]>result3)
      {
         result3=array[i];
         index=i;
      }
      
   }

   
   cout<<result1<<result2<<result3<<endl;
   return 0;

}*/
//Write a C++ program to find the largest three elements in an array using function
/*#include <iostream>
using namespace std;
int maximum(int n,int array[]){
   int initial=array[0];
   int index;
   for (int i = 0; i < n; i++)
   {
      if (array[i]>initial)
      {
         initial=array[i];
         index=i;
      }
      
   }
   array[index]=-1;
   return initial;   
}
int main(int argc, char const *argv[])
{
   int array[]={1,2,8,9,7};
   int n=5;
   int result1=maximum(n,array);
   int result2=maximum(n,array);
   int result3=maximum(n,array);
   cout<<result1<<" "<<result2<<" "<<result3;

   return 0;
}*/

//Write a C++ program to find second largest element in a given array of integers
/*#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
   int array[]={1,3,5,8,9,11};
   int s_max1=array[0];
   int s_max2=array[0];
   int index;
   for (int i = 0; i < 6; i++)
   {
      if (array[i]>s_max1)
      {
         s_max1=array[i];
         index=i;
      }
      
   }
   array[index]=-1;
   for (int i = 0; i < 6; i++)
   {
      if (array[i]>s_max2)
      {
         s_max2=array[i];
      }
      
   }
   cout<<s_max2;
   return 0;
}*/
//Write a C++ program to find second largest element in a given array of integers using function
/*#include<iostream>
using namespace std;
int maximum(int n,int array[]){
   int s_max1=array[0];
   int index;
   for (int i = 0; i < n; i++)
   {
      if (array[i]>s_max1)
      {
         s_max1=array[i];
         index=i;
      }
      
   }
   
   array[index]=-1;
   return s_max1;
}
int main(int argc, char const *argv[])
{
   int array[]={1,2,3,5,7,9,15};
   int index;
   int n=7;
   int result=maximum(n,array);
   int result2=maximum(n,array);
   cout<<result2;
   return 0;
}*/
//Write a C++ program to find k largest elements in a given array of integers using function
/*#include<iostream>
using namespace std;
int maximum(int n,int array[]){
   int s_max1=array[0];
   int index;
   for (int i = 0; i < n; i++)
   {
      if (array[i]>s_max1)
      {
         s_max1=array[i];
         index=i;
      }
      
   }
   
   array[index]=-1;
   return s_max1;
}
int main(int argc, char const *argv[])
{
   int array[]={1,2,3,5,7,9,15};
   int index;
   int result;
   int n=7;
   int k;
   cin>>k;
   for (int i = 0; i < k; i++)
   {
      result=maximum(n,array);
   }
   cout<<result;
   return 0;
}*/
//Write a C++ program to find the second smallest elements in a given array of integers
/*#include <iostream>
using namespace std;
int smallest(int n,int array[]){
   int initial=array[n];
   int index;
   for (int i = 0; i < n; i++)
   {
      if (array[i]<initial)
      {
        initial=array[i]; 
        index=i;
      }
      
   }
   array[index]=-1;
   return initial;

}
int main(int argc, char const *argv[])
{
   int array[]={1,2,3,5,7,9,15};
   int n=7;
   int result;
   result=smallest(n,array);
   cout<<result;
   return 0;
}*/

//Find the two repeating elements in a given array
/*#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int array[n];
	for (int i = 0; i < n; i++)
	{
		cin>>array[i];
	}
	
	
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (array[i]==array[j])
			{
				cout<<array[i]<<" ";
			}
			
		}
		
	}
	
	return 0;
}*/


