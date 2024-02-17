
//with the help of hashmap

int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
    unordered_map<int,int>frq;

    int maxFre=0;
    int maxans=0;
    for(int i=0; i<arr.size();i++){
        // maxFre[arr[i]]++; //or
        frq[arr[i]]=frq[arr[i]]+1;
        maxFre=max(maxFre,frq[arr[i]]); // Update maxFre if current element's frequency is greater
    }

    for(auto i=0;i<arr.size();i++){
        if(frq[arr[i]]==maxFre){
           maxans =arr[i];
           break;
        }
    }
    return maxans;
}
   