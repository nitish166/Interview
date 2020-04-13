#include <bits/stdc++.h>
using namespace std;

typedef complex<double> base;
vector<base >init_omega(long long n)
{
	vector<base> omega(n);

	double PI = acos(-1);
	double angle = 2*(PI/n);

	for(long long k=0; k<n; k++)
	{
		omega[k] = base(cos(angle*k), sin(angle*k));
	}
	return omega;
}

vector<base> fft(vector<base> &a, vector<base> &omega)
{
	long long n = (long long) a.size();
	if(n==1)
	{
		return a;
	}

	long long half = n>>1;
	vector<base> aeven(half);
	vector<base> aodd(half);

	for(int i=0, j=0; i<n; i+=2, j++)
	{
		aeven[j] = a[i];
		aodd[j] = a[i+1];
	}

	// recursive calls
	vector<base> yeven = fft(aeven, omega);
	vector<base> yodd = fft(aodd, omega);

	vector<base> y(n);
	for(int k=0; k<half; k++)
	{
		y[k] = yeven[k] + omega[k]* yodd[k];
		y[k+half] = yeven[k] - omega[k]*yodd[k];
	}
	return y;

	
}

int main()
{
	vector<base> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	vector<base> omega = init_omega(a.size());
	vector<base> y = fft(a, omega);
	for(int i=0; i<y.size(); i++)
	{
		cout<<y[i]<<endl;
	}
	return 0;
}