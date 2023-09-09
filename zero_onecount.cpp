void zeroonecount(int arr[],int size){
  int zerocount =0;
  int onecount =0;
  int n = size;
  //traversing the array//
  for(int i=0;i<n;i++){
    if(arr[i]==0){                       //puting the condition for zero and one//
       zerocount++;
    }
    else{
      onecount++;
    }
  }
  cout<<"zero count"<<zerocount<<endl;
  cout<<"one count"<<onecount<<endl;
  

}

int main(){
  int arr[]={0,1,1,1,0,0,1,1};
  int n = 8;
  cout<<"Toatl no of zeros and ones are:"<<endl;
  zeroonecount(arr,n);
}
