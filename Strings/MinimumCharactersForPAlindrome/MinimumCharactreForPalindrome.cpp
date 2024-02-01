// bool isPalindrome(string A)
// {
//     int i=0,j=A.size()-1;
//     while(i<j)
//     {
//         if(A[i]!=A[j])
//          {   return false;}
// 		i++;
// 		j--;
        
//     }
//     return true;
// }
int minCharsforPalindrome(string s) {
	// int flag=0,cnt=0;
	// int n=s.size();
    //  while(s.length()>0)
    // {
    //     if(isPalindrome(s))
    //     {
    //         flag = 1;
    //          break;
    //     }
    //     else
    //     {
	// 		cnt++;
	// 		s=s.substr(0,n-1);
	// 		n--;
    //     }
    // }
    // return cnt;
	int start=0,end=s.size()-1,ans=0;
	int n=s.size();
	while(start<end)
	{
		if(s[start]==s[end])
		{
			start++;
			end--;
		}
		else{
			ans++;
			start=0;
			end=n-1-ans;
			
		}
		
	}
	return ans;
	
}
