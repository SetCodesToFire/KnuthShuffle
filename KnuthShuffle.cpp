#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void)
{
  int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,
    14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
  cout<<"\n UnShuffled Array:\n";
  for(int j=0;j<30;j++)
  {
    cout<<" "<<arr[j]<<" ";
  }
  int i,mark=0,temp;
  while(mark<30)
  {
    i=rand() % (30-mark) + mark;
    if(i>29) return 0;
    temp=arr[mark];
    arr[mark]=arr[i];
    arr[i]=temp;
    mark++;
  }
  cout<<"\n Shuffled Array:\n";
  for(int j=0;j<30;j++)
  {
    cout<<" "<<arr[j]<<" ";
  }
  return 0;
}
