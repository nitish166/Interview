using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>arr[i];
	    }
	    int k;
	    cin>>k;
	    map<int, int> m;
	    for(int i=0; i<n; i++)
	    {
	        m[arr[i]]++;
	    }
	    vector<int> ans;
	    int sum =0;
	    for(auto x: m)
	    {
	        ans.push_back(x.first);
	    }
	    for(int i=0; i<k; i++)
	    {
	        sum +=ans[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}