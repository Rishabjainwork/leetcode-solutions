class Solution {

    int start=0;
    int end=0;

    public String longestPalindrome(String s) {
        getString(s.toCharArray(), 0);
        return s.substring(start, end+1);
    }
    public void getString(char[] arr, int i)
    {   int n=arr.length;
        if(i>=arr.length) return;

        int left=i;
        int right=i;
        while(right+1<n && arr[i]==arr[right+1])
        right++;

        i=right+1;

        while(right+1<n && left-1>=0 && arr[right+1]==arr[left-1])
        {
            right++;
            left--;
        }

        if(end-start < right-left)
        {
            start=left;
            end=right;
        }
        getString(arr, i);
    }
}