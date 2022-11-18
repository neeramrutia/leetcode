class Solution {
    ArrayList<String> al=new ArrayList<String>();
    public List<String> generateParenthesis(int n) {
        dfs("",n,0,0);
        return al;
    }
    public void dfs(String s,int n,int open,int close)
    {
        if(open==close && open==n)
            al.add(s);
        
        if(open<n)
        {
            dfs(s+"(",n,open+1,close);
        }
        if(close<open)
        {
            dfs(s+")",n,open,close+1);
        }
    }
}