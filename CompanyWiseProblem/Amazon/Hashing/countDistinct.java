import java.util.*;
import java.io.*;
import java.util.HashMap;

class GFG{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0)
		{
			int n = sc.nextInt();
			int k = sc.nextInt();
			int a[] = new int[n];
			for(int i=0; i<n; i++)
			{
				a[i] = sc.nextInt();
			}
			Solution g = new Solution();

			ArrayList<Integer> ans = g.countDistinct(a,n,k);

			for(Integer val: ans)
			{
				System.out.print(val+" ");
			}
			System.out.println();
			t--;
		}
	}
}

class Solution {
	ArrayList<Integer> countDistinct(A[], int n, int k)
	{
		ArrayList<Integer> c = new ArrayList<Integer>();
        
        ArrayList<Integer> ans = new ArrayList<Integer>();
		int l = A.length;
		for(int j=0; j<k; j++)
		{
			c.add(A[j]);
		}

		TreeSet<Integer> d = new TreeSet(c);
// 		System.out.print(d.size()+" ");
        ans.add(d.size());
		for(int j=k; j<l; j++)
		{
			c.add(A[j]);
			c.remove(0);
			TreeSet<Integer> dr = new TreeSet(c);
			ans.add(dr.size());
// 			System.out.print(dr.size() +" ");
		}
		return ans;

	}
}